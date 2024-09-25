#include "generator.hpp"
#include <tuple>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <optional>
#include <string_view>
#include <future>
#include <filesystem>
#include <pdblib/pdb.hpp>
#include <xstd/file_view.hpp>
#include <xstd/text.hpp>
#include "text_parsing.hpp"
#include "config.hpp"
#include "writer.hpp"

#define IN_GENERATOR
#include <sdkgen/support_library.hpp>

namespace sdk
{
    // Namespace mappings.
    //
    static constexpr std::tuple<std::string_view, std::string_view> basic_mappings[] = {
        { "event_trace", "etwi" },
        { "dxgkarg",     "dxgk::arg" },
        { "dxgiddicb",   "dxgi::ddi::cb" },
        { "dxgkargcb",   "dxgk::arg::cb" },
        { "dxgkvgpu",    "dxgk::vgpu" },
        { "verifier",    "verifier" },
        { "security",    "sec" },
        { "arbiter",     "arbiter" },
        { "dxgkmdt",     "dxgk::mdt" },
        { "d3dkmdt",     "d3dk::mdt" },
        { "d3dddi",      "d3d::ddi" },
        { "apphelp",     "apphelp" },
        { "x86_bios",    "x86bios" },
        { "devpkey",     "devpkey" },
        { "dxgkcb",      "dxgk::cb" },
        { "dxgkddi",     "dxgk::ddi" },
        { "d3dkmt",      "d3dk::mt" },
        { "dxgkdt",      "dxgk::dt" },
        { "dbgkd",       "dbgkd" },
        { "dxgi",        "dxgi" },
        { "pshed",       "pshed" },
        { "power",       "power" },
        { "trace",       "trace" },
        { "image",       "image" },
        { "dbgkm",       "dbgkm" },
        { "authz",       "authz" },
        { "alpc",        "alpc" },
        { "bapd",        "bapd" },
        { "boot",        "boot" },
        { "clip",        "clip" },
        { "acpi",        "acpi" },
        { "x_hal",       "xhal" },
        { "clfs",        "clfs" },
        { "dxgk",        "dxgk" },
        { "kldr",        "ldr::km" },
        { "ndis",        "ndis" },
        { "whea",        "whea" },
        { "pnpr",        "pnpr" },
        { "x_kd",        "xkd" },
        { "heap",        "heap" },
        { "smss",        "smss" },
        { "dxva",        "dxva" },
        { "wwan",        "wwan" },
        { "emon",        "emon" },
        { "aux",         "kaux" },
        { "cls",         "cls" },
        { "csr",         "csr" },
        { "dbgk",        "dbgk" },
        { "perf",        "perf" },
        { "dmar",        "dmar" },
        { "hdls",        "hdls" },
        { "dbg",         "dbg" },
        { "dma",         "dma" },
        { "efi",         "efi" },
        { "xdv",         "xdv" },
        { "dmm",         "dmm" },
        { "etw",         "etw" },
        { "hal",         "hal" },
        { "ldr",         "ldr" },
        { "vid",         "vid" },
        { "video",       "video" },
        { "pci",         "pci" },
        { "drv",         "drv" },
        { "ext",         "ext" },
        { "gxp",         "gxp" },
        { "kse",         "kse" },
        { "lpc",         "lpc" },
        { "pep",         "pep" },
        { "pnp",         "pnp" },
        { "pop",         "pop" },
        { "hvl",         "hvl" },
        { "xxx",         "kuser::lt" },
        { "yyy",         "kuser::ld" },
        { "zzz",         "kuser::zz" },
        { "ppm",         "ppm" },
        { "rpc",         "rpc" },
        { "rtl",         "rtl" },
        { "tpm",         "tpm" },
        { "tag",         "tag" },
        { "bgp",         "bgp" },
        { "bcp",         "bcp" },
        { "nls",         "nls" },
        { "hid",         "hid" },
        { "tlg",         "tlg" },
        { "dwm",         "dwm" },
        { "bcd",         "bcd" },
        { "dmr",         "dmr" },
        { "vi",          "ver" },
        { "wsk",         "wsk" },
        { "wil",         "wil" },
        { "wmi",         "wmi" },
        { "vhd",         "vhd" },
        { "ngl",         "ngl" },
        { "lsa",         "lsa" },
        { "arb",         "arb" },
        { "txt",         "txt" },
        { "sdb",         "sdb" },
        { "smc",         "smc" },
        { "wdf",         "wdf" },
        { "wdi",         "wdi" },
        { "sec",         "sec" },
        { "bgk",         "bgk" },
        { "ttm",         "ttm" },
        { "asi",         "asi" },
        { "ahc",         "ahc" },
        { "ssh",         "ssh" },
        { "hsa",         "hsa" },
        { "asl",         "asl" },
        { "wnf",         "wnf" },
        { "vrp",         "vrp" },
        { "vf",          "verf" },
        { "cc",          "cc" },
        { "ci",          "ci" },
        { "cm",          "cm" },
        { "ex",          "ex" },
        { "kz",          "kz" },
        { "kx",          "kx" },
        { "ki",          "ki" },
        { "kd",          "kd" },
        { "ke",          "ke" },
        { "fs",          "fs" },
        { "fx",          "fx" },
        { "hv",          "hv" },
        { "io",          "io" },
        { "mi",          "mi" },
        { "mm",          "mm" },
        { "ob",          "ob" },
        { "pm",          "pm" },
        { "po",          "po" },
        { "ps",          "ps" },
        { "sm",          "sm" },
        { "sp",          "sp" },
        { "mx",          "mx" },
        { "se",          "se" },
        { "tp",          "tp" },
        { "sk",          "sk" },
        { "bi",          "bi" },
        { "pi",          "pi" },
        { "em",          "em" },
        { "pf",          "pf" },
        { "pp",          "pp" },
        { "si",          "si" },
        { "tm",          "tm" },
        { "xm",          "xm" },
        { "bg",          "bg" },
        { "ae",          "ae" },
        { "nt",          "os" },
        { "zw",          "os::km" },
    };

