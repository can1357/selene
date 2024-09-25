#pragma once
#include <tuple>
#include <vector>
#include <stdint.h>
#include <cstring>
#include <algorithm>
#include <nt/image.hpp>
#include <xstd/assert.hpp>
#include <xstd/bitwise.hpp>
#include "cvinfo.h"
#include "msf.hpp"

// Implements the PDB format reading the MSF streams.
//
namespace dbi
{
    // Special stream indices.
    //
    static constexpr msf::stream_number_t pdb_stream_idx = 1;
    static constexpr msf::stream_number_t tpi_stream_idx = 2;
    static constexpr msf::stream_number_t dbi_stream_idx = 3;
    static constexpr msf::stream_number_t ipi_stream_idx = 4;

    // Define generic pointer.
    //
    struct pointer
    {
        uint16_t sec;
        uint32_t off;

        constexpr uint64_t generate_identifier() const noexcept { return ( uint64_t( sec ) << 32 ) || off; }
        constexpr bool operator==( const pointer& o ) const noexcept { return generate_identifier() == o.generate_identifier(); }
        constexpr bool operator!=( const pointer& o ) const noexcept { return generate_identifier() != o.generate_identifier(); }
        constexpr bool operator<( const pointer& o ) const noexcept { return generate_identifier() < o.generate_identifier(); }
    };

    // Generic record type.
    //
    struct record
    {
        uint16_t _length;

        size_t length() const { return _length + sizeof( record ); };
        uint8_t* data() { return ( uint8_t* ) ( this + 1 ); }
        const uint8_t* data() const { return ( ( record* ) this )->data(); }
    };

    // Header for the TPI stream. 
    //
    struct tpi_header
    {
        uint32_t              version;          // Version number.
        int32_t               hdr_length;       // Size of the header.
        uint32_t              ti_min;           // Lowest type index.
        uint32_t              ti_max;           // Highest type index.
        int32_t               rec0_length;      // Number of bytes used by the record following the header.

        msf::stream_number_t  hash_stream;      // Main hash stream.
        msf::stream_number_t  hash_aux_stream;  // Auxilliary hash stream.
        int32_t               hash_key_len;     // Size of the hash key in bytes.
        uint32_t              num_hash_buckets; // Number of hash buckets.

        int32_t               off_hashval;      // Offset of hash values in bytes.
        uint32_t              hashval_length;   // Length of the hash values.

        int32_t               off_pairs;        // Offset of <TI, OFF> pairs in bytes.
        uint32_t              pairs_length;     // Length of the <TI, OFF> pairs.

        int32_t               off_hashadj;      // Offset of hash adj in bytes.
        uint32_t              hashadj_length;   // Length of the hash adj.
    };

    // Generic TPI entry.
    //
    struct tpi_record : record
    {
        uint16_t kind;
        // Note: data() = &kind, length() = leaf + sizeof kind + sizeof record 
    };

    // Runtime TPI stream.
    //
    struct tpi_stream
    {
        // Stream header.
        //
        tpi_header hdr;

        // List of every record.
        //
        std::vector<tpi_record*> records;
        
        // Arena holding the allocations.
        //
        std::vector<uint8_t> arena;

        // Default move.
        //
        tpi_stream( tpi_stream&& ) = default;
        tpi_stream& operator=( tpi_stream&& ) = default;

        // No copy allowed, would need to reloc pointers in list.
        //
        tpi_stream( const tpi_stream& ) = delete;
        tpi_stream& operator=( const tpi_stream& ) = delete;

        tpi_stream() {}
        tpi_stream( msf::stream::substream ss )
        {
            if ( !ss.bytes_left )
            {
                memset( &hdr, 0, sizeof( hdr ) );
                return;
            }

            // Read the header.
            //
            hdr = ss.consume<tpi_header>();

            // Read the whole stream into arena.
            //
            arena.resize( ss.bytes_left );
            ss.read( arena.data(), ss.bytes_left );

            // Read all of the records.
            //
            auto it = arena.data();
            records.resize( hdr.ti_max - hdr.ti_min );
            for ( size_t i = 0; i != ( hdr.ti_max - hdr.ti_min ); i++ )
            {
                tpi_record* data = ( tpi_record* ) it;
                records[ i ] = data;
                it += data->length();
            }
        }
    };

