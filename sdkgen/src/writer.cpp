#include <map>
#include <numeric>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <fstream>
#include <list>
#include <random>
#include <thread>
#include "writer.hpp"
#include "text_parsing.hpp"

#define IN_GENERATOR
#include <sdkgen/support_library.hpp>

namespace sdk
{
	template<typename T>
	struct type_tag {};

	//  [0]          [1]       [2]
	// enum big_enum instance; // BigWindows -1.3f
	using declaration_e = text::split_string<3>;
	using declaration =   text::split_text<3>;
	
	// [0]                 [1]
	// struct
	// {
	//	   bla bla bla    // Bla!
	// }
	using definition_e =  text::split_string<2>;
	using definition =    text::split_text<2>;

	// Defines a dependency list.
	//
    static constexpr auto dep_list_hasher = [ ] ( const std::pair<std::string, std::string>& pair ) noexcept 
    {
        auto h = std::hash<std::string>{};
        return h( pair.first ) - h( pair.second );
    };
    using dependency_list = std::unordered_map<std::pair<std::string, std::string>, bool, decltype( dep_list_hasher )>;

    // Defines a magic macro list.
    // { name => definition }
    //
    using magic_list = std::map<std::string, std::string>;

    // Anon type list.
    //
    struct no_hash { size_t operator()( const void* p ) const noexcept { return std::hash<uint64_t>{}( ( uint64_t ) p ); } };
    using anon_list = std::unordered_map<const void*, std::string, no_hash>;

    // Arguments passed to define_type.
    //
    struct type_definition_request
    {
        // Name of the type splitted into assumed namespace and the type name itself.
        //
        std::string_view type_name;
        std::string_view type_scope; // (with the ::)

        // Import key.
        //
        std::string imp_key;

        // Type entry as is.
        //
        const shared_type& type;

        // Outputs, dependency list, the text to be inserted after namespace, magic declarations, local anon list.
        //
        definition& footer;
        dependency_list& dependencies;
        magic_list& magics;
        anon_list& anons;
    };

    // Simple helper to define a new magic macro. Returns [Name of the magic, Declaration].
    //
    static std::pair<std::string, std::string&> next_magic( magic_list& magics, bool args, size_t max )
    {
        // Calculate the amount of zero-padding.
        //
        size_t idx = magics.size();
        size_t digits = std::max( 1, ( int ) ceilf( log( max / 26 ) / log( 10 ) ) );
        size_t counter_max = std::pow( 10, digits );
        xstd::assert_that( max > idx, "Reached the limit of magic declarations." );

        // Format the text.
        //
        std::string name = text::fmt( "_%c%0*d%s", 'a' + ( ( idx / counter_max ) + 12 ) % 26, digits, idx % counter_max, args ? "(...)" : "" );

        // Insert into list.
        //
        auto [it, inserted] = magics.emplace( name, "" );
        fassert( inserted );
        
        // If it had arguments, remove it from the name and return the pair.
        //
        if ( args ) name.erase( name.end() - 5, name.end() );
        return { name, it->second };
    }

