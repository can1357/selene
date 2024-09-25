#include "logo.hpp"
#include <xstd/text.hpp>

#pragma GCC diagnostic ignored "-Wbraced-scalar-init"
namespace linker::transform
{
	static constexpr const char* text_image[] = {
	// Your ascii art here.
		{ R"(                          #####         )" },
		{ R"(                   #############        )" },
		{ R"(            #####################       )" },
	};

	// Appends the logo to the entry point.
	//
	void add_logo( collection& col, ref::strong_ptr<symbol>& ep )
	{
		// Allocate a new section and a symobl.
		//
		auto& ep_scn = ep->scn->owner->sections.emplace_back( ref::allocate<linker::section>() );
		ep_scn->owner = ep->scn->owner;
		ep_scn->name = ".text";
		ep_scn->characteristics.cnt_code = true;
		ep_scn->characteristics.mem_read = true;
		ep_scn->characteristics.mem_execute = true;

		auto ep_sym = ref::allocate<linker::symbol>();
		ep_sym->scn = ep_scn;
		ep_sym->name = "logo_entry_point";
		ep_sym->storage_class = coff::storage_class_id::public_symbol;
		ep_sym->derived_type = coff::derived_type_id::function;
		ep_scn->symbols = { ep_sym };
		col.attributes.add( ep_sym->name, "init_discardable" );
		fassert( col.public_symbols.emplace( ep_sym->name, ep_sym ).second );

		// random pushes.
		//
		if ( xstd::make_random<bool>() )
			ep_scn->raw_data.emplace_back( 0x41 );
		ep_scn->raw_data.emplace_back( xstd::make_random( 0x50, 0x57 ) );

		// Call into real entry point via an opaque.
		//
		/*
			cmp rcx, 0x00c0ffe00
			jz x
				call <>
				int 3
			x:
		*/
		ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x48, 0x81, 0xF9, 0x00, 0xFE, 0x0F, 0x0C, 0x74, 0x06, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xCC } );
		ep_scn->relocs.push_back( { ep_scn->raw_data.size() - 5, ep, coff::rel_amd64_rel32 } );

		// Add a jump table.
		//
		/*
			lea rax, [rip+x]
			mov ecx, [rax+rcx*4]
			add rax, rcx
			jmp rax
			x:
		*/
		ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x48, 0x8D, 0x05, 0x08, 0x00, 0x00, 0x00, 0x8B, 0x0C, 0x88, 0x48, 0x01, 0xC8, 0xFF, 0xE0 } );

		// Write the cases to form an image.
		//
		constexpr size_t ins_count = 46;
		size_t width = xstd::strlen( text_image[ 0 ] );
		size_t heigth = std::size( text_image );

		size_t table_begin = ep_scn->raw_data.size();
		ep_scn->raw_data.resize( table_begin + width * 4 );

		std::vector<uint32_t> table;
		for ( size_t n = 0; n != width; n++ )
		{
			table.emplace_back( xstd::narrow_cast< uint32_t >( ep_scn->raw_data.size() - table_begin ) );
			ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0xEB, 0x00 } );

			for ( size_t k = 0; k != heigth; k++ )
			{
				if ( !isspace( text_image[ k ][ n ] ) )
				{
					for ( size_t i = 0; i != ins_count; i++ )
						ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0xC4, 0xE2, 0x69, 0x04, 0x0D, 0xEE, 0xEE, 0xFF, 0xC0 } );
				}
				else
				{
					for ( size_t i = 0; i != ins_count; i++ )
						ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x90 } );
				}

				if ( k == ( heigth - 1 ) )
					ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x90, 0xC3 } );
				else
					ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0xEB, 0x00 } );
			}
		}
		memcpy( ep_scn->raw_data.data() + table_begin, table.data(), table.size() * 4 );

		// Swap the entry point.
		//
		ep = ep_sym;
	}
};