    // Header for the DBI stream. 
    //
    struct dbi_header
    {
        int32_t               version_signature;         // Version number.
        uint32_t              version_header;            // Version header.
        uint32_t              age;                       // Age.
        msf::stream_number_t  global_stream_idx;         // Index of the global symbol stream.
                                                         
        uint16_t              dll_minor_version : 8;     // Minor version.
        uint16_t              dll_major_version : 7;     // Major version.
        uint16_t              ver_new_fmt       : 1;     // Flag indicating new version (RBLD is stored elsewhere).
                                                         
        msf::stream_number_t  public_stream_idx;         // Index of the public symbol stream.
        uint16_t              pd_build_version;          // Build version of pdb dll.
        msf::stream_number_t  sym_recs_stream_idx;       // Index of the symbol records stream.
        uint16_t              pd_rbld_version;           // RBLD version of pdb dll.

        msf::byte_size_t      module_info_length;        // Length of the module info substream.
        msf::byte_size_t      sec_contrib_length;        // Length of the subsection contribution substream.
        msf::byte_size_t      sec_map_length;            // Length of the section map substream.
        msf::byte_size_t      file_info_length;          // Length of the file info substream.
        msf::byte_size_t      type_server_map_length;    // Length of the type server map substream.
        uint32_t              mfc_type_server_idx;       // Index of the MFC type server.
        msf::byte_size_t      dbg_hdr_length;            // Length of the optional debug header substream.
        msf::byte_size_t      ec_info_length;            // Length of the edit & continue substream.

        uint16_t              incrementally_linked : 1;  // Indicates that the binary is incrementally linked.
        uint16_t              stripped             : 1;  // Indicates that the binary is stripped.
        uint16_t              using_ctypes         : 1;  // Indicates that the binary is using CTypes.
        uint16_t              reserved_flags       : 13; // Reserved flags.
        uint16_t              machine_type;              // Type of the machine.
        uint32_t              _padding[ 1 ];
    };

    // Section contribution record.
    //
    struct section_contribution
    {
        uint16_t         section_index;
        uint16_t         __pad1;
        msf::offset_t    offset;
        msf::byte_size_t size;
        uint32_t         characteristics;
        uint16_t         module_index;
        uint32_t         data_crc;
        uint32_t         reloc_crc;

        pointer get_address() const { return { section_index, ( uint32_t ) offset }; }
    };
    struct sc_record_v2 : section_contribution { uint32_t sect_index_coff; };
    using  sc_record_v1 = section_contribution;

    // Module info record.
    //
    struct modi_record
    {
        uint32_t             __pad1;
        section_contribution first_sc;
        
        uint16_t             written    : 1;
        uint16_t             ec_enabled : 1;
        uint16_t             __pad2     : 6;
        uint16_t             tsm_list   : 8;

        msf::stream_number_t local_sym_stream_idx;
        msf::byte_size_t     local_sym_length;
        msf::byte_size_t     c11_line_num_length;
        msf::byte_size_t     c13_line_num_length;
        
        uint16_t             num_files;
        uint16_t             __pad3;
        uint32_t             __pad4;
        uint32_t             src_name_index;
        uint32_t             pdb_name_index;
        //char                 module_name[];
        //char                 object_name[];
    };

    // Section mapping record.
    //
    struct omf_sec_map_desc
    {
        uint16_t         read         : 1;
        uint16_t         write        : 1;
        uint16_t         execute      : 1;
        uint16_t         adr32        : 1;
        uint16_t         __pad        : 4;
        uint16_t         is_selector  : 1;
        uint16_t         is_absolute  : 1;
        uint16_t         is_group     : 1;
        uint16_t         __pad2       : 5;
        uint16_t         ovt;
        uint16_t         group;
        uint16_t         frame;
        uint16_t         seg_name_index;
        uint16_t         class_name_index;
        msf::offset_t    offset;
        msf::byte_size_t section_length;
    };
    struct omf_sec_map_record
    {
        uint16_t         num_seg_desc;
        uint16_t         num_logial_seg;
        omf_sec_map_desc entries[];
    };