    // Writes the headers given the file details.
    //
    static void write_file( const std::string_view& name,                   // Name deciding the file name.
                            const std::string_view& ns,                     // Name of the namespace, for forward referenced dependencies.
                            const std::filesystem::path& output_directory,  // Output directory.
                            const dependency_list& dependencies,            // Type definition itself.
                            const definition& body,                         //
                            const definition& footer,                       //
                            const magic_list& magic_macros )
    {
        auto try_open = [ ] ( auto&& path ) -> std::ofstream
        {
            for ( size_t n = 0; n != 64; n++ )
            {
                std::ofstream stream( path );
                if ( stream.good() )
                    return stream;
                std::this_thread::sleep_for( std::chrono::milliseconds( 10 ) );
            }
            xstd::assert_that( false, "Failed opening file for write!" );
        };
        
        // Decide the file path and create directories.
        //
        auto [_, fname] = text::split_namespace( name );
        std::filesystem::path file_path = output_directory / text::relative_path( name, "" );
        std::filesystem::path dir_path = file_path; dir_path.remove_filename();
        std::filesystem::create_directories( dir_path );
        
        // Create the magic file.
        //
        std::string magic_b, magic_e;
        if ( magic_macros.size() )
        {
            std::filesystem::path magic_dir = dir_path / "magic";
            std::filesystem::create_directories( magic_dir );
        
            std::ofstream macro_bout = try_open( magic_dir / ( fname + ".start.hpp" ) );
            macro_bout << "#if !IN_PARSER\n";
            for ( auto& [k, v] : magic_macros )
                macro_bout << "#define " + k + " " + v + "\n";
            macro_bout << "#else\n";
            for ( auto& [k, v] : magic_macros )
            {
                if ( k.ends_with( "(...)" ) )
                    macro_bout << "#define " + k + " __VA_ARGS__\n";
                else
                    macro_bout << "#define " + k + "\n";
            }
            macro_bout << "#endif";
        
            std::ofstream macro_eout = try_open( magic_dir / ( fname + ".end.hpp" ) );
            for ( auto& [k, v] : magic_macros )
            {
                if ( k.ends_with( "(...)" ) )
                    macro_eout << "#undef " + k.substr( 0, k.size() - 5 ) + "\n";
                else
                    macro_eout << "#undef " + k + "\n";
            }
        
            magic_b = "#include \"magic/" + fname + ".start.hpp\"\n";
            magic_e = "#include \"magic/" + fname + ".end.hpp\"\n";

            macro_bout.flush();
            macro_bout.close();
            macro_eout.flush();
            macro_eout.close();
        }
        
        // Begin the document and handle full include dependencies.
        //
        std::ofstream fs = try_open( file_path );
        {
            auto include = [ & ] ( auto&& str )
            {
                return "#include \"" + text::relative_path( str, name ) + "\"\n";
                //return "#include <" + text::relative_path( str, "" ) + ">\n";
            };

            fs << "#pragma once\n";
            fs << "#include <sdkgen/support_library.hpp>\n";
            std::vector<std::string> inc_deps;
            for ( auto& [dep, req] : dependencies )
                if ( req )
                    inc_deps.emplace_back( include( dep.second ) );
            std::sort( inc_deps.begin(), inc_deps.end(), text::lexi_cmp );
            for ( auto& str : inc_deps )
                fs << std::move( str );
            fs << "\n";
        }
        
        // Handle cross namespace forward declarations.
        //
        {
            text::split_text<3> out_fwd;
            for ( auto& [dep, req] : dependencies )
            {
                if ( req ) continue;
        
                auto [ns2, name2] = text::split_namespace( dep.second );
                if ( ns != ns2 )
                {
                    out_fwd.push_back( {
                        "namespace " + ns2 + " ",
                        "{ " + dep.first + " " + name2 + "; ",
                        "}"
                    } );
        
                    const_cast< bool& >( req ) = true; // Reinterp. the bool as "handled" from now on.
                }
            }
            if ( out_fwd.size() )
            {
                text::flatten_inline( out_fwd );
                std::sort( out_fwd.begin(), out_fwd.end(), [ ] ( auto& a, auto& b ) { return text::lexi_cmp( a[ 0 ], b[ 0 ] ); } );
                fs << text::format_aligned( out_fwd ) << "\n";
            }
        }
        
        // Begin the namespace and handle internal forward references.
        //
        {
            fs << magic_b;
            fs << "namespace " + ns + "\n{\n";
            std::vector<std::string> fwd_deps;
            for ( auto& [dep, req] : dependencies )
            {
                if ( req ) continue;
                auto [ns2, name2] = text::split_namespace( dep.second );
                fwd_deps.emplace_back( text::pad( dep.first + " " + name2 ) + ";\n" );
            }
            if ( fwd_deps.size() )
            {
                std::sort( fwd_deps.begin(), fwd_deps.end(), text::lexi_cmp );
                for ( auto& str : fwd_deps )
                    fs << std::move( str );
                fs << "\n";
            }
        }
        
        // Write the definition body.
        //
        fs << text::format_aligned( body, 1 );
        
        // End the namespace, write the footer and flush the stream.
        //
        fs << "};\n";
        fs << magic_e;
        fs << text::format_aligned( footer );
        fs.flush();
        fs.close();
    }

    // Helper to discover dependencies.
    // - Also returns boolean indicating whether or not the type contains anonymous types.
    //
    static bool discover_dependencies( const pdb::leaf_generic* type, dependency_list& dependencies, const anon_list* anons, bool topology_dominated )
    {
        bool has_anon = false;
        auto rec_discover = [ & ] <typename T> ( const T * leaf, auto && self, bool required )
        {
            // Skip if intrinsic.
            //
            if ( leaf->is_intrinsic() )
                return;

            // Handle modifiers:
            //
            if constexpr ( pdb::ModifierLeaf<T> || pdb::BitFieldLeaf<T> || pdb::ArrayLeaf<T> )
            {
                pdb::visit( leaf->underlying_type, self, self, required );
                return;
            }
            else if constexpr ( pdb::PointerLeaf<T> )
            {
                pdb::visit( leaf->underlying_type, self, self, false );
                return;
            }

            // If anonymous enum or class, skip, it is handled by anonymous handler.
            //
            if constexpr ( pdb::ClassLeaf<T> || pdb::EnumLeaf<T> )
            {
                if ( anons && anons->contains( leaf ) )
                    return;
                else if ( !has_anon && leaf->is_anonymous() )
                {
                    has_anon = true;
                    return;
                }

                // If undeclared fwdref, ignore topology.
                //
				if ( leaf->attributes.fwdref || !leaf->fields || leaf->size() <= 0 )
					topology_dominated = false;
            }

            // Handle enums:
            //
            using I = std::pair<std::string, std::string>;
            if constexpr ( pdb::EnumLeaf<T> )
			{
                dependencies.insert_or_assign( I{ "enum", leaf->user_defined_name.resolve() }, true );
            }
            // Handle classes:
            //
            else if constexpr ( pdb::ClassLeaf<T> )
            {
                dependencies[ I{ leaf->keyword(), leaf->user_defined_name.resolve() } ] |= required || topology_dominated;
            }
            // Handle procedures:
            //
            else if constexpr ( pdb::ProcedureLeaf<T> )
            {
                pdb::visit( leaf->return_type, self, self, false );
                if ( auto args = leaf->arguments.resolve_as<pdb::leaf_arglist>() )
                    for ( auto& arg : args->types )
                        pdb::visit( arg, self, self, false );
            }
        };
        pdb::visit( type, rec_discover, rec_discover, true );
        return has_anon;
    }

