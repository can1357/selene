#if !__private_binary__ && not defined(NO_NTPP)
#include "ci.hpp"
#include <xstd/text.hpp>

namespace ntpp::ci
{
	// Enumerates relocations in the given image, user callback is invoked with [Rva, Length].
	//
	RINLINE void enum_relocs( const win::image_x64_t* img, xstd::function_view<void( uint32_t, size_t )> fn, bool mapped )
	{
		// If relocation directory is present:
		//
		if ( auto dir = img->get_directory( win::directory_entry_basereloc ) )
		{
			// Get block boundaries:
			//
			const win::reloc_block_t* first_block = any_ptr( mapped ? xstd::ptr_at<uint8_t>( img, dir->rva ) : img->rva_to_ptr( dir->rva ) );
			const void* last_block = xstd::ptr_at( first_block, dir->size );

			// For each entry:
			//
			for ( auto block = first_block; block < last_block; block = block->next() )
			{
				for ( auto& entry : *block )
					fn( block->base_rva + entry.offset, entry.type == win::reloc_type_id::rel_based_dir64 ? 8 : 4 );
			}
		}

		// If load configuration directory is present:
		//
		const size_t min_cfg = xstd::make_offset( &win::load_config_directory_x64_t::dynamic_value_reloc_table_section ) + 2;
		if ( auto dir = img->get_directory( win::directory_entry_load_config ); dir && dir->size > min_cfg )
		{
			// If dynamic relocation table is present:
			//
			const win::load_config_directory_x64_t* cfg = any_ptr( mapped ? xstd::ptr_at<uint8_t>( img, dir->rva ) : img->rva_to_ptr( dir->rva ) );
			if ( cfg && cfg->size >= min_cfg && cfg->dynamic_value_reloc_table_section )
			{
				auto* scn = img->get_nt_headers()->get_section( cfg->dynamic_value_reloc_table_section - 1 );
				if ( scn && scn->size_raw_data >= ( cfg->dynamic_value_reloc_table_offset + sizeof( win::dynamic_reloc_table_x64_t ) ) )
				{
					// If known version:
					//
					if ( const win::dynamic_reloc_table_x64_t* dyn_relocs = xstd::ptr_at( img, ( mapped ? scn->virtual_address : scn->ptr_raw_data ) + cfg->dynamic_value_reloc_table_offset );
						 dyn_relocs && dyn_relocs->version == 1 )
					{
						// For each dynamic relocation:
						//
						for ( auto* dyn_reloc = &dyn_relocs->v1_begin; dyn_reloc < dyn_relocs->end(); dyn_reloc = dyn_reloc->next() )
						{
							auto iter = [ & ] <typename T> ( xstd::type_tag<T>, auto&& fn )
							{
								// For each block:
								//
								for ( auto* block = dyn_reloc->begin(); block < ( void* ) dyn_reloc->end(); block = block->next() )
								{
									size_t count = ( block->size_block - xstd::make_offset( &win::reloc_block_t::entries ) ) / sizeof( T );
									fn( block->base_rva, std::span( ( const T* ) &block->entries[ 0 ], count ) );
								}
							};

							switch ( ( win::dynamic_reloc_entry_id ) dyn_reloc->symbol )
							{
								case win::dynamic_reloc_entry_id::guard_import_control_transfer:
								{
									iter(
										xstd::type_tag<win::dynamic_reloc_import_control_transfer_t>{},
										[ & ] ( uint32_t base_rva, auto&& block )
										{
											for ( auto& entry : block )
											{
												if ( !entry.page_relative_offset && &entry != block.data() )
													break;
												fn( base_rva + entry.page_relative_offset, 16 );
											}
										}
									);
									break;
								}
								case win::dynamic_reloc_entry_id::guard_indir_control_transfer:
								{
									iter(
										xstd::type_tag<win::dynamic_reloc_indir_control_transfer_t>{},
										[ & ] ( uint32_t base_rva, auto&& block )
										{
											for ( auto& entry : block )
											{
												if ( !entry.page_relative_offset && &entry != block.data() )
													break;
												fn( base_rva + entry.page_relative_offset, 16 );
											}
										}
									);
									break;
								}
								case win::dynamic_reloc_entry_id::guard_switch_table_branch:
								{
									iter(
										xstd::type_tag<win::dynamic_reloc_guard_switch_table_branch_t>{},
										[ & ] ( uint32_t base_rva, auto&& block )
										{
											for ( auto& entry : block )
											{
												if ( !entry.page_relative_offset && &entry != block.data() )
													break;
												fn( base_rva + entry.page_relative_offset, 16 );
											}
										}
									);
									break;
								}
								case win::dynamic_reloc_entry_id::guard_rf_epilogue:
								case win::dynamic_reloc_entry_id::guard_rf_prologue:
									break;
								default:
								{
									iter(
										xstd::type_tag<win::reloc_entry_t>{},
										[ & ] ( uint32_t base_rva, auto&& block ) 
										{
											// For each entry.
											//
											for ( const win::reloc_entry_t& entry : block )
											{
												if ( !entry.offset && &entry != block.data() )
													break;
												fn( base_rva + entry.offset, 8 );
											}
										}
									);
									break;
								}
							}

						}
					}
				}
			}
		}
	}

