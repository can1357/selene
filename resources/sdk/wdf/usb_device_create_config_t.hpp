#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_create_config_t.start.hpp"
namespace wdf
{
    // [struct _WDF_USB_DEVICE_CREATE_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_create_config_t              
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t usbd_client_contract_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .USBDClientContractVersion
                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_CREATE_CONFIG.$", 0x8, true, 0x25b4714c8955259a );                             
        SDK_FIXED_SIZE( usb_device_create_config_t, 0x8 );                             
    };                                             
};
#include "magic/usb_device_create_config_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_create_config_t, 0x8 );
