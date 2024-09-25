#pragma once
#include <sdkgen/support_library.hpp>
#include "usbd_version_information_t.hpp"

#include "magic/usb_device_information_t.start.hpp"
namespace wdf
{
    // [struct _WDF_USB_DEVICE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_information_t                                          
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 uint32_t                               size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct wdf::usbd_version_information_t usbd_version_information;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UsbdVersionInformation
        _m02 uint32_t                               hcd_port_capabilities;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HcdPortCapabilities
        _m03 uint32_t                               traits;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Traits
                                                                             
        SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_INFORMATION.$", 0x14, true, 0x402f587fe63c0c37 );                         
        SDK_FIXED_SIZE( usb_device_information_t, 0x14 );                         
    };                                                                       
};
#include "magic/usb_device_information_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_information_t, 0x14 );
