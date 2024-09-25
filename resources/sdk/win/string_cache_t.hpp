#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/string_cache_t.start.hpp"
namespace win
{
    // [class StringCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class string_cache_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 const wchar_t volatile* psz_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pszValue
                                               
        SDK_MAGIC_PROPERTIES( "StringCache.$", 0x8, true, 0xba231ab0c71af4a );          
        SDK_FIXED_SIZE( string_cache_t, 0x8 );          
    };                                         
};
#include "magic/string_cache_t.end.hpp"
SDK_VERIFY( class win::string_cache_t, 0x8 );
