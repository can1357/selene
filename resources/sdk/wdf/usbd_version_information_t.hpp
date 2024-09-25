#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usbd_version_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_VERSION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_version_information_t       
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t usbdi_version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .USBDI_Version
        _m01 uint32_t supported_usb_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Supported_USB_Version
                                            
        SDK_MAGIC_PROPERTIES( "_USBD_VERSION_INFORMATION.$", 0x8, true, 0x6ba6fe932c5fed47 );                      
        SDK_FIXED_SIZE( usbd_version_information_t, 0x8 );                      
    };                                      
};
#include "magic/usbd_version_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_version_information_t, 0x8 );
