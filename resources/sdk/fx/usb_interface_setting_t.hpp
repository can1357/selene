#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct usb_interface_descriptor_t; }

#include "magic/usb_interface_setting_t.start.hpp"
namespace fx
{
    // [struct FxUsbInterfaceSetting]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_setting_t                                        
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 struct wdf::usb_interface_descriptor_t* interface_descriptor;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceDescriptor
                                                                          
        SDK_MAGIC_PROPERTIES( "FxUsbInterfaceSetting.$", 0x8, true, 0xd91cd3e6507dd0b2 );                     
        SDK_FIXED_SIZE( usb_interface_setting_t, 0x8 );                     
    };                                                                    
};
#include "magic/usb_interface_setting_t.end.hpp"
SDK_VERIFY( struct fx::usb_interface_setting_t, 0x8 );
