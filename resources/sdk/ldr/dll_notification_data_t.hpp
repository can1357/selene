#pragma once
#include <sdkgen/support_library.hpp>
#include "dll_loaded_notification_data_t.hpp"
#include "dll_unloaded_notification_data_t.hpp"

#include "magic/dll_notification_data_t.start.hpp"
namespace ldr
{
    // [union _LDR_DLL_NOTIFICATION_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union dll_notification_data_t                                  
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                         
        _m00 struct ldr::dll_loaded_notification_data_t   loaded;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Loaded
        _m01 struct ldr::dll_unloaded_notification_data_t unloaded;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Unloaded
                                                                   
        SDK_NONVOL_PROPERTIES( "_LDR_DLL_NOTIFICATION_DATA.$", 0x28, true, 0xb3ea0c8d5e124f01 );         
        SDK_FIXED_SIZE( dll_notification_data_t, 0x28 );           
    };                                                             
};
#include "magic/dll_notification_data_t.end.hpp"
SDK_VERIFY( union ldr::dll_notification_data_t, 0x28 );
