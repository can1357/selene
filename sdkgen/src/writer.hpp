#pragma once
#include <unordered_map>
#include <filesystem>
#include <vector>
#include <string>
#include <optional>
#include <pdblib/pdb.hpp>
#include "config.hpp"

namespace sdk
{
	// Defines a cross-build type instance.
	//
	struct shared_type_entry
	{
		const config::build_entry* build;
		const config::pdb_entry* pdb;
		pdb::leaf_generic* type;
		pdb::instance* owner;
	};
	using shared_type = std::vector<shared_type_entry>;

	// Defines a cross-build public instance.
	//
    struct public_record
    {
        // Source information.
        //
        const config::pdb_entry* pdb = nullptr;
        pdb::instance* owner = nullptr;

        // Placed location.
        //
        std::string section_name = {};
        uint64_t rva = 0;
        size_t size = 0;

        // Validity check.
        //
        explicit operator bool() const { return pdb != nullptr; }

        static std::optional<public_record> convert( const config::pdb_entry* pdb, pdb::instance* owner, const std::string& name )
        {
            if ( pdb->type_only() ) return std::nullopt;
            auto it = owner->public_map.find( name );
            if ( it == owner->public_map.end() ) return std::nullopt;
            if ( it->second.addresses.size() != 1 ) return std::nullopt;

            dbi::pointer ptr = *it->second.addresses.begin();
            auto [rva, sec] = owner->dbi.translate( ptr );
            if ( !rva && !sec ) return std::nullopt;

            public_record record = {};
            record.pdb = pdb;
            record.owner = owner;
            record.rva = rva;
            record.section_name = "$";
            if ( sec )
                record.section_name = sec->name.to_string();

            for ( auto& sec : owner->dbi.section_contribs )
                if ( sec.get_address() == ptr )
                    record.size = std::max<size_t>( sec.size, record.size );

            return record;
        }
    };
    struct shared_public
    {
        // Originating records and chosen type per build.
        //
        std::optional<public_record> record[ config::num_builds ];
        std::optional<shared_type_entry> type[ config::num_builds ];

        // Original and the transformed name.
        //
        std::string original_name;
        std::string transformed_name;

        // Quick helper to get loader group.
        //
        const config::loader_group* get_ldr_group() const
        {
            for ( auto& rec : record )
                if ( rec )
                    return &rec->pdb->ldr_group;
            return nullptr;
        }
    };
    using shared_exports = std::vector<shared_public>;

    // Writes the export list for the given namespace at the given directory.
    //
    void write_exports( const shared_exports& exports, const std::filesystem::path& output_directory );

	// Writes the header for the given type at the given directory.
	//
	void write_type( const shared_type& type, const std::filesystem::path& output_directory );
};