    // File information record.
    //
    struct file_info_record
    {
        uint16_t num_modules;
        uint16_t num_source_files;
        uint16_t mod_indices[];
        //uint16_t mod_file_counts[num_modules];
        //uint32_t file_name_offsets[ num_source_files ];
        //char names[][ num_source_files ];
    };

    // OMAP record.
    //
    struct omap_record
    {
        uint32_t rva_src;
        uint32_t rva_dst;
        uint32_t translate( uint32_t rva ) const { return rva - rva_src + rva_dst; }
    };

    // Debug header record.
    //
    struct debug_header_record
    {
        msf::stream_number_t fpo_data;
        msf::stream_number_t exception_data;
        msf::stream_number_t fixup_data;
        msf::stream_number_t omap_to_src_data;
        msf::stream_number_t src_to_omap_data;
        msf::stream_number_t section_header_data;
        msf::stream_number_t token_rid_map;
        msf::stream_number_t xdata;
        msf::stream_number_t pdata;
        msf::stream_number_t new_fpo_data;
        msf::stream_number_t section_header_orig_data;
    };

    // Unknown records.
    //
    struct ec_record;
    struct type_server_map_record;

    // Runtime DBI stream.
    //
    struct dbi_stream
    {
        // Define resolved record as [Module name, Object name, Record].
        //
        using modi_record_e = std::tuple<const char*, const char*, modi_record*>;

        // Stream header.
        //
        dbi_header hdr;

        // Arena holding the allocations.
        //
        std::vector<uint8_t> arena;

        // OMAP entries.
        //
        std::vector<omap_record> omap_to_src;
        std::vector<omap_record> src_to_omap;

        // Section entries.
        //
        std::vector<win::section_header_t> sections;
        std::vector<win::section_header_t> orig_sections;

        // Misc. information.
        //       
        std::vector<modi_record_e> module_info;
        std::vector<sc_record_v1>  section_contribs;
        omf_sec_map_record*        omf_section_map = nullptr;
        file_info_record*          file_info = nullptr;
        type_server_map_record*    type_server_map = nullptr;
        ec_record*                 edit_and_continue_info = nullptr;
        debug_header_record*       debug_header = nullptr;

        // Default move.
        //
        dbi_stream( dbi_stream&& ) = default;
        dbi_stream& operator=( dbi_stream&& ) = default;

        // No copy allowed.
        //
        dbi_stream( const dbi_stream& ) = delete;
        dbi_stream& operator=( const dbi_stream& ) = delete;