    // Transforms the naming convention of types converting inlined anonymous tags into empty strings and adding namespaces.
    //
    static void add_namespace( const config::pdb_entry* pentry, std::string& name )
    {
        if ( !name.empty() )
        {
            for ( auto& [prefix, ns] : basic_mappings )
            {
                if ( name.starts_with( prefix ) && name.size() > ( prefix.size() + 2 ) )
                {
                    std::string real_name = { name.data() + prefix.size(),  name.size() - prefix.size() };

                    const char* ns_sfx;
                    if ( real_name.starts_with( '_' ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 1 ), ns_sfx = "::";
                    else if ( real_name.starts_with( "pf_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "pf::";
                    else if ( real_name.starts_with( "px_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "px::";
                    else if ( real_name.starts_with( "vx_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vx::";
                    else if ( real_name.starts_with( "ix_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "ix::";
                    else if ( real_name.starts_with( "vp_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vp::";
                    else if ( real_name.starts_with( "vf_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vf::";
                    else if ( real_name.starts_with( "vi_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vi::";
                    else if ( real_name.starts_with( "vx_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vx::";
                    else if ( real_name.starts_with( "vz_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "vz::";
                    else if ( real_name.starts_with( "p_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "p::";
                    else if ( real_name.starts_with( "v_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "v::";
                    else if ( real_name.starts_with( "i_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "i::";
                    else if ( real_name.starts_with( "x_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "x::";
                    else if ( real_name.starts_with( "z_" ) )
                        real_name.erase( real_name.begin(), real_name.begin() + 2 ), ns_sfx = "z::";
                    else
                        continue;

                    if ( text::keyword_list.contains( real_name ) )
                        real_name += "_";
                    if ( '0' <= real_name[ 0 ] && real_name[ 0 ] <= '9' )
                        real_name.insert( real_name.begin(), '_' );

                    name = ns + ns_sfx + real_name;

                    if ( name.starts_with( "exp::" ) )
                        name.insert( name.begin() + 3, 'i' );

                    return;
                }
            }
            name = pentry->ns_tag + "::" + std::move( name );
        }
    }
    static void transform_names( const config::pdb_entry* pentry, pdb::instance& pdb )
    {
        // Transform type names.
        //
        for ( auto& [key, name_refs] : pdb.string_map[ pdb::str_type_name ] )
        {
            // Skip if anonymous.
            //
            if ( name_refs.first.empty() ) continue;

            // Skip if intrinsic.
            //
            bool is_intrin = false;
            for ( auto& ref : name_refs.second )
                is_intrin |= ref->is_intrinsic();
            if ( is_intrin ) continue;

            // Transform the name and add the namespace.
            //
            name_refs.first = text::transform_name( name_refs.first );
            if ( name_refs.first.ends_with( "_" ) ) name_refs.first += "t";
            else if ( !name_refs.first.ends_with( "_t" ) ) name_refs.first += "_t";
            add_namespace( pentry, name_refs.first );
        }
    }

    // Adds C++ syntax sugar for certain known NT structures.
    //
    static void add_syntax_sugar( pdb::instance& pdb )
    {
        // Convert large integer into i64/u64.
        //
        for ( auto&& [s, t] : { std::pair{ "_LARGE_INTEGER", T_INT8 },
                                std::pair{ "_ULARGE_INTEGER", T_UINT8 } } )
        {
            auto it = pdb.string_map[ pdb::str_type_name ].find( s );
            if ( it == pdb.string_map[ pdb::str_type_name ].end() )
                continue;

            for ( auto& [type, refs] : pdb.type_map )
                if ( type->user_defined_name == it->second.first )
                    type = pdb.type_map[ t ].first;
        }

        // Convert certain NT types to custom bindings.
        //
        for ( auto [src, dst] : {
            std::pair{ "_M128A",             "m128a_t" },
            std::pair{ "_LIST_ENTRY",        "nt::list_entry_t" },
            std::pair{ "_KTRAP_FRAME",       "nt::trapframe" },
            std::pair{ "_CONTEXT",           "nt::context" },
            std::pair{ "_XSAVE_FORMAT",      "nt::xsave_format" },
            std::pair{ "_KEXCEPTION_FRAME",  "nt::exframe" },
            std::pair{ "_UNICODE_STRING",    "nt::unicode_view" },
            std::pair{ "_CUNICODE_STRING",   "nt::unicode_view" },
            std::pair{ "_UNICODE_STRING32",  "nt::unicode_view32" },
            std::pair{ "_CUNICODE_STRING32", "nt::unicode_view32" },
            std::pair{ "_UNICODE_STRING64",  "nt::unicode_view" },
            std::pair{ "_CUNICODE_STRING64", "nt::unicode_view" },
            std::pair{ "_STRING",            "nt::ascii_view" },
            std::pair{ "_CSTRING",           "nt::ascii_view" },
            std::pair{ "_STRING32",          "nt::ascii_view32" },
            std::pair{ "_CSTRING32",         "nt::ascii_view32" },
            std::pair{ "_STRING64",          "nt::ascii_view" },
            std::pair{ "_CSTRING64",         "nt::ascii_view" } } )
        {
            auto it = pdb.string_map[ pdb::str_type_name ].find( src );
            if ( it != pdb.string_map[ pdb::str_type_name ].end() )
            {
                auto& [name, refs] = it->second;
                name = dst;

                for ( auto& ref : refs )
                {
                    if ( auto* cp = ref->as<pdb::leaf_class>() )
                    {
                        cp->attributes.intrinsic = true;
                        cp->fields = {};
                    }
                }
            }
        }

        // TODO: Convert ::list_entry, ::single_list_entry.
        // TODO: locks
        //
    }

    // Simple predicate to pick the most detailed type out of two, returns false if they do not match.
    //
    static bool pick_best( const pdb::leaf_generic*& max, const pdb::leaf_generic* o )
    {
        // If none chosen yet, pick current and return.
        //
        if ( !max )
        {
            max = o;
            return true;
        }

        // Skip if null.
        //
        if ( !o ) return true;

        // Decide complexity based on type.
        //
        bool state = true;
        pdb::visit( max, [ & ] <typename T> ( const T * cmax )
        {
            // If type id mismatches, fail.
            //
            const T* other = o->as<T>();
            if ( !other )
            {
                state = false;
                return;
            }

            // If class or union:
            //
            if constexpr ( pdb::ClassLeaf<T> || pdb::EnumLeaf<T> )
            {
                // If one is a forward reference, pick the other.
                //
                auto f1 = cmax->fields.template resolve_as<pdb::leaf_fieldlist>();
                auto f2 = other->fields.template resolve_as<pdb::leaf_fieldlist>();

                if ( !other->attributes.fwdref && f2 )
                {
                    if ( cmax->attributes.fwdref || !f1 )
                    {
                        max = other;
                        return;
                    }

                    // Pick the most complex instance.
                    //
                    if ( ( f1->members.size() + f1->enums.size() ) <
                         ( f2->members.size() + f2->enums.size() ) )
                    {
                        max = other;
                    }
                }
            }
            // Otherwise make sure equivalent.
            //
            else
            {
                state = max->is_defn_identical( other );
            }
        } );
        return state;
    }

    // Normalizes behaviour of anonymous structures and unions, removes reserved fields, 
    // fixes certain cases where structures are defined twice, one in internal headers, and
    // again in public headers used by some other object file, in which case we should remove
    // the simplest instance.
    //
    static void normalize_data( pdb::instance& pdb )
    {
        // Fucking microsoft.
        //
        if ( auto it = pdb.string_map[ pdb::str_type_name ].find( "_u" );
             it != pdb.string_map[ pdb::str_type_name ].end() )
        {
            it->second.first = "";
        }

        // Fix anonymous types.
        //
        for ( auto& [key, name] : pdb.string_map[ pdb::str_type_name ] )
            if ( text::is_anonymous_type( name.first ) )
                for ( auto& ref : pdb::ref_list_t{ name.second } )
                    ref->user_defined_name = {};

        // Remove reserved fields.
        //
        for ( auto& [key, name] : pdb.string_map[ pdb::str_field_name ] )
        {
            if ( !text::is_reserved_field( name.first ) )
                continue;

            auto refs = name.second;
            for ( auto& ref : refs )
            {
                if ( auto flist = ref->as<pdb::leaf_fieldlist>() )
                {
                    for ( auto it = flist->members.begin(); it != flist->members.end(); )
                    {
                        if ( it->name == name.first )
                            it = flist->members.erase( it );
                        else
                            ++it;
                    }
                }
            }
        }

        // Anonimize legacy unions.
        //
        for ( auto& [key, name] : pdb.string_map[ pdb::str_field_name ] )
        {
            if ( !text::is_legacy_anonymous_variable( name.first ) )
                continue;

            auto refs = name.second;
            for ( auto& ref : refs )
            {
                if ( auto flist = ref->as<pdb::leaf_fieldlist>() )
                {
                    for ( auto& member : flist->members )
                    {
                        if ( member.name == name.first )
                        {
                            if ( auto* cl = member.type.resolve_as<pdb::leaf_class>() )
                            {
                                if ( !cl->is_anonymous() )
                                    continue;

                                if ( auto* flist2 = cl->fields.resolve_as<pdb::leaf_fieldlist>() )
                                {
                                    bool clash = false;
                                    flist->enum_variables( [ & ] ( auto& m1, auto off )
                                    {
                                        flist2->enum_variables( [ & ] ( auto& m2, auto off )
                                        {
                                            clash |= m1.name == m2.name;
                                        } );
                                    } );

                                    if ( !clash )
                                        member.name = {};
                                }
                            }
                        }
                    }
                }
            }
        }

        // Fix global namespace clashes.
        //
        for ( auto& [key, name] : pdb.string_map[ pdb::str_type_name ] )
        {
            if ( name.second.size() > 1 )
            {
                const pdb::leaf_generic* cx = nullptr;

                // Apply predicate over all references.
                //
                auto refs = name.second;
                for ( auto& ref : refs )
                    if ( !pick_best( cx, ref ) )
                        xstd::assert_that( false, "Unexpected type name clash." );

                // Find the index.
                //
                auto chosen_item = std::find_if( pdb.type_map.begin(), pdb.type_map.end(), [ & ] ( auto& pair ) { return pair.first.get() == cx; } );
                fassert( chosen_item != pdb.type_map.end() );

                // Replace all instances with the chosen one.
                //
                for ( auto& ref : refs )
                {
                    if ( ref == cx )
                        continue;
                    auto it = std::find_if( pdb.type_map.begin(), pdb.type_map.end(), [ & ] ( auto& pair ) { return pair.first.get() == ref; } );
                    fassert( it != pdb.type_map.end() );
                    it->first = chosen_item->first;
                }
            }
        }
    }

    // Generates the SDK according to the configuration @ config.hpp at the given path.
    //
    void generate( const std::filesystem::path& output )
    {
        std::vector<std::future<void>> work_queue;
        auto add_work = [ & ] <typename T> ( T && f ) { work_queue.emplace_back( std::async( std::launch::async, std::forward<T>( f ) ) ); };
        auto flush_work_queue = [ & ] () { for ( auto& v : work_queue ) v.get(); work_queue.clear(); };

        // Load every build and perform initial processing.
        //
        std::map<const config::pdb_entry*, pdb::instance> collections[ config::num_builds ];
        for ( size_t n = 0; n != config::num_builds; n++ )
        {
            auto& collection = collections[ n ];
            auto& build = config::builds[ n ];

            for ( auto& entry : config::symbol_collection )
            {
                if ( auto file = xstd::file::map_view( build.path / entry.path ) )
                {
                    add_work( [ f = std::move( file ), pdb = &collection[ &entry ], &entry ]()
                    {
                        std::destroy_at( pdb );
                        new ( pdb ) pdb::instance{ msf::stream{ f->data(), f->size() } };
                        normalize_data( *pdb );
                        add_syntax_sugar( *pdb );
                        transform_names( &entry, *pdb );
                    } );
                }
            }
        }
        flush_work_queue();

        // Create the directories.
        //
        std::filesystem::remove_all( output );
        std::filesystem::create_directories( output );

        // Map every string onto a list of type entries and public entries.
        //
        struct type_entry
        {
            const config::pdb_entry* entry_src;
            pdb::instance* origin;
            CV_typ_t origin_idx;
            auto& get() const { return origin->type_map[ origin_idx ]; }
        };
        struct type_collection
        {
            std::vector<type_entry> instances[ config::num_builds ];
        };
        std::unordered_map<std::string, type_collection> type_list;
        std::unordered_map<std::string, type_collection> pub_list;
        for ( size_t n = 0; n != config::num_builds; n++ )
        {
            auto& collection = collections[ n ];
            for ( auto& [entry, pdb] : collection )
            {
                // For each type:
                //
                for ( CV_typ_t idx = CV_FIRST_NONPRIM; idx < pdb.type_map.size(); idx++ )
                {
                    auto& [type, refs] = pdb.type_map[ idx ];
                    if ( type && !type->user_defined_name.empty() )
                    {
                        auto& vec = type_list[ type->user_defined_name.resolve_original() ].instances[ n ];
                        vec.push_back( { .entry_src = entry, .origin = &pdb, .origin_idx = idx } );
                    }
                }

                // For each public:
                //
                for ( auto& [pub, type] : pdb.public_map )
                {
                    // Remove import tags.
                    //
                    std::string_view pubv = pub;
                    if ( pubv.starts_with( "imp__" ) )
                        pubv.remove_prefix( 5 );
                    else if ( pubv.starts_with( "imp_" ) )
                        pubv.remove_prefix( 4 );
                    else if ( pubv.starts_with( "_imp_" ) )
                        pubv.remove_prefix( 5 );
                    else if ( pubv.starts_with( "__imp_" ) )
                        pubv.remove_prefix( 6 );
                    
                    // If mangled constructor/destructor:
                    //
                    if ( pubv.starts_with( "??0" ) || pubv.starts_with( "??1" ) )
                    {
                        // Find object name, skip if not a valid C name.
                        //
                        size_t n = pubv.find( "@@" );
                        if ( n == std::string::npos )
                            continue;
                        if ( !text::is_valid_c_name( pubv.substr( 3, n - 3 ) ) )
                             continue;
                    }
                    // If mangled member function:
                    //
                    else if ( size_t n = pubv.find( "@" ); n != std::string::npos && pubv.find( "__" ) == std::string::npos )
                    {
                        // Skip if there's an invalid namespace name:
                        //
                        bool valid_c = true;
                        for ( std::string_view item : xstd::split_string<char>( pubv, '@' ) )
                            if ( !( valid_c &= ( text::is_valid_c_name( item ) && item.length() > 1 ) ) )
                                break;
                        if ( !valid_c )
                            continue;
                    }
                    // Skip if not C name.
                    //
                    else if ( !text::is_valid_c_name( pubv ) )
                        continue;

                    // Insert the types.
                    //
                    auto& list = pub_list[ std::string{ pubv } ];
                    auto& vec = list.instances[ n ];
                    if ( type.types.empty() )
                    {
                        vec.push_back( { .entry_src = entry, .origin = &pdb, .origin_idx = T_NOTTRANS } );
                    }
                    else
                    {
                        for ( CV_typ_t tid : type.types )
                            vec.push_back( { .entry_src = entry, .origin = &pdb, .origin_idx = pdb.type_map[ tid ].first ? tid : T_NOTTRANS } );
                    }
                }
            }
        }

        // Merge duplicate types within the same build:
        //
        std::unordered_map<std::string, std::pair<size_t, pdb::string_ref*>> type_name_ownership_list;
        for ( auto& [org, cl] : type_list )
        {
            // Pick the most common name.
            //
            std::unordered_map<std::string, std::tuple<size_t, int64_t, pdb::string_ref*>> name_counters;
            for ( auto& e : cl.instances )
            {
                for ( auto& t : e )
                {
                    auto& [cnt, pdbe, ref] = name_counters[ t.get().first->user_defined_name ];
                    if ( !cnt++ )
                    {
                        pdbe = -(int64_t)(uint64_t)t.entry_src;
                        ref = &t.get().first->user_defined_name;
                    }
                }
            }
            auto name = std::max_element( name_counters.begin(), name_counters.end(), [ ] ( auto& p1, auto& p2 ) 
            { 
                return p1.second < p2.second; 
            } );

            // Try to pick better names.
            //
            if ( name->first.starts_with( "wdf::" ) )
            {
                if ( !std::all_of( name_counters.begin(), name_counters.end(), [ ] ( auto& el ) { return el.first.starts_with( "wdf::" ); } ) )
                {
                    name = std::max_element( name_counters.begin(), name_counters.end(), [ ] ( auto& p1, auto& p2 )
                    {
                        return p1.first.starts_with( "wdf::" ) || p1.second < p2.second;
                    } );
                }
            }

            // Make sure global names do not clash.
            //
            auto& [s_cnt, s_pdbe, s_ref] = name->second;
            if ( auto& str = s_ref->resolve(); !str.starts_with( "sdk::" ) )
            {
                auto [it, inserted] = type_name_ownership_list.insert( { s_ref->resolve(), {1, s_ref} } );
                //if ( !inserted )
                //{
                //    it->second.second->assign( it->second.second->resolve() + std::to_string( ++it->second.first ) );
                //    xstd::warning( "Global type clash %s.", it->second.second->resolve().data() );
                //}
            }

            for ( auto& e : cl.instances )
            {
                for ( auto& t : e )
                {
                    t.get().first->user_defined_name = pdb::string_ref{ t.get().first.get(), *s_ref };
                }
            }

            // Pick the best instance for each build.
            //
            for ( auto& build_entries : cl.instances )
            {
                const pdb::leaf_generic* max_leaf = nullptr;
                type_entry* entry = nullptr;

                for ( auto& type : build_entries )
                {
                    pdb::leaf_generic* leaf = type.get().first.get();
                    if ( !pick_best( max_leaf, leaf ) )
                    {
                        xstd::warning( "Unexpected type name clash %s.", name->first.data() );
                        if ( leaf->is<pdb::leaf_enum>() )
                            max_leaf = leaf;
                    }
                    if ( max_leaf == leaf )
                        entry = &type;
                }

                // Replace all instances with the best.
                //
                for ( auto& type : build_entries )
                    if ( &type != entry )
                        type.get().first = entry->get().first;
                if ( !build_entries.empty() )
                    build_entries.resize( 1 );
            }

            // Fix type inconsistencies.
            //
            const type_entry* sample = nullptr;
            for ( size_t i = config::num_builds - 1; i != ~0ull; i-- )
            {
                auto it = &cl.instances[ i ];
                if ( !it->empty() )
                {
                    if ( !sample )
                    {
                        sample = &it->front();
                        continue;
                    }

                    // Silently fix class-likes.
                    //
                    if ( auto sm = sample->get().first->as<pdb::leaf_class>() )
                        if ( auto sc = it->front().get().first->as<pdb::leaf_class>() )
                            sc->cv_kind = sm->cv_kind;

                    // For rest append a tag.
                    //
                    if ( sample->get().first->dynamic_type_id() != it->front().get().first->dynamic_type_id() )
                    {
                        auto& name = it->front().get().first->user_defined_name;
                        auto [ns, nx] = text::split_namespace( name.resolve(), false );
                        name = pdb::string_ref{ ns + config::builds[ i ].suffix_name + "_" + nx };
                    }
                }
            }
        }

        // Handle type discovery and grouping of publics.
        //
        std::unordered_map<std::string, std::vector<shared_public>> publics;
        for ( auto& [org, cl] : pub_list )
        {
            // Skip if all instances are type only.
            //
            bool type_only = true;
            for ( auto& build_list : cl.instances )
                for ( auto& entry : build_list )
                    type_only &= entry.entry_src->type_only() || entry.origin->public_map[ org ].addresses.empty();
            if ( type_only ) continue;

            // Within each build:
            //
            shared_public pub = {};
            for ( size_t n = 0; n != config::num_builds; n++ )
            {
                auto& build_list = cl.instances[ n ];

                // If it starts with Nt, merge with Zw variant if relevant and vice versa.
                //
                if ( org.starts_with( "Nt" ) || org.starts_with( "Zw" ) )
                    if ( auto it = pub_list.find( ( org[ 0 ] == 'N' ? "Zw" : "Nt" ) + org.substr( 2 ) ); it != pub_list.end() )
                        build_list.insert( build_list.end(), it->second.instances[ n ].begin(), it->second.instances[ n ].end() );

                // Find the first image exporting it.
                //
                for ( auto& entry : build_list )
                {
                    if ( auto rec = public_record::convert( entry.entry_src, entry.origin, org ) )
                    {
                        pub.record[ n ] = std::move( rec );
                        break;
                    }
                }

                // Remove all unknown types.
                //
                for ( auto it = build_list.begin(); it != build_list.end(); )
                {
                    if ( it->origin_idx == T_NOTTRANS || it->origin_idx == T_NOTYPE || it->origin_idx == T_VOID )
                        it = build_list.erase( it );
                    else
                        ++it;
                }

                // Remove equivalent types.
                //
                for ( auto it = build_list.begin(); it != build_list.end(); ++it )
                {
                    for ( auto it2 = std::next( it ); it2 != build_list.end(); )
                    {
                        if ( it2->get().first->is_decl_identical( it->get().first.get() ) )
                            it2 = build_list.erase( it2 );
                        else
                            ++it2;
                    }
                }

                // If there is still multiple entries:
                //
                if ( build_list.size() > 1 )
                {
                    // Use the most complex entry.
                    //
                    std::unordered_set<const pdb::leaf_generic*> subtypes;
                    auto ty = build_list.begin();
                    for ( auto it = ty; it != build_list.end(); it++ )
                    {
                        std::unordered_set<const pdb::leaf_generic*> tmp;
                        it->get().first->enum_subtypes( [ & ] ( const pdb::leaf_generic* g )
                        {
                            if ( !tmp.emplace( g ).second )
                                return false;
                            return true;
                        } );

                        if ( std::pair( tmp.size(), !it->entry_src->type_only() ) >
                             std::pair( subtypes.size(), !ty->entry_src->type_only() ) )
                        {
                            subtypes = std::move( tmp );
                            ty = it;
                        }
                    }

                    // If still not found, we'll use first.
                    //
                    if ( ty != build_list.end() && ty != build_list.begin() )
                        build_list.front() = std::move( *ty );
                    build_list.resize( 1 );
                }

                // Write the chosen type.
                //
                if ( !build_list.empty() )
                    pub.type[ n ] = shared_type_entry{ &config::builds[ n ], build_list.front().entry_src, build_list.front().get().first.get(), build_list.front().origin };
            }

            // Assert property consistency.
            //
            size_t first_group = 0;
            while ( first_group != config::num_builds && !pub.record[ first_group ] ) ++first_group;
            for ( auto n = first_group + 1; n < config::num_builds; n++ )
            {
                auto& new_rec = pub.record[ n ];
                if ( !new_rec ) continue;

                auto& fr_rec = pub.record[ first_group ];

                if ( new_rec->pdb->ldr_group != fr_rec->pdb->ldr_group )
                {
                    xstd::warning( "%s does not have consistent loader group [%s:%s... to %s:%s...].", org.data(),
                             config::builds[ first_group ].friendly_name.data(), fr_rec->pdb->ldr_group.front().data(),
                             config::builds[ n ].friendly_name.data(), new_rec->pdb->ldr_group.front().data() );
                    first_group = config::num_builds;
                    break;
                }
            }
            if ( first_group == config::num_builds ) continue;

            // Pick the most common name.
            //
            std::unordered_map<std::string, size_t> name_choices;
            for ( size_t n = 0; n != config::num_builds; n++ )
            {
                auto& rec = pub.record[ n ];
                if ( !rec ) continue;

                std::string name = text::transform_name( org );
                add_namespace( rec->pdb, name );
                name_choices[ name ]++;
            }
            auto& [cvt_name, _] = *std::max_element( name_choices.begin(), name_choices.end(), [ ] ( auto& a, auto& b )
            {
                return a.first < b.first;
            } );

            // Insert into the list by namespace.
            //
            pub.original_name = org;
            pub.transformed_name = cvt_name;
            auto [ns, __] = text::split_namespace( pub.transformed_name );
            publics[ std::string{ ns } ].emplace_back( std::move( pub ) );
        }

        // Write each namespace.
        //
        for ( auto& [ns, list] : publics )
        {
            add_work( [ list = std::ref( list ), &output ]()
            {
                // Sort the public list.
                //
                std::sort( list.get().begin(), list.get().end(), [ ] ( const shared_public& a, const shared_public& b )
                {
                    // By loader group.
                    //
                    auto& aldr = *a.get_ldr_group();
                    auto& bldr = *b.get_ldr_group();
                    if ( aldr < bldr )
                        return true;
                    if ( bldr < aldr )
                        return false;

                    // By build existance count.
                    //
                    size_t acnt = 0;
                    size_t bcnt = 0;
                    for ( auto& rec : a.record )
                        if ( rec )
                            acnt++;
                    for ( auto& rec : b.record )
                        if ( rec )
                            bcnt++;
                    if ( acnt < bcnt )
                        return true;
                    if ( bcnt < acnt )
                        return false;

                    // By final name.
                    //
                    return a.transformed_name < b.transformed_name;
                } );

                // Pass to writer.
                //
                write_exports( list.get(), output ); }
            );
        }

        // Write every type.
        //
        for ( auto& [original_name, collection] : type_list )
        {
            // Group based on type ids.
            //
            std::unordered_map<size_t, shared_type> group;
            for ( size_t n = 0; n != config::num_builds; n++ )
            {
                auto& list = collection.instances[ n ];
                if ( !list.empty() )
                {
                    fassert( list.size() == 1 );
                    auto& type = list.front().get().first;
                    group[ type->dynamic_type_id() ].push_back(
                        shared_type_entry{ &config::builds[ n ], list.front().entry_src, type.get(), list.front().origin }
                    );
                }
            }

            // Launch the workers.
            //
            for ( auto& [_, type] : group )
                add_work( [ type = std::move( type ), &output ]() { write_type( type, output ); } );
        }

        // Flush work queue again.
        //
        flush_work_queue();

        // Pre-reset all PDBs to handle cross-references.
        //
        for ( auto& cl : collections )
            for ( auto& [_, pdb] : cl )
                pdb.prereset();
    }
};