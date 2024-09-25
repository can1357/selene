#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_create_config_v1_13_t.start.hpp"
namespace wdf
{
    // [struct _WDF_USB_DEVICE_CREATE_CONFIG_V1_13]
    // => Windows 10 v1607
    //
    struct usb_device_create_config_v1_13_t        
    {                                              
        // Windows 10 v1607                             
        //                                         
        _m00 uint32_t size;                          //{ +0x0000    } | .Size
        _m01 uint32_t usbd_client_contract_version;  //{ +0x0004    } | .USBDClientContractVersion
                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_CREATE_CONFIG_V1_13.$", 0x0, false, 0x7a1dcc8bd7b560f2 );                             
        SDK_FIXED_SIZE( usb_device_create_config_v1_13_t, 0x8 );                             
    };                                             
};
#include "magic/usb_device_create_config_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_create_config_v1_13_t, 0x8 );