        dbi_stream() {}
        dbi_stream( const msf::stream& stream, msf::stream::substream ss )
        {
            // Read the header.
            //
            hdr = ss.consume<dbi_header>();

            // Read the whole stream into arena.
            //
            arena.resize( ss.bytes_left );
            ss.read( arena.data(), ss.bytes_left );

            // Map the modules.
            //
            auto it = arena.data();
            if ( auto bytes = hdr.module_info_length; bytes > 0 )
            {
                auto* it_end = it + bytes;
                while ( it < it_end )
                {
                    // Read the base of the record.
                    //
                    size_t rec_size;
                    auto* modi = ( modi_record* ) it;
                    rec_size = sizeof( modi_record );

                    // Read the module name and the object name.
                    //
                    char* module_name = ( char* ) &it[ rec_size ];
                    rec_size += strlen( module_name ) + 1;
                    char* object_name = ( char* ) &it[ rec_size ];
                    rec_size += strlen( object_name ) + 1;

                    // Align the record to 4 bytes and push back to module information.
                    //
                    it += xstd::align_up( rec_size, 4 );
                    module_info.emplace_back( module_name, object_name, modi );
                }
                xstd::assert_that( it == it_end, "Module info left the stream unbalanced." );
            }
            if ( auto bytes = hdr.sec_contrib_length; bytes > 4 )
            {
                enum
                {
                    DBISCImpvV60 = 0xeffe0000 + 19970605,
                    DBISCImpv =    DBISCImpvV60,
                    DBISCImpv2 =   0xeffe0000 + 20140516,
                };
                uint32_t sc_version = *( uint32_t* ) it; 
                it += 4;
                bytes -= 4;

                if ( sc_version == DBISCImpv2 )
                {
                    xstd::assert_that( ( bytes % sizeof( sc_record_v2 ) ) == 0, "SC info left the stream unbalanced." );
                    section_contribs.assign(
                        ( sc_record_v2* ) ( it ),
                        ( sc_record_v2* ) ( it + bytes )
                    );
                }
                else if ( sc_version == DBISCImpv )
                {
                    xstd::assert_that( ( bytes % sizeof( sc_record_v1 ) ) == 0, "SC info left the stream unbalanced." );
                    section_contribs.assign(
                        ( sc_record_v1* ) ( it ),
                        ( sc_record_v1* ) ( it + bytes )
                    );
                }
                else
                {
                    xstd::warning( "Unknown section contribution version." );
                }

                it += bytes;
            }
            if ( auto bytes = hdr.sec_map_length; bytes > 0 )
                omf_section_map = ( omf_sec_map_record* ) it, it += bytes;
            if ( auto bytes = hdr.file_info_length; bytes > 0 )
                file_info = ( file_info_record* ) it, it += bytes;
            if ( auto bytes = hdr.type_server_map_length; bytes > 0 )
                type_server_map = ( type_server_map_record* ) it, it += bytes;
            if ( auto bytes = hdr.ec_info_length; bytes > 0 )
                edit_and_continue_info = ( ec_record* ) it, it += bytes;
            if ( auto bytes = hdr.dbg_hdr_length; bytes > 0 )
                debug_header = ( debug_header_record* ) it, it += bytes;

            // Read misc. streams if debug header exists.
            //
            if ( debug_header )
            {
                // Read OMAPs.
                //
                const auto mappings = {
                    std::pair{ &omap_to_src, debug_header->omap_to_src_data },
                    std::pair{ &src_to_omap, debug_header->src_to_omap_data }
                };
                for ( auto& [vec, sn] : mappings )
                {
                    if ( sn != msf::lnil_page )
                    {
                        auto str = stream.get_stream( sn );
                        vec->resize( str.bytes_left / sizeof( omap_record ) );
                        xstd::assert_that( ( str.bytes_left % sizeof( omap_record ) ) == 0, "OMAP stream is misaligned." );
                        str.read( vec->data(), str.bytes_left );
                    }
                }

                // Read sections.
                //
                const auto smappings = {
                    std::pair{ &sections, debug_header->section_header_data },
                    std::pair{ &orig_sections, debug_header->section_header_orig_data }
                };
                for ( auto& [vec, sn] : smappings )
                {
                    if ( sn != msf::lnil_page )
                    {
                        auto str = stream.get_stream( sn );
                        vec->resize( str.bytes_left / sizeof( win::section_header_t ) );
                        xstd::assert_that( ( str.bytes_left % sizeof( win::section_header_t ) ) == 0, "Section stream is misaligned." );
                        str.read( vec->data(), str.bytes_left );
                    }
                }
            }
        }

        // Translates SEG:OFF into RVA.
        //
        std::pair<uint32_t, const win::section_header_t*> translate( pointer ptr ) const
        {
            // Translate into a logical segment using OMF section map.
            //
            if ( ptr.sec && omf_section_map )
            {
                // Validate section index.
                //
                if ( omf_section_map->num_seg_desc < ptr.sec )
                    return { 0, nullptr };

                // Translate the frame and the offset.
                //
                auto& entry = omf_section_map->entries[ ptr.sec - 1 ];
                ptr.off += entry.offset;
                ptr.sec = entry.is_absolute ? 0 : entry.frame;
            }

            // If compiler uses OMAP:
            //
            const win::section_header_t* scn = nullptr;
            
            if ( !orig_sections.empty() && !omap_to_src.empty() )
            {
                // Translate the section offset.
                //
                if ( ptr.sec )
                {
                    if( orig_sections.size() < ptr.sec )
                        return { 0, nullptr };
                    scn = &orig_sections[ ptr.sec - 1 ];
                    ptr.off += scn->virtual_address;
                }
                
                // Map according to OMAP entries.
                //
                auto it = std::upper_bound( src_to_omap.begin(), src_to_omap.end(), omap_record{ ptr.off, 0 },
                                            [ ] ( auto& a, auto& b ) { return a.rva_src < b.rva_src; } );
                if ( it != src_to_omap.begin() )
                    ptr.off = std::prev( it )->translate( ptr.off );
            }
            else
            {
                // Translate the section offset.
                //
                if ( ptr.sec )
                {
                    if( sections.size() < ptr.sec )
                        return { 0, nullptr };
                    scn = &sections[ ptr.sec - 1 ];
                    ptr.off += scn->virtual_address;
                }
            }

            // Validate and return.
            //
            return { std::max( ( int32_t ) ptr.off, 0 ), scn };
        }
    };

