#pragma once
#include <string>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <string_view>
#include <unordered_set>
#include <xstd/assert.hpp>
#include <xstd/text.hpp>

// String parsing helpers.
//
namespace text
{
    // List of keywords that no name should be using.
    //
    inline static const std::unordered_set<std::string> keyword_list = {
        "alignas", "alignof", "and", "and_eq", "asm", "atomic_cancel", "atomic_commit", "atomic_noexcept",
        "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char",
        "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const", "consteval",
        "constexpr", "constinit", "const_cast", "continue", "co_await", "co_return", "co_yield", "decltype",
        "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit",
        "export", "extern", "false", "float", "for", "friend", "goto", "if",
        "inline", "int", "long", "mutable", "namespace", "new", "noexcept", "not",
        "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected", "public",
        "reflexpr", "register", "reinterpret_cast", "requires", "return", "short", "signed", "sizeof",
        "static", "static_assert", "static_cast", "struct", "switch", "synchronized", "template", "this",
        "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union",
        "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while", "xor",
        "xor_eq", "errno",
        "constants", "win", "sdk"
    };

    // List of common anonymous/reserved names that will be removed.
    //
    static const std::unordered_set<std::string> hardcodded_anon_names = {
        "s", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9",
        "u", "u0", "u1", "u2", "u3", "u4", "u5", "u6", "u7", "u8", "u9",
        "e", "e0", "e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8", "e9"
    };
    static constexpr std::string_view hardcodded_reserved_names[] = {
        "Reserved",
        "reserved",
        "ReservedBits",
        "ReservedFlags",
        "ReservedPad",
        "Fill",
        "Padding",
        "Pad",
        "pUnused",
        "Unused",
        "unused",
        "__unusedAlignment",
        "UnusedPad",
        "Spare",
        "spare",
        "SpareBit",
        "SpareBits",
        "SpareByte",
        "SpareBytes",
        "SpareShort",
        "SpareShorts",
        "SpareUSHORT",
        "SpareUSHORTS",
        "SpareLong",
        "SpareLongs",
        "SpareULONG",
        "SpareULONGS",
        "SparePtr",
        "SparePointer",
        "SparePointers",
        "SpareSameTebBits",
        "PrcbPad",
        "PlaceholderReserved",
    };

    // Checks if the name is valid in C.
    //
    inline static bool is_valid_c_name( std::string_view name )
    {
        if ( name.empty() )
            return false;
        if ( !isalpha( name[ 0 ] ) && name[ 0 ] != '_' )
            return false;
        return name.end() == std::find_if( name.begin(), name.end(), [ ] ( char c )
        {
            return !isalnum( c ) && c != '_';
        } );
    }

    // Checks if the name is anonymous.
    //
    inline static bool is_anonymous_type( std::string_view name )
    {
        return name.empty() ||
            name.find( "__unnamed" ) != std::string::npos ||
            name.find( "<unnamed-" ) != std::string::npos ||
            name.find( "<anonymous-" ) != std::string::npos;
    }
    inline static bool is_legacy_anonymous_variable( const std::string& name )
    {
        return hardcodded_anon_names.contains( name );
    }

    // Checks if the name is reserved.
    //
    inline static bool is_reserved_field( std::string_view view )
    {
        for ( auto& name : hardcodded_reserved_names )
        {
            if ( view.starts_with( name ) )
            {
                auto str = view.substr( name.length() );
                if ( str.find_last_not_of( "0123456789ab" ) == std::string::npos )
                    return true;
            }
        }
        return false;
    }

    // Default tabbing unit.
    //
    static constexpr size_t tab_unit = 4;

    // Aligned string vectors.
    // - If line starts with %, it will be skipped in boundary calculation.
    //
    template<size_t N>
    using split_string = std::array<std::string, N>;
    template<size_t N>
    using split_text =   std::vector<split_string<N>>;

