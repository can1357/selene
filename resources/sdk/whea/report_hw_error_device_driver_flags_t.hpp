#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_hw_error_device_driver_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union report_hw_error_device_driver_flags_t
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t as_ulong;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                               
        SDK_NONVOL_PROPERTIES( "_WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS.$", 0x4, true, 0x5089b17abf794521 );         
        SDK_FIXED_SIZE( report_hw_error_device_driver_flags_t, 0x4 );         
    };                                         
};
#include "magic/report_hw_error_device_driver_flags_t.end.hpp"
SDK_VERIFY( union whea::report_hw_error_device_driver_flags_t, 0x4 );