    // Generic symbol entry.
    //
    struct sym_record : record
    {
        uint16_t kind;
        size_t length() const { return _length + sizeof( record ); };
        uint8_t* data() { return ( uint8_t* ) this; }
        const uint8_t* data() const { return ( const uint8_t* ) this; }
    };

    // Runtime SYM stream.
    //
    struct sym_stream
    {
        // Arena holding the allocations.
        //
        std::vector<uint8_t> arena;

        // List of every record.
        //
        std::vector<sym_record*> records;

        // Default move.
        //
        sym_stream( sym_stream&& ) = default;
        sym_stream& operator=( sym_stream&& ) = default;

        // No copy allowed.
        //
        sym_stream( const sym_stream& ) = delete;
        sym_stream& operator=( const sym_stream& ) = delete;

        sym_stream() {}
        sym_stream( msf::stream::substream ss )
        {
            // Read the whole stream into arena.
            //
            arena.resize( ss.bytes_left );
            ss.read( arena.data(), ss.bytes_left );

            // Read all of the records.
            //
            auto* arena_end = arena.data() + arena.size();
            for ( auto it = arena.data(); it < ( arena_end - sizeof( sym_record ) ); )
            {
                sym_record* sym = ( sym_record* ) it;
                records.emplace_back( sym );
                
                auto* next = it + sym->length();
                if ( next > arena_end )
                {
                    xstd::throw_fmt( "Invalid symbol stream!" );
                    records.clear();
                    break;
                }
                it = next;
            }
        }
    };

    // Helper for reading variable length numeric, increments the pointer given.
    //
    template<typename T>
    inline static size_t read_numeric( T*& p, bool isigned = false )
    {
        size_t size = 0;
        auto& rskip = ( const uint8_t*& ) p;

        // Read the base leaf.
        //
        auto* lf = ( const lfEasy* ) p;
        rskip += 2;

        // Handle each variant:
        //
        if ( lf->leaf < LF_NUMERIC )
        {
            size = lf->leaf;
        }
        else if ( lf->leaf == LF_CHAR )
        {
            size = *rskip++;
            xstd::assert_that( isigned || size <= 0x7F, "Sign mismatch." );
        }
        else if ( lf->leaf == LF_SHORT )
        {
            size = *( const uint16_t* ) rskip;
            rskip += 2;
            xstd::assert_that( isigned || size <= 0x7FFF, "Sign mismatch." );
        }
        else if ( lf->leaf == LF_USHORT )
        {
            size = *( const uint16_t* ) rskip;
            rskip += 2;
        }
        else if ( lf->leaf == LF_LONG )
        {
            size = *( const uint32_t* ) rskip;
            rskip += 4;
            xstd::assert_that( isigned || size <= 0x7FFFFFFF, "Sign mismatch." );
        }
        else if ( lf->leaf == LF_ULONG )
        {
            size = *( const uint32_t* ) rskip;
            rskip += 4;
        }
        else if ( lf->leaf == LF_QUADWORD )
        {
            size = *( const uint64_t* ) rskip;
            rskip += 8;
            xstd::assert_that( isigned || size <= 0x7FFFFFFFFFFFFFFF, "Sign mismatch." );
        }
        else if ( lf->leaf == LF_UQUADWORD )
        {
            size = *( const uint64_t* ) rskip;
            rskip += 8;
        }
        else
        {
            xstd::assert_that( false, "Invalid numeric type." );
        }
        return size;
    }
};

namespace std
{
    template<>
    struct hash<dbi::pointer>
    {
        size_t operator()( const dbi::pointer& p ) const noexcept { return hash<uint64_t>{}( p.generate_identifier() ); }
    };
};