	// Writes the definition for the given type.
	//
	static definition define_type( const type_definition_request& req, type_tag<pdb::leaf_enum> _, bool subreq = false )
	{
        // TODO: this is bullshit, you have to allow dynamic value resolving
        //

        // Make a map of values and names.
        //
        std::unordered_map<std::string, int64_t> name_map;
        std::map<std::pair<int64_t, std::string>, std::vector<const config::build_entry*>> value_map;
        pdb::leaf_generic* underlying_type = nullptr;
        for ( auto& instance : req.type )
        {
            auto enm = ( pdb::leaf_enum* ) instance.type;

            if ( enm->attributes.fwdref )
            {
                xstd::warning( "Defining forward ref enum '%s'!", enm->user_defined_name.resolve() );
                enm->underlying_type = instance.owner->type_map[ T_INT8 ].first;
            }

            if ( !underlying_type || underlying_type->bit_size() < enm->underlying_type->bit_size() )
                underlying_type = enm->underlying_type;
            if ( auto fld = enm->fields->as<pdb::leaf_fieldlist>() )
            {
                for ( auto& value : fld->enums )
                {
                    int64_t ival = ( int64_t ) value.value;
                    name_map[ value.name ] = ival;
                    value_map[ { ival, value.name.resolve() } ].emplace_back( instance.build );
                }
            }
        }

        // Determine prefix length.
        //
        size_t prefix_length = 0;
        if ( name_map.size() > 1 )
        {
            std::string_view prefix = name_map.begin()->first;
            auto next_prefix = [ & ] () {
                while ( !prefix.empty() )
                {
                    // AB_CD
                    if ( prefix.back() == '_' )
                        break;
                    
                    // AbCd
                    if ( prefix.size() >= 2 && isupper( prefix.back() ) && islower( prefix[ prefix.size() - 2 ] ) )
                    {
                        prefix.remove_suffix( 1 );
                        break;
                    }
                    
                    prefix.remove_suffix( 1 );
                }
            };

            for ( auto it = std::next( name_map.begin() ); it != name_map.end(); ++it )
            {
                if ( prefix.size() > it->first.size() )
                    prefix.remove_suffix( prefix.size() - it->first.size() ), next_prefix();
                
                while ( !it->first.starts_with( prefix ) || !text::is_valid_c_name( std::string_view{ it->first }.substr( prefix.size() ) ) )
                    prefix.remove_suffix( 1 ), next_prefix();
            }
            prefix_length = prefix.size();
        }
        
        // Print the integer list.
        //
        declaration result = { };
        for ( auto& [value, builds] : value_map )
        {
            // Write the value.
            //
            union
            {
                uint64_t zx;
                int64_t  sx;
            };
            bool is_signed = underlying_type->is_signed();
            switch ( underlying_type->bit_size() )
            {
                case 8:  is_signed ? sx = ( int8_t&  ) value : zx = ( uint8_t&  ) value;
                case 16: is_signed ? sx = ( int16_t& ) value : zx = ( uint16_t& ) value;
                case 32: is_signed ? sx = ( int32_t& ) value : zx = ( uint32_t& ) value;
                case 64: 
                default: is_signed ? sx = ( int64_t& ) value : zx = ( uint64_t& ) value;
            }

            std::string value_str( 32, '\x0' );
            if( is_signed && sx < 0 ) value_str.resize( sprintf_s( value_str.data(), value_str.size(), "-0x%llx,   ", -sx ) );
            else                      value_str.resize( sprintf_s( value_str.data(), value_str.size(), "0x%llx,   ", zx ) );
        
            // Write the entry.
            //
            auto& str = result.emplace_back();

            // Comment out if name is used by a later kernel version.
            //
            if ( name_map[ value.second ] != value.first )
                str[ 0 ] = "//";

            // Declare value.
            //
            std::string rel_name = value.second;
            rel_name.erase( rel_name.begin(), rel_name.begin() + prefix_length );
            str[ 0 ] += text::transform_name( std::move( rel_name ) ) + " = ";
            str[ 1 ] = std::move( value_str );
            str[ 2 ] = "  // ";

            // Add comment for the builds.
            //
            for ( auto& build : builds )
            {
                str[ 2 ] += build->friendly_name;
                str[ 2 ] += ", ";
            }
            str[ 2 ].erase( str[ 2 ].end() - 2, str[ 2 ].end() );
        }

        // Begin definition with meta information.
        //
        definition body;
        body.reserve( result.size() );
        if ( !subreq )
        {
            auto& orig_name = body.emplace_back();
            orig_name[ 0 ] = "%// [enum " + req.type.front().type->user_defined_name.resolve_original() + "]";
            auto& build_list = body.emplace_back();
            build_list[ 0 ] = "%//  ";
            for ( auto& t : req.type )
            {
                build_list[ 0 ] += t.build->friendly_name;
                build_list[ 0 ] += ", ";
            }
            build_list[ 0 ].erase( build_list[ 0 ].end() - 2, build_list[ 0 ].end() );
            body.push_back( { "%//" } );
        }

        // Flatten inline and print to body.
        //
        text::flatten_inline( result, 0, 1 );
        body.push_back( { "enum class " + req.type_name + " : " + underlying_type->type_name() } );
        body.push_back( { "{" } );
        for ( auto& line : result )
            body.push_back( { std::move( line.front() ), std::move( line.back() ) } );
        body.push_back( { "};" } );
        return body;
	}
    static definition define_type( const type_definition_request& req, type_tag<pdb::leaf_class> _, bool subreq = false )
    {
        // Flatten all fields.
        // T = { Source build, Bit Offset, Type, Type Index }
        //
        struct field_entry_t
        {
            const config::build_entry* build;
            const config::pdb_entry* pdb;
            size_t bit_offset;
            pdb::leaf_generic* type;
            size_t index;
            pdb::leaf_class* parent;
            pdb::instance* owner;
            bool force_volatile;
        };
        std::unordered_map<std::string, std::vector<field_entry_t>> flat_fields;
        for ( auto& entry : req.type )
        {
            size_t idx = 0;
            auto cl = ( pdb::leaf_class* )entry.type;

            std::unordered_set<size_t> force_vol_set;
            cl->enum_variables( [ & ] ( const pdb::leaf_fieldlist::entry_member& field, size_t bit_off )
            {
                auto rec = [ & ] <typename T> ( T * leaf, auto && self )
                {
                    if constexpr ( pdb::ModifierLeaf<T> )
                        if ( leaf->modifier.MOD_volatile )
                            force_vol_set.emplace( bit_off );
                    if constexpr ( pdb::EnumLeaf<T> || pdb::BitFieldLeaf<T> || pdb::ArrayLeaf<T> || pdb::PointerLeaf<T> )
                        pdb::visit( leaf->underlying_type, self, self );
                };
                pdb::visit( field.type.resolve(), rec, rec );
            } );
            cl->enum_variables( [ & ] ( const pdb::leaf_fieldlist::entry_member& field, size_t bit_off )
            {
                bool force_v = false;
                if ( field.type->is_bitfield() )
                    force_v = force_vol_set.contains( xstd::align_down( bit_off, field.type->size() * 8 ) );
                flat_fields[ field.name ].push_back( { entry.build, entry.pdb, bit_off, ( pdb::leaf_generic* )field.type.resolve(), idx++, cl, entry.owner, force_v } );
            } );
        }

        // Determine initial linkage type.
        //
        bool is_non_volatile = std::any_of( req.type.begin(), req.type.end(), [ ] ( auto& e ) 
        { 
            return e.build->sdk_compilation && e.type->bit_size() != 0;
        } );

        // Allocate the declaration list and create the anonymous mappings.
        //
        declaration decls;
        definition anon_decls;
        definition typedef_decls;

        // Until all fields are processed:
        //
        bool first_group = true;
        std::unordered_set<std::string> taken_names;
        size_t num_fields = flat_fields.size() + 26 * 10 * 10;
        while ( !flat_fields.empty() )
        {
            // Pad after the first group.
            //
            if ( !std::exchange( first_group, false ) )
                decls.emplace_back();

            // Find the largest field-sharing group.
            //
            std::vector<const config::build_entry*> active_group = {};
            for ( auto& [fname, entries] : flat_fields )
            {
                if ( entries.size() > active_group.size() )
                {
                    active_group.clear();
                    for ( auto& field : entries )
                        active_group.emplace_back( field.build );
                }
            }

            // Get the list of fields they share.
            //
            std::vector<std::pair<std::string, std::vector<field_entry_t>>> local_fields;
            for ( auto it = flat_fields.begin(); it != flat_fields.end(); )
            {
                // Skip if size does not match.
                //
                if ( it->second.size() != active_group.size() ) { ++it; continue; }
                
                // Skip if build list does not match.
                //
                bool match = std::accumulate( it->second.begin(), it->second.end(), true, [ it2 = active_group.begin() ]( bool value, auto& entry ) mutable
                {
                    return value && entry.build == *it2++;
                } );
                if ( !match ) { ++it; continue; }

                // Remove the entry and append into local list.
                //
                local_fields.emplace_back( it->first, std::move( it->second ) );
                it = flat_fields.erase( it );
            }

            // Sort in the order in structure and write the fields.
            //
            std::sort( local_fields.begin(), local_fields.end(), [ ] ( auto&& p1, auto&& p2 )
            {
                return p1.second.back().index < p2.second.back().index;
            } );

            // Write the version header.
            //
            std::string version_id = "%// " + text::explode( active_group, []( auto& s ) -> auto& { return s->friendly_name; } );
            decls.push_back( { std::move( version_id ) } );
            decls.push_back( { "%//" } );

            // For each field:
            //
            for ( auto& [name, entries] : local_fields )
            {
                std::string transformed_name = text::transform_name( name );
                while ( !taken_names.emplace( transformed_name ).second )transformed_name += "_";

                // Fix all anon name usage:
                //
                {
                    // Get a list of all anon class and enums involved.
                    //
                    shared_type anon_class, anon_enum;
                    for ( auto& entry : entries )
                    {
                        auto rec_reduce = [ & ] <typename T> ( T* leaf, auto && self )
                        {
                            // Handle modifiers:
                            //
                            if constexpr ( pdb::ModifierLeaf<T> || pdb::BitFieldLeaf<T> || pdb::ArrayLeaf<T> || pdb::PointerLeaf<T> )
                                return pdb::visit( leaf->underlying_type, self, self );

                            // Handle procedures.
                            //
                            if constexpr ( pdb::ProcedureLeaf<T> )
                            {
                                if ( auto& vargs = leaf->arguments )
                                {
                                    if ( auto args = vargs->as<pdb::leaf_arglist>() )
                                    {
                                        for( auto& t : args->types )
                                            pdb::visit( t, self, self );
                                    }
                                }
                                if ( auto& ret = leaf->return_type )
                                    pdb::visit( ret, self, self );
                            }

                            // If it's an anonymous enum or class, push to the list.
                            //
                            if constexpr ( pdb::ClassLeaf<T> || pdb::EnumLeaf<T> )
                            {
                                if ( leaf->user_defined_name.empty() )
                                {
                                    auto& list = pdb::ClassLeaf<T> ? anon_class : anon_enum;
                                    list.push_back( { entry.build, entry.pdb, leaf, entry.owner } );
                                }
                            }
                        };
                        pdb::visit( entry.type, rec_reduce, rec_reduce );
                    }

                    // For each anonymous group:
                    //
                    for ( auto* list : { &anon_class, &anon_enum } )
                    {
                        if ( list->empty() ) continue;

                        // Pick a new name and determine the new scope.
                        //
                        std::string sname = "u" + std::to_string( req.anons.size() ) + "_" + transformed_name + "_t";
                        std::string scope = req.type_scope + req.type_name + "::";
                        std::string keyword = list == &anon_class
                            ? std::string{ list->front().type->as<pdb::leaf_class>()->keyword() }
                            : "enum";

                        // Set the new name.
                        //
                        for ( auto& t : *list )
                            req.anons.emplace( t.type, sname );

                        // Create the definition request and get the body.
                        //
                        type_definition_request req_new = {
                            .type_name = sname,
                            .type_scope = scope,
                            .imp_key = req.imp_key + "." + name,
                            .type = *list,
                            .footer = req.footer,
                            .dependencies = req.dependencies,
                            .magics = req.magics,
                            .anons = req.anons
                        };

                        definition def;
                        if ( list == &anon_class )
                            def = define_type( req_new, type_tag<pdb::leaf_class>{}, true );
                        else
                            def = define_type( req_new, type_tag<pdb::leaf_enum>{}, true );
                        
                        anon_decls.insert( anon_decls.end(), std::make_move_iterator( def.begin() ), std::make_move_iterator( def.end() ) );
                        anon_decls.emplace_back();
                    }
                }

                // Make a list of all possible types.
                //
                struct joint_type_instance
                {
                    const config::build_entry* src;
                    pdb::leaf_generic* leaf;
                    pdb::instance* owner;
                };
                std::vector<std::pair<const pdb::leaf_generic*, std::vector<joint_type_instance>>> types;
                for ( auto& entry : entries )
                {
                    auto it = std::find_if( types.begin(), types.end(), [ & ] ( auto& p )
                    {
                        return entry.type->is_decl_identical( p.first );
                    } );

                    joint_type_instance inst = {
                        .src = entry.build,
                        .leaf = entry.type,
                        .owner = entry.owner
                    };

                    if ( it != types.end() )
                        it->second.emplace_back( std::move( inst ) );
                    else
                        types.push_back( { entry.type, { std::move( inst ) } } );
                }

                // Recursively visit all types used to discover dependencies.
                //
                for ( auto& [type, src] : types )
                    xstd::assert_that( !discover_dependencies( type, req.dependencies, &req.anons, false ), "Unhandled anonymous in %s!", req.type_name );

                // Begin a field and write the transformed field name.
                //
                auto& [type_name, field_name, comment] = decls.emplace_back();
                field_name = std::move( transformed_name );
                comment = "{ " + text::explode( entries, [ ] ( const field_entry_t& f ) 
                {
                    if ( f.type->is_bitfield() )
                    {
                        size_t off = xstd::align_down( f.bit_offset, f.type->size() * 8 ) / 8;
                        return text::fmt( "+0x%04x@%-2d", off, f.bit_offset % ( f.type->size() * 8 ) );
                    }
                    else
                    {
                        return text::fmt( "+0x%04x   ", f.bit_offset / 8 );
                    }
                }, " " ) + " } | ." + name;

                // If it was previously non-volatile and this field has different offsets per build, demote the linkage.
                //
                if ( is_non_volatile && std::all_of( entries.begin(), entries.end(), [ ] ( auto& e ) { return !( e.type->bit_size() & 7 ); } ) )
                {
                    for ( auto& entry : entries )
                    {
                        if ( (entry.bit_offset/8) != (entries.front().bit_offset/8) )
                        {
                            xstd::log( "Demoting nonvolatile linkage of %s [%s: %x vs %x]\n", req.imp_key, name, entry.bit_offset/8, entries.front().bit_offset/8 );
                            is_non_volatile = false;
                            break;
                        }
                    }
                }

                // Decide the default offset entry.
                //
                sdk::offset_entry entry = { .exists = false };
                std::string identifier = req.imp_key + "." + name;

                if ( is_non_volatile )
                {
                    entry =
                    {
                        .bit_offset = ( uint32_t ) ( entries.back().bit_offset ),
                        .bit_size = ( uint8_t ) ( entries.back().type->bit_size() ),
                        .exists = true
                    };
                }
                else
                {
                    auto it_def = std::find_if( entries.begin(), entries.end(), [ ] ( auto& entry )
                    {
                        return entry.build == &config::builds[ config::num_builds - 1 ];
                    } );
                    if ( it_def != entries.end() )
                    {
                        entry =
                        {
                            .bit_offset = ( uint32_t ) ( it_def->bit_offset ),
                            .bit_size =   ( uint8_t )  ( it_def->type->bit_size() ),
                            .exists = true
                        };
                    }
                }

                // Begin the magic macro.
                //
                auto&& [macro_name, macro] = next_magic( req.magics, false, num_fields );

                // Check for variant integers.
                //
                bool has_bit_field = false;
                bool is_var_int = true;
                uint8_t bit_min = UINT8_MAX, bit_max = 0;
                bool is_var_c = false, is_var_v = false;
                std::unordered_set<uint8_t> int_sizes = {};
                for ( auto& [type, src] : types )
                {
                    auto rec_reduce = [ &, entries = &entries ] <typename T> ( T * leaf, auto && self )
                    {
                        if constexpr ( pdb::ModifierLeaf<T> )
                        {
                            is_var_c |= leaf->modifier.MOD_const;
                            is_var_v |= leaf->modifier.MOD_volatile;
                            return pdb::visit( leaf->underlying_type, self, self );
                        }
                        else if constexpr ( pdb::BitFieldLeaf<T> )
                        {
                            has_bit_field = true;
                            int_sizes.emplace( leaf->size() );
                            bit_min = std::min<uint8_t>( bit_min, ( uint8_t ) leaf->bit_size() );
                            bit_max = std::max<uint8_t>( bit_max, ( uint8_t ) leaf->bit_size() );
                            for ( auto& e : *entries )
                                is_var_v |= e.force_volatile;
                        }
                        else if constexpr ( pdb::PrimitiveLeaf<T> )
                        {
                            is_var_int &= leaf->traits == pdb::leaf_primitive::integral;
                            int_sizes.emplace( leaf->size() );
                            bit_min = std::min<uint8_t>( bit_min, ( uint8_t ) leaf->value_size * 8 );
                            bit_max = std::max<uint8_t>( bit_max, ( uint8_t ) leaf->value_size * 8 );
                        }
                        else if constexpr ( pdb::EnumLeaf<T> )
                            pdb::visit( leaf->underlying_type, self, self );
                        else
                            is_var_int = false;
                    };
                    pdb::visit( type, rec_reduce, rec_reduce );
                }

                // Declare type namer.
                //
                auto make_type_name = [ & ] ( const pdb::leaf_generic* g )
                {
                    if ( !g->is_anonymous() )
                        return g->type_name();

                    std::string result = "";
                    auto rec_namer = [ & ] <typename T> ( const T* leaf, auto&& self )
                    {
                        // Allowed modifiers:
                        //
                        if constexpr ( pdb::ModifierLeaf<T> || pdb::ArrayLeaf<T> || pdb::PointerLeaf<T> )
                        {
                            pdb::visit( leaf->underlying_type, self, self );
                            result = leaf->add_modifiers( result );
                        }
                        // Otherwise should match the anon list.
                        //
                        else
                        {
                            auto it = req.anons.find( leaf );
                            xstd::assert_that( it != req.anons.end(), "Unnamed anonymous found!" );
                            result = it->second;
                        }
                    };
                    pdb::visit( g, rec_namer, rec_namer );
                    return result;
                };

                is_non_volatile = is_non_volatile || ( identifier == "_ETHREAD.Tcb" || identifier == "_EPROCESS.Pcb" );
                const char* linkage_type = is_non_volatile ? "_SDK_NONVOL" : "_SDK_MAGIC";
                
                // If multiple types and all are integers or if single type which is a bitfield:
                //
                if ( types.size() != 1 ? is_var_int : has_bit_field )
                {
                    // Determine the qualifiers.
                    //
                    std::string cv;
                    if ( is_var_c ) cv = "const ";
                    if ( is_var_v ) cv += "volatile ";

                    std::string cvt;
                    if ( is_var_c && is_var_v )
                        cvt = "add_cv_t";
                    else if ( is_var_v )
                        cvt = "add_v_t";
                    else if ( is_var_c )
                        cvt = "add_c_t";
                    else
                        cvt = "nop_t";

                    // Determine the basic type.
                    //
                    std::string primitive_type = cv + text::fmt( "%sint%d_t", types.back().first->is_signed() ? "" : "u", bit_max );
                    type_name = bit_max == bit_min ? primitive_type : types.back().first->is_signed() ? "varint_t" : "varuint_t";


                    size_t csize = bit_max == bit_min ? bit_max : 0;
                    std::string utypes = "";
                    for ( auto s : int_sizes )
                        utypes += text::fmt( "uint%u_t,", s * 8 );
                    utypes.pop_back();

                    // Write the macro.
                    //
                    macro = text::fmt(
                        "%s_BITFIELD(%s, _SDK_ESCAPE(%s), \"%s\", %s, 0x%x, 0x%x, %s, 0x%llx, %llu, %s)",
                        linkage_type, cvt.c_str(), primitive_type.c_str(), identifier.c_str(), field_name.c_str(), entry.bit_offset, ( uint32_t ) entry.bit_size, entry.exists ? "true" : "false", std::mt19937_64{std::random_device{}( )}( ), csize, utypes.c_str()
                    );
                }
                // Otherwise, if multiple types:
                //
                else if ( types.size() != 1 )
                {
                    if ( has_bit_field )
                    {
                        printf( "Fatal type mismatch:\n" );
                        for ( auto& type : types )
                            printf( "=> %s.%s as %s\n", req.type.front().type->user_defined_name.resolve_original().data(), name.data(), make_type_name( type.first ).data() );
                    }

                    // Write the type name as variant where possible.
                    //
                    if ( has_bit_field )
                        type_name = "sdk::unknown /*error*/";
                    else
                        type_name = "sdk::variant<" + text::explode( types, [ & ] ( auto& type ) { return make_type_name( type.first ); } ) + ">";

                    // Write the macro.
                    //
                    macro = text::fmt(
                        "%s_PROPERTY(_SDK_ESCAPE(%s), \"%s\", %s, 0x%x, 0x%x, %s, 0x%llx)",
                        linkage_type, type_name.c_str(), identifier.c_str(), field_name.c_str(), entry.bit_offset, ( uint32_t ) entry.bit_size, entry.exists ? "true" : "false", std::mt19937_64{ std::random_device{}( ) }( )
                    );
                }
                // Finally:
                //
                else
                {
                    // Write the type name.
                    //
                    type_name = make_type_name( types.front().first );

                    // Preliminary type length limiting based on aliases.
                    //
                    if ( type_name.length() > config::long_name_limit )
                    {
                        auto& entry = types.front().second.front();

                        if ( entry.owner->type_map.size() >= entry.leaf->order_dagt &&
                             entry.owner->type_map[ entry.leaf->order_dagt ].first.get() == entry.leaf )
                        {
                            auto it = entry.owner->aliases.find( ( CV_typ_t ) entry.leaf->order_dagt );
                            if ( it != entry.owner->aliases.end() && it->second.size() == 1 )
                            {
                                std::string old_type_name = std::move( type_name );
                                type_name = text::transform_name( it->second.front() ) + "_t ";
                                typedef_decls.push_back( {
                                    "using " + type_name + "= ", 
                                    std::move( old_type_name ) + ";"
                                } );
                            }
                        }
                    }

                    // Write the macro.
                    //
                    macro = text::fmt(
                        "%s_PROPERTY(_SDK_ESCAPE(%s), \"%s\", %s, 0x%x, 0x%x, %s, 0x%llx)",
                        linkage_type, type_name.c_str(), identifier.c_str(), field_name.c_str(), entry.bit_offset, ( uint32_t ) entry.bit_size, entry.exists ? "true" : "false", std::mt19937_64{ std::random_device{}( ) }( )
                    );
                }

                // Limit the type name length.
                //
                if ( type_name.length() > config::long_name_limit )
                {
                    std::string old_type_name = std::move( type_name );
                    type_name = field_name + "_t ";
                    typedef_decls.push_back( {
                        "using " + type_name + "= ", 
                        std::move( old_type_name ) + ";"
                    } );
                }

                // Finalize the definition.
                //
                type_name.insert( 0, macro_name += " " );
                type_name += ' ';
                field_name += ';';
                comment.insert( 0, "  //" );
            }
        }

        // Add magic properties.
        //
        auto keyword = ( ( pdb::leaf_class* )req.type.front().type )->keyword();
        bool pack_struct = false;
        {
            auto it_def = std::find_if( req.type.begin(), req.type.end(), [ ] ( auto& entry )
            {
                return entry.build == &config::builds[ config::num_builds - 1 ];
            } );

            bool exists = false;
            size_t size = 0;
            
            if ( it_def != req.type.end() )
            {
                size = it_def->type->size();
                exists = true;
            }
            
            decls.emplace_back();

            const char* linkage_type = is_non_volatile ? "SDK_NONVOL" : "SDK_MAGIC";
            decls.push_back( { text::fmt( "%%%s_PROPERTIES( \"%s\", 0x%x, %s, 0x%llx );", linkage_type, std::string{req.imp_key+".$"}.c_str(), size, exists ? "true" : "false", std::mt19937_64{ std::random_device{}() }() ) } );

            bool is_fixed = true;
            size_t sz_0 = req.type.front().type->size();
            for ( auto& def : req.type )
                is_fixed &= def.type->bit_size() == ( sz_0 * 8 );

            if ( is_fixed )
            {
                decls.push_back( { text::fmt( "%%SDK_FIXED_SIZE( %s, 0x%x );", std::string{req.type_name}.data(), sz_0 ) } );
                req.footer.push_back( { "%SDK_VERIFY( " + keyword + " " + req.type_scope + req.type_name + ", " + text::fmt( "0x%x );", sz_0 ) } );
                //pack_struct = sz_0 & 7; //???
            }
            else
            {
                decls.push_back( { text::fmt( "%%SDK_DYNAMIC_SIZE( %s );", std::string{req.type_name}.data() ) } );
            }
        }

        // Begin definition with meta information.
        //
        definition body;
        body.reserve( decls.size() );

        if ( !subreq )
        {
            auto& orig_name = body.emplace_back();
            orig_name[ 0 ] = "%// [" + keyword + " " + req.type.front().type->user_defined_name.resolve_original() + "]";
            auto& build_list = body.emplace_back();
            build_list[ 0 ] = "%// => " + text::explode( req.type, []( auto& s ) -> auto& { return s.build->friendly_name; } );
            if ( is_non_volatile ) build_list[ 0 ] += " (NV)";
            body.push_back( { "%//" } );
        }

        // Append anon definitions before members.
        //
        decls.insert( decls.begin(), anon_decls.size(), declaration_e{} );
        for ( size_t n = 0; n != anon_decls.size(); n++ )
            decls[ n ] = { std::move( anon_decls[ n ].front() ), "", std::move( anon_decls[ n ].back() ) };

        // Append typedef definitions after anons.
        //
        if ( typedef_decls.size() )
        {
            text::flatten_inline( typedef_decls, 0 );

            auto it = decls.insert( decls.begin() + anon_decls.size(), typedef_decls.size() + 1, declaration_e{} );
            for ( size_t n = 0; n != typedef_decls.size(); n++ )
                *it++ = { '%' + std::move( typedef_decls[ n ].front() ) + std::move( typedef_decls[ n ].back() ) };
        }

        // Flatten inline and print to body.
        //
        text::flatten_inline( decls, 0, 1 );
        body.push_back( { keyword + ( pack_struct ? " [[gnu::packed]] " : " " ) + req.type_name } );
        body.push_back( { "{" } );
        for ( auto& line : decls )
            body.push_back( { std::move( line.front() ), std::move( line.back() ) } );
        body.push_back( { "};" } );
        return body;
    }

