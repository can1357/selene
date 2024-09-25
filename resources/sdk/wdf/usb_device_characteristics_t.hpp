#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_characteristics_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CHARACTERISTICS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_characteristics_t                              
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                           
        _m00 uint32_t version;                                         //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t usb_device_characteristics_flags;                //{ +0x000c    +0x000c    +0x000c    } | .UsbDeviceCharacteristicsFlags
        _m02 uint32_t maximum_send_path_delay_in_milli_seconds;        //{ +0x0010    +0x0010    +0x0010    } | .MaximumSendPathDelayInMilliSeconds
        _m03 uint32_t maximum_completion_path_delay_in_milli_seconds;  //{ +0x0014    +0x0014    +0x0014    } | .MaximumCompletionPathDelayInMilliSeconds
                                                                     
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CHARACTERISTICS.$", 0x18, true, 0xb2e382ea294e1296 );                                               
        SDK_FIXED_SIZE( usb_device_characteristics_t, 0x18 );                                               
    };                                                               
};
#include "magic/usb_device_characteristics_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_characteristics_t, 0x18 );
