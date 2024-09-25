#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfdevice_triage_info_v1_13_t.start.hpp"
namespace wdf
{
    // [struct _WDFDEVICE_TRIAGE_INFO_V1_13]
    // => Windows 10 v1607
    //
    struct wdfdevice_triage_info_v1_13_t
    {                                   
        // Windows 10 v1607                 
        //                             
        _m00 uint32_t device_init_size;   //{ +0x0000    } | .DeviceInitSize
        _m01 uint32_t device_driver;      //{ +0x0004    } | .DeviceDriver
                                        
        SDK_MAGIC_PROPERTIES( "_WDFDEVICE_TRIAGE_INFO_V1_13.$", 0x0, false, 0xf80a7abd9fd770bf );                 
        SDK_FIXED_SIZE( wdfdevice_triage_info_v1_13_t, 0x8 );                 
    };                                  
};
#include "magic/wdfdevice_triage_info_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::wdfdevice_triage_info_v1_13_t, 0x8 );