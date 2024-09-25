#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/priv_hive_hkey_cache_t.start.hpp"
namespace win
{
    // [class PrivHiveHKEYCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class priv_hive_hkey_cache_t 
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t c_elements;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cElements
                                 
        SDK_MAGIC_PROPERTIES( "PrivHiveHKEYCache.$", 0x18, true, 0x8dbc6ed685cf6c9f );           
        SDK_FIXED_SIZE( priv_hive_hkey_cache_t, 0x18 );           
    };                           
};
#include "magic/priv_hive_hkey_cache_t.end.hpp"
SDK_VERIFY( class win::priv_hive_hkey_cache_t, 0x18 );
