#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_win_rt_activation_store_catalog_t.start.hpp"
namespace win
{
    // [class CWinRTActivationStoreCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_win_rt_activation_store_catalog_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t c_refs;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cRefs
                                             
        SDK_MAGIC_PROPERTIES( "CWinRTActivationStoreCatalog.$", 0x20, true, 0xa33b6f250ef3f523 );       
        SDK_FIXED_SIZE( c_win_rt_activation_store_catalog_t, 0x20 );       
    };                                       
};
#include "magic/c_win_rt_activation_store_catalog_t.end.hpp"
SDK_VERIFY( class win::c_win_rt_activation_store_catalog_t, 0x20 );