    // Partially renders the text and merges all columns from [0, columns) into first partition.
    //
    template<size_t N>
    inline static void flatten_inline( split_text<N>& vec, size_t columns = 0, size_t left_pad = 0 )
    {
        if ( !columns ) columns = N;

        // Calculate alignment boundaries.
        //
        size_t alignment_boundaries[ N - 1 ] = { 0 };
        for ( auto& line : vec )
        {
            for ( size_t i = 0; i != ( columns - 1 ); i++ )
            {
                size_t& bnd = alignment_boundaries[ i ];
                std::string_view entry = line[ i ];
                if ( entry.starts_with( '%' ) )
                    continue;
                bnd = std::max( bnd, entry.size() );
            }
        }

        // Flatten and return.
        //
        for ( auto& line : vec )
        {
            std::string result;
            result.insert( result.end(), left_pad * tab_unit, ' ' );

            for ( size_t i = 0; i != ( columns - 1 ); i++ )
            {
                auto& entry = line[ i ];
                size_t offset = 0;
                if ( entry.starts_with( '%' ) )
                {
                    if ( !result.empty() && result[ 0 ] != '%' )
                        result.insert( result.begin(), '%' );
                    offset = 1;
                }

                result.insert( result.end(), entry.begin() + offset, entry.end() );
                if ( int64_t inserted = entry.size() - offset; inserted < alignment_boundaries[ i ] )
                    result.insert( result.end(), alignment_boundaries[ i ] - inserted, ' ' );
                entry.clear();
            }
            line[ 0 ] = std::move( result );
        }
    }

    // Formats the text and returns as string.
    //
    template<size_t N>
    inline static std::string format_aligned( const split_text<N>& vec, size_t left_pad = 0 )
    {
        // Calculate alignment boundaries.
        //
        size_t alignment_boundaries[ N - 1 ] = { 0 };
        for ( auto& line : vec )
        {
            for ( size_t i = 0; i != ( N - 1 ); i++ )
            {
                size_t& bnd = alignment_boundaries[ i ];
                std::string_view entry = line[ i ];
                if ( entry.starts_with( '%' ) )
                    continue;
                bnd = std::max( bnd, entry.size() );
            }
        }

        // Output and return.
        //
        std::string result;
        for ( auto& line : vec )
        {
            result.insert( result.end(), left_pad * tab_unit, ' ' );
            for ( size_t i = 0; i != ( N - 1 ); i++ )
            {
                std::string_view entry = line[ i ];
                if ( entry.starts_with( '%' ) )
                {
                    result += entry.substr( 1 );
                    continue;
                }
                auto res = result.insert( result.end(), alignment_boundaries[ i ], ' ' );
                std::copy( entry.begin(), entry.end(), res );
            }


            std::string_view entry = line[ N - 1 ];
            if ( entry.starts_with( '%' ) )
                entry.remove_prefix( 1 );
            result += entry;
            result += "\n";
        }
        return result;
    }

    // Pads the string/text to the left.
    //
    template<size_t N>
    inline static void pad( split_string<N>& vec, size_t left_pad = 1 )
    {
        for ( auto& line : vec )
        {
            if ( left_pad )
                line.insert( line.begin(), left_pad * tab_unit, ' ' );
        }
    }
    template<size_t N>
    inline static void pad( split_text<N>& vec, size_t left_pad = 1 )
    {
        for ( auto& line : vec )
            pad( line, left_pad );
    }
    inline static std::string pad( std::string str, size_t len = 1 )
    {
        if ( !str.empty() )
            str.insert( str.begin(), len * tab_unit, ' ' );
        for ( auto it = str.begin(); it != str.end(); )
        {
            if ( *it == '\n' && ( it + 1 ) != str.end() )
                it = str.insert( ++it, len * tab_unit, ' ' ) + len;
            else
                ++it;
        }
        return str;
    }

