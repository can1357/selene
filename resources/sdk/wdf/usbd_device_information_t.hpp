#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_device_descriptor_t.hpp"

#include "magic/usbd_device_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_DEVICE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_device_information_t                                
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint32_t                            offset_next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetNext
        _m01 void*                               usbd_device_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UsbdDeviceHandle
        _m02 struct wdf::usb_device_descriptor_t device_descriptor;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceDescriptor
                                                                    
        SDK_MAGIC_PROPERTIES( "_USBD_DEVICE_INFORMATION.$", 0x28, true, 0x9b189b31b87efa02 );                   
        SDK_FIXED_SIZE( usbd_device_information_t, 0x28 );                   
    };                                                              
};
#include "magic/usbd_device_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_device_information_t, 0x28 );
