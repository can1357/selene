#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfdevice_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFDEVICE_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfdevice_triage_info_t     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t device_init_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInitSize
        _m01 uint32_t device_driver;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceDriver
                                       
        SDK_MAGIC_PROPERTIES( "_WDFDEVICE_TRIAGE_INFO.$", 0x8, true, 0xbf9932e72ce73a63 );                 
        SDK_FIXED_SIZE( wdfdevice_triage_info_t, 0x8 );                 
    };                                 
};
#include "magic/wdfdevice_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfdevice_triage_info_t, 0x8 );