    // Writes the export list for the given namespace at the given directory.
    //
    void write_exports( const shared_exports& exports, const std::filesystem::path& output_directory )
    {
        if ( exports.empty() ) return;

        // Decide the namespace and the file name.
        //
        auto [ns_name, _] = text::split_namespace( exports.front().transformed_name );
        std::string file_name = ns_name + "::api";

        // For each export:
        //
        definition body;
        dependency_list dependencies;
        magic_list magic_macros;
        std::unordered_set<std::string> taken_names;
        for ( auto& exp : exports )
        {
            // Skip if __midl_frag
            //
            if ( exp.original_name.starts_with( "__midl_frag" ) )
                continue;

            // Write the original name.
            //
            body.push_back( { "%// [" + exp.original_name + "]" } );
            body.push_back( { "%// Ldr = [" + text::explode( *exp.get_ldr_group(), []( auto& v ) -> auto& { return v; } ) + "]" } );

            // For each build it's present in, write the details.
            //
            std::string build_list_tmp[ config::num_builds ];
            for ( size_t n = 0; n != config::num_builds; n++ )
                if ( auto& rec = exp.record[ n ] )
                    build_list_tmp[ n ] = config::builds[ n ].friendly_name;
            body.push_back( { "%// => " + text::explode( build_list_tmp, []( auto& s ) -> auto& { return s; } ) } );
            for ( size_t n = 0; n != config::num_builds; n++ )
                if ( auto& rec = exp.record[ n ] )
                    body.push_back( { text::fmt( "%%// %s %s:0x%llx, 0x%x bytes", rec->pdb->ldr_group[ rec->pdb->group_index ].data(), rec->section_name.data(), rec->rva, rec->size ) } );
            body.push_back( { "%//" } );

            // For each type, add dependencies and convert to name.
            //
            std::vector<std::string> type_names;
            for ( auto& type : exp.type )
            {
                if ( !type )
                    continue;
                if ( discover_dependencies( type->type, dependencies, nullptr, true ) )
                    xstd::warning( "%s is an anonymous public!\n", exp.original_name.data() );
                else
                {
                    pdb::leaf_pointer dummy_ptr = {};
                    dummy_ptr.attributes.ptrtype = CV_PTR_64;
                    dummy_ptr.attributes.ptrmode = CV_PTR_MODE_PTR;
                    type_names.emplace_back( dummy_ptr.add_modifiers( type->type->type_name() ) );
                }
            }
            if ( type_names.empty() ) type_names.emplace_back( "sdk::unknown_ptr" );
            type_names.erase( std::unique( type_names.begin(), type_names.end() ), type_names.end() );

            // Create the macro.
            //
            auto&& [mname, macro] = next_magic( magic_macros, true, exports.size() );

            // Write the public.
            //
            std::string name{ text::split_namespace( exp.transformed_name ).second };
            while ( !taken_names.emplace( name ).second ) name += "_";
            name += ";";

            std::string type_name = type_names.back();
            if ( type_names.size() != 1 )
                type_name += "/*types differ*/";
            body.push_back( { "%" + mname + "(" + type_names.front() + ") ", std::move( name ) } );
            body.emplace_back();

            // Find the properties for last build.
            //
            public_entry entry = { 0, 0, 0, false };
            std::string_view hint_image = {};
            if ( auto& rec = exp.record[ config::num_builds - 1 ] )
            {
                entry.offset = rec->rva;
                entry.sys_idx = 0;
                entry.exists = true;
                hint_image = rec->pdb->ldr_group[ rec->pdb->group_index ];
            }
            else
            {
                for ( auto& rec : exp.record )
                {
                    if ( rec )
                    {
                        hint_image = rec->pdb->ldr_group[ rec->pdb->group_index ];
                        break;
                    }
                }
            }

            // Write the macro.
            //
            std::string identifier = "$" + exp.original_name + "$" + hint_image;
            macro = text::fmt(
                "_SDK_MAGIC_LINK(_SDK_ESCAPE(%s), \"%s\", 0x%x, 0x%x, %s, 0x%llx)",
                type_name.c_str(), identifier.c_str(),
                entry.offset, 0, entry.exists ? "true" : "false", std::mt19937_64{ std::random_device{}() }()
            );
        }
        body.pop_back();

        // Write the file.
        //
        write_file(
            file_name,
            ns_name,
            output_directory,
            dependencies,
            body,
            {},
            magic_macros
        );
    }