    // Transforms the naming convention of type and variables, converting
    // anonymous tags into empty strings.
    //
    inline static std::string transform_name( std::string str )
    {
        // If member operator:
        //
        if ( str.starts_with( "??" ) )
        {
            size_t n = str.find( "@@" );
            fassert( n != std::string::npos );
            std::string obj = transform_name( std::string{ str.begin() + 3, str.begin() + n } );
            switch ( str[2] )
            {
                case '0': return obj + "::construct_instance";
                case '1': return obj + "::destroy_instance";
                default:  unreachable();
            }
        }
        // If member function:
        //
        if ( size_t n = str.find( '@' ); n != std::string::npos )
        {
            // Reverse the list and form a valid name.
            //
            auto list = xstd::split_string<char, std::string>( str, '@' );
            str.clear();
            for ( auto&& item : std::views::reverse( list ) )
                str += transform_name( item ) + "::";
            str.erase( str.end() - 2, str.end() );
            return str;
        }

        // If it start's with an understore, strip it.
        //
        while ( !str.empty() && str[ 0 ] == '_' )
            str.erase( str.begin() );

        // Convert every Aa sequence into (_)aa
        //
        for ( auto it = str.begin(); it != str.end(); )
        {
            it = std::find_if( it, str.end(), [ ] ( char& c )
            {
                return isupper( c ) && islower( ( &c )[ 1 ] );
            } );
            if ( it == str.end() ) break;
            *it = tolower( *it );
            if ( it == str.begin() )
                it += 2;
            else
                it = str.insert( it, '_' ) + 3;
        }

        // Convert every aA sequence into a_a
        //
        for ( auto it = str.begin(); it != str.end(); )
        {
            it = std::find_if( it, str.end(), [ ] ( char& c )
            {
                return islower( c ) && isupper( ( &c )[ 1 ] );
            } );
            if ( it == str.end() ) break;
            ++it;
            *it = tolower( *it );
            it = str.insert( it, '_' ) + 2;
        }

        // Convert all to lowercase.
        //
        for ( auto& c : str )
            c = tolower( c );

        // Remove all instances of double '_'
        //
        for ( auto it = str.find( "__" ); it != std::string::npos; it = str.find( "__", it ) )
            str.erase( it, 1 );

        // If this is a reserved keyword, rename it.
        //
        if ( keyword_list.contains( str ) )
            str = "_" + str;
        return str;
    }

    // Splits type name into [namespace,          type].
    //                        "win::"/"win"  "ethread"
    inline static std::pair<std::string_view, std::string_view> split_namespace( std::string_view name, bool strip_semi = true )
    {
        auto i = name.rfind( "::" );
        if ( i == std::string::npos )
            return { { name.data(), 0 }, name };
        else
            return { { name.data(), strip_semi ? i : i + 2 }, { name.data() + i + 2, name.size() - i - 2 } };
    }

    // Gets the relative type name of [ndst] in relation to [nsrc], removing
    // unnecessary explicit namespace usage.
    //
    inline static std::string_view relative_name( std::string_view ndst, std::string_view nsrc )
    {
        // Get the namespace.
        //
        auto ns_src = split_namespace( nsrc, false ).first;
        auto [ns, name] = split_namespace( ndst, false );

        // Determine the overlapping region.
        //
        size_t ns_it = 0;
        while ( true )
        {
            // Find next namespace delimiter, break if above the size
            // of destination or if no more left.
            //
            auto next = ns.find( "::", ns_it );
            if ( next >= ns_src.size() )
                break;

            // If it does not match break, else set iterator.
            //
            if ( ns.substr( ns_it, next - ns_it ) != ns_src.substr( ns_it, next - ns_it ) )
                break;
            ns_it = next + 2;
        }

        // Since we know that [ns+n] and [name] are contigiously stored given that they are
        // string views of the original source, do a hack and simply capture the whole thing
        // after the matching part is eliminated.
        //
        const char* begin = ns.data() + ns_it;
        const char* end = &*name.end();
        return { begin, ( size_t ) ( end - begin ) };
    }

    // Same as above but returns a file path instead.
    //
    inline static std::string relative_path( std::string_view ndst, std::string_view nsrc )
    {
        std::string path;

        // Split the namespaces away from the names.
        //
        auto curdir = split_namespace( nsrc, false ).first;
        auto [dstdir, type] = split_namespace( ndst, false );

        // While base ns does not match, leave current directory.
        //
        while ( dstdir.size() < curdir.size() ||
                dstdir.substr( 0, curdir.size() ) != curdir )
        {
            path += "../";

            // Remove outer ns.
            //
            size_t i = curdir.find_last_of( ":", curdir.size() - 3 );
            curdir = curdir.substr( 0, i + 1 ); // works with npos since it'll be 0 :)
        }
        dstdir = dstdir.substr( curdir.size() );

        // Browse up to the namespace, add type name and return.
        //
        path.reserve( dstdir.size() );
        int counter = 0;
        for ( char c : dstdir )
        {
            if ( c == ':' )
            {
                if ( ++counter & 1 )
                    path += "/";
            }
            else
            {
                path += c;
            }
        }
        path += type;
        path += ".hpp";
        return path;
    }

