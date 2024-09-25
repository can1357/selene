#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_wmi_regcontrol_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_WMI_REGCONTROL_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_wmi_regcontrol_args_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    device_object;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceObject
        _m01 uint32_t action;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Action
        _m02 uint32_t result;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .result
                                     
        SDK_MAGIC_PROPERTIES( "_STOR_WMI_REGCONTROL_ARGS.$", 0x10, true, 0x31d16421dd4d7d2b );              
        SDK_FIXED_SIZE( stor_wmi_regcontrol_args_t, 0x10 );              
    };                               
};
#include "magic/stor_wmi_regcontrol_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_wmi_regcontrol_args_t, 0x10 );