    // Writes the header for the given type at the given directory.
    //
	void write_type( const shared_type& type, const std::filesystem::path& output_directory )
	{
        // Skip if intrinsic.
        //
        auto& type_sample = type.front().type;
        if ( type_sample->is_intrinsic() )
            return;

        // Skip if __midl_frag
        //
        if ( type_sample->user_defined_name.resolve_original().starts_with( "__midl_frag" ) )
            return;

        // Visit the type.
        //
        pdb::visit( type_sample, [ & ] <typename T> ( T* )
        {
            // If enum or class:
            //
            if constexpr ( pdb::ClassLeaf<T> || pdb::EnumLeaf<T> )
            {
                // Skip if anonymous.
                //
                auto& name = type_sample->user_defined_name;
                auto [scope, fname] = text::split_namespace( name.resolve(), false );
                if ( name.empty() )
                    return;
                
                // Define the type.
                //
                definition footer;
                magic_list magic_macros;
                dependency_list dependencies;
                anon_list anons;
                definition body = define_type( {
                    .type_name = fname,
                    .type_scope = scope,
                    .imp_key = type_sample->user_defined_name.resolve_original(),
                    .type = type,
                    .footer = footer,
                    .dependencies = dependencies,
                    .magics = magic_macros,
                    .anons = anons
                }, type_tag<T>{} );

                // Remove the additional :: from scope name.
                //
                std::string_view ns = scope;
                if ( ns.ends_with( "::" ) ) ns.remove_suffix( 2 );

                // Write the file.
                //
                write_file(
                    name.resolve(),
                    ns,
                    output_directory,
                    dependencies,
                    body,
                    footer,
                    magic_macros
                );
            }
        } );
	}
};