    // Appends or increments the already existing "_vN" suffix in the name in
    // an attempt to make it unique.
    //
    static void increment_version( std::string& str )
    {
        if ( str.length() > 3 )
        {
            if ( str[ str.length() - 3 ] == '_' &&
                 str[ str.length() - 2 ] == 'v' )
            {
                str[ str.length() - 1 ]++;
                fassert( isdigit( str.back() ) );
                return;
            }
        }
        str += "_v0";
    }

    // Converts the given iterable container into string using the functor and returns
    // the string after comma exploding it.
    //
    template<typename T, typename F>
    static std::string explode( T&& container, F&& fn, std::string_view with = ", " )
    {
        std::string result;
        for ( auto& e : container )
        {
            auto&& r = fn( e );
            std::string_view str{ r };
            if( !str.empty() )
                result += str + with;
        }
        if ( !result.empty() ) result.erase( std::prev( result.end(), with.size() ), result.end() );
        return result;
    }

    // Sorts the strings by length and lexicographically.
    //
    static constexpr auto lexi_cmp = [ ] ( auto&& sa, auto&& sb ) noexcept -> bool
    {

        size_t na = sa.length();
        size_t nb = sb.length();

        if ( na < nb )       return true;
        else if ( na == nb ) return sa < sb;
        else                 return false;
    };

    // Sprintfs to a buffer.
    //
    template<typename... Tx>
    static std::string fmt( const char* fmt, Tx&&... args )
    {
        std::string buffer;
        buffer.resize( snprintf( nullptr, 0, fmt, args... ) );
        snprintf( buffer.data(), buffer.size() + 1, fmt, std::forward<Tx>( args )... );
        return buffer;
    }

    // Case insensitive string view operations.
    //
    template<typename T1 = std::string_view, typename T2 = std::string_view>
    static bool i_equals( T1&& _a, T2&& _b )
    {
        using C1 = std::decay_t<decltype( _a[ 0 ] )>;
        using C2 = std::decay_t<decltype( _b[ 0 ] )>;
        std::basic_string_view<C1> a = { std::forward<T1>( _a ) };
        std::basic_string_view<C2> b = { std::forward<T2>( _b ) };

        if ( a.length() != b.length() )
            return false;
        for ( size_t n = 0; n != a.length(); n++ )
            if ( tolower( a[ n ] ) != tolower( b[ n ] ) )
                return false;
        return true;
    }
    template<typename T1 = std::string_view, typename T2 = std::string_view>
    static bool i_starts_with( T1&& _a, T2&& _b )
    {
        using C1 = std::decay_t<decltype( _a[ 0 ] )>;
        using C2 = std::decay_t<decltype( _b[ 0 ] )>;
        std::basic_string_view<C1> a = { std::forward<T1>( _a ) };
        std::basic_string_view<C2> b = { std::forward<T2>( _b ) };

        if ( a.length() < b.length() )
            return false;
        a.remove_suffix( a.length() - b.length() );
        return i_equals( std::move( a ), std::move( b ) );
    }

    template<typename T1 = std::string_view, typename T2 = std::string_view>
    static bool i_ends_with( T1&& _a, T2&& _b )
    {
        using C1 = std::decay_t<decltype( _a[ 0 ] )>;
        using C2 = std::decay_t<decltype( _b[ 0 ] )>;
        std::basic_string_view<C1> a = { std::forward<T1>( _a ) };
        std::basic_string_view<C2> b = { std::forward<T2>( _b ) };

        if ( a.length() < b.length() )
            return false;
        a.remove_prefix( a.length() - b.length() );
        return i_equals( std::move( a ), std::move( b ) );
    }
};

static std::string operator+( const std::string& str, const std::string_view& view )
{
    return str + std::string{ view };
}
static std::string& operator+=( std::string& str, const std::string_view& view )
{
    return str += std::string{ view };
}
static std::string operator+( const std::string_view& view, const std::string& str )
{
    return std::string{ view } + str;
}
static std::string operator+( const std::string_view& view, const std::string_view& view2 )
{
    return std::string{ view } + std::string{ view2 };
}
static std::string operator+( const std::string_view& view, const char* str )
{
    return std::string{ view } + str;
}
static std::string operator+( const char* str, const std::string_view& view )
{
    return str + std::string{ view };
}