	// Generates a 160-bit value identifying the code sections uniquely and relocatably using SHA1.
	// - Additionally another input can be given in case relocs are not mapped together with the image.
	//
	RINLINE hash_t generate_hash( const win::image_x64_t* img, bool mapped, const win::image_x64_t* img_disk )
	{
		auto* nt = img->get_nt_headers();

		// Initialize the hash with basic file information.
		//
		hash_t hash{};
		hash.add_bytes( img->dos_header );
		hash.add_bytes( nt->file_header );

		// Initialize the digest mask with FF's.
		//
		std::vector<uint8_t> digest_mask;
		for ( auto& scn : nt->sections() )
		{
			// Skip if not executable or if writable / discardable.
			//
			if ( !scn.characteristics.mem_execute || scn.characteristics.mem_write || scn.is_discardable() )
				continue;
			if ( xstd::istarts_with( scn.name.to_string(), "PAGEwx" ) )
				continue;

			uint32_t rva = scn.virtual_address + std::min( scn.size_raw_data, scn.virtual_size );
			if ( rva > digest_mask.size() )
				digest_mask.resize( rva, 0xFF );
		}

		// Enumerate relocs and fill the relocated parts of the mask with zeroes.
		//
		enum_relocs( img_disk ? img_disk : img, [ & ] ( uint32_t rva, size_t len )
		{
			if ( rva < digest_mask.size() )
				std::fill( digest_mask.begin() + rva, digest_mask.begin() + std::min( rva + len, digest_mask.size() ), 0x00 );
		}, !img_disk && mapped );

		// Iterate every section.
		//
		for ( auto& scn : nt->sections() )
		{
			// Skip if not executable, is writable or if discardable.
			//
			if ( !scn.characteristics.mem_execute || scn.characteristics.mem_write || scn.is_discardable() )
				continue;
			if ( xstd::istarts_with( scn.name.to_string(), "PAGEwx" ) )
				continue;

			// Append the section header.
			//
			hash.add_bytes( scn );

			// Append the data.
			//
			size_t data_length = std::min<size_t>( scn.virtual_address + std::min( scn.size_raw_data, scn.virtual_size ), digest_mask.size() );
			if ( data_length > scn.virtual_address )
				continue;
			data_length -= scn.virtual_address;
			const uint8_t* section_data = xstd::ptr_at( img, mapped ? scn.virtual_address : scn.ptr_raw_data );

			// Mask all data inline and then append to the hash block.
			//
			uint8_t* digest_data = digest_mask.data() + scn.virtual_address;
			for ( size_t i = 0; i != data_length; i++ )
				digest_data[ i ] &= section_data[ i ];
			hash.add_bytes( digest_data, data_length );
		}

		// Finalize the block hash and return.
		//
		hash.finalize();
		return hash;
	}

	// Compare a currently running image against one one disk.
	//
	RINLINE bool compare( const win::image_x64_t* img, const win::image_x64_t* img_disk )
	{
		auto* nt = img->get_nt_headers();
		auto* nt_disk = img_disk->get_nt_headers();

		if ( !xstd::trivial_equals( nt_disk->file_header, nt->file_header ) || nt->optional_header.checksum != nt_disk->optional_header.checksum )
			return false;

		// Initialize the digest mask with FF's.
		//
		std::vector<uint8_t> digest_mask;
		for ( auto& scn : nt->sections() )
		{
			// Skip if not executable or if writable / discardable.
			//
			if ( !scn.characteristics.mem_execute || scn.characteristics.mem_write || scn.is_discardable() )
				continue;
			if ( xstd::istarts_with( scn.name.to_string(), "PAGEwx" ) )
				continue;

			uint32_t rva = scn.virtual_address + std::min( scn.size_raw_data, scn.virtual_size );
			if ( rva > digest_mask.size() )
				digest_mask.resize( rva, 0xFF );
		}

		// Enumerate relocs and fill the relocated parts of the mask with zeroes.
		//
		enum_relocs( img_disk, [ & ] ( uint32_t rva, size_t len )
		{
			if ( rva < digest_mask.size() )
				std::fill( digest_mask.begin() + rva, digest_mask.begin() + std::min( rva + len, digest_mask.size() ), 0x00 );
		} );

		// Iterate every section.
		//
		for ( auto& scn : nt->sections() )
		{
			// Skip if not executable or if writable / discardable.
			//
			if ( !scn.characteristics.mem_execute || scn.characteristics.mem_write || scn.is_discardable() )
				continue;
			if ( xstd::istarts_with( scn.name.to_string(), "PAGEwx" ) )
				continue;

			// Reference the data.
			//
			size_t data_length = std::min<size_t>( scn.virtual_address + std::min( scn.size_raw_data, scn.virtual_size ), digest_mask.size() );
			if ( data_length > scn.virtual_address )
				continue;
			data_length -= scn.virtual_address;

			const uint8_t* scn_mask = digest_mask.data() + scn.virtual_address;
			const uint8_t* scn_mem = xstd::ptr_at( img, scn.virtual_address );
			const uint8_t* scn_disk = xstd::ptr_at( img_disk, scn.ptr_raw_data );
			
			// Xor every byte together and mask accordingly.
			//
			uint8_t failures[ 32 ] = { 0 };
			for ( size_t i = 0; i != data_length; i++ )
				failures[ i & 31 ] |= ( scn_mask[ i ] & ( scn_mem[ i ] ^ scn_disk[ i ] ) );

			// If any of the bytes resulted in a non-zero value, image is mismatching with the disk; fail.
			//
			for ( auto& res : failures )
				if ( res )
					return false;
		}
		return true;
	}
};
#endif