#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kfloating_save_t.start.hpp"
namespace nt
{
    // [struct _KFLOATING_SAVE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kfloating_save_t 
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t dummy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Dummy
                            
        SDK_NONVOL_PROPERTIES( "_KFLOATING_SAVE.$", 0x4, true, 0x1c6152f9de4b58f5 );      
        SDK_FIXED_SIZE( kfloating_save_t, 0x4 );      
    };                      
};
#include "magic/kfloating_save_t.end.hpp"
SDK_VERIFY( struct nt::kfloating_save_t, 0x4 );
