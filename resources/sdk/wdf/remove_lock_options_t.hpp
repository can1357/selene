#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remove_lock_options_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REMOVE_LOCK_OPTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remove_lock_options_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                
        SDK_NONVOL_PROPERTIES( "_WDF_REMOVE_LOCK_OPTIONS.$", 0x8, true, 0x789ca7764c49d082 );      
        SDK_FIXED_SIZE( remove_lock_options_t, 0x8 );      
    };                          
};
#include "magic/remove_lock_options_t.end.hpp"
SDK_VERIFY( struct wdf::remove_lock_options_t, 0x8 );
