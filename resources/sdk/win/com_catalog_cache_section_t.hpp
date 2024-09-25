#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_catalog_cache_section_t.start.hpp"
namespace win
{
    // [struct COM_CATALOG_CACHE_SECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_catalog_cache_section_t                         
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                     
        _m00 volatile int64_t cache_ticks;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheTicks
        _m01 volatile int64_t com_plus_catalog_ver;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComPlusCatalogVer
        _m02 volatile int64_t win_rt_activation_store_sequence;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WinRTActivationStoreSequence
                                                               
        SDK_MAGIC_PROPERTIES( "COM_CATALOG_CACHE_SECTION.$", 0x18, true, 0x9ba7f0a878c51d30 );                                 
        SDK_FIXED_SIZE( com_catalog_cache_section_t, 0x18 );                                 
    };                                                         
};
#include "magic/com_catalog_cache_section_t.end.hpp"
SDK_VERIFY( struct win::com_catalog_cache_section_t, 0x18 );
