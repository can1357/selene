#pragma once
#include <vector>
#include <tuple>
#include <filesystem>
#include <memory>
#include <string>
#include <optional>
#include <pdblib/pdb.hpp>
#include <xstd/file_view.hpp>
#define IN_GENERATOR 1
#include <sdkgen/support_library.hpp>

// Exposes a simplified PDB interface for searching symbols.
//
namespace pdb
{
	struct collection
	{
		// Complete list of PDBs including the ones that are not loaded yet.
		//
		std::vector<std::tuple<std::filesystem::path, uint64_t, bool>> dictionary;

		// List of PDBs already loaded.
		//
		std::vector<std::unique_ptr<pdb::instance>> pdbs;

		// Used for internal file-mapping tracking.
		//
		std::vector<std::shared_ptr<xstd::file::shared_view<>>> file_entries;

		// Adds a deferred PDB entry.
		//
		void append_entry( const std::filesystem::path& path, uint64_t base_address )
		{
			dictionary.emplace_back( path, base_address, false );
		}

		// Invokes searcher for every PDB in the list, if entry is not loaded yet loads it into memory,
		// basically a lazy-loading searcher via an enumerator.
		//
		template<typename T>
		auto search( T&& fn ) -> decltype( fn( std::declval<pdb::instance*>(), 0ull ) )
		{
			// For each entry:
			//
			for ( size_t n = 0; n != dictionary.size(); n++ )
			{
				// If PDB is not loaded, load it.
				//
				auto& [path, base_address, loaded] = dictionary[ n ];
				if ( !std::exchange( loaded, true ) )
				{
					if ( auto file = xstd::file::map_view( path ) )
					{
						file_entries.emplace_back( file.value() );
						pdbs.emplace_back( std::make_unique<pdb::instance>( msf::stream{ file->data(), file->size() } ) );
					}
					else
					{
						pdbs.emplace_back( nullptr );
					}
				}

				// If PDB loaded without any xstd::errors, invoke searcher, if found break out of the loop.
				//
				if ( auto& pdb = pdbs[ n ] )
				{
					if ( auto value = fn( pdb.get(), base_address ) )
						return value;
				}
			}
			return {};
		}

		// Tries to fill a public/field entry for the given identifiers.
		//
		sdk::public_entry find_public( const std::string& identifier )
		{
			return search( [ & ] ( pdb::instance* pdb, uint64_t base_address ) -> std::optional<sdk::public_entry>
			{
				if ( !base_address )
					return std::nullopt;

				if ( auto it = pdb->public_map.find( identifier ); it != pdb->public_map.end() )
				{
					// If exactly one entry:
					//
					if ( it->second.addresses.size() == 1 )
					{
						// Convert the SEG:OFF into RVA.
						//
						dbi::pointer ptr = *it->second.addresses.begin();
						auto [rva, sec] = pdb->dbi.translate( ptr );
						if ( !sec ) return std::nullopt;

						// Mark existing, try to figure out the size from the section contribution list. 
						//
						sdk::public_entry entry;

						entry.exists = true;
						entry.offset = rva;
						entry.virtual_address = base_address + rva;
						entry.size = 0;
						for ( auto& sec : pdb->dbi.section_contribs )
							if ( sec.get_address() == ptr )
								entry.size = sec.size;
						return entry;
					}
				}
				return std::nullopt;
			} ).value_or( sdk::public_entry{ .exists = false } );
		}
		sdk::offset_entry find_field( const std::string& type_name, const std::string& field_name )
		{
			return search( [ & ] ( pdb::instance* pdb, uint64_t base_address ) -> std::optional<sdk::offset_entry>
			{
				// If PDB contains the type name:
				//
				auto& types = pdb->string_map[ pdb::str_type_name ];
				if ( auto it = types.find( type_name ); it != types.end() )
				{
					// For each valid class entry:
					//
					for ( auto& type : it->second.second )
					{
						if ( auto* cls = type->as<pdb::leaf_class>(); cls && cls->fields )
						{
							// Enumerate fields, if found return.
							//
							sdk::offset_entry entry = { .exists = false };
							auto fields = cls->fields->as<pdb::leaf_fieldlist>();
							fields->enum_variables( [ & ] ( const pdb::leaf_fieldlist::entry_member& member, size_t bit_offset )
							{
								if ( !entry.exists && member.name.resolve_original() == field_name )
								{
									entry.exists = true;
									entry.bit_offset = bit_offset;
									entry.bit_size = member.type ? member.type->bit_size() : 0;
								}
							} );
							if ( entry.exists ) return entry;
						}
					}
				}
				return std::nullopt;
			} ).value_or( sdk::offset_entry{ .exists = false } );
		}
	};
};