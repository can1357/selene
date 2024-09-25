#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/usbc_device_configuration_interface_v1_t.start.hpp"
namespace wdf
{
    struct usb_device_descriptor_t;
    struct usbc_function_descriptor_t;
    struct usb_configuration_descriptor_t;

    // [struct _USBC_DEVICE_CONFIGURATION_INTERFACE_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbc_device_configuration_interface_v1_t              
    {                                                            
        using usbc_start_device_callback_t = sdk::function<int32_t(struct wdf::usb_device_descriptor_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbc_function_descriptor_t**, uint32_t*, struct nt::device_object_t*, struct nt::device_object_t*)>*;                      
        using usbc_pdo_enable_callback_t =   sdk::function<uint8_t(void*, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t)>*;                      
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                       
        _m00 uint16_t                      size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                      version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                         context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*   interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*   interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 usbc_start_device_callback_t  start_device_callback;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StartDeviceCallback
        _m06 usbc_pdo_enable_callback_t    pdo_enable_callback;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PdoEnableCallback
                                                                 
        SDK_MAGIC_PROPERTIES( "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.$", 0x68, true, 0x9d41fd41ade1a78f );                      
        SDK_FIXED_SIZE( usbc_device_configuration_interface_v1_t, 0x68 );                      
    };                                                           
};
#include "magic/usbc_device_configuration_interface_v1_t.end.hpp"
SDK_VERIFY( struct wdf::usbc_device_configuration_interface_v1_t, 0x68 );
