#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_setting_pair_t.start.hpp"
namespace wdf
{
    struct wdfusbinterface_t;

    // [struct _WDF_USB_INTERFACE_SETTING_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_setting_pair_t                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 struct wdf::wdfusbinterface_t* usb_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsbInterface
        _m01 uint8_t                        setting_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SettingIndex
                                                          
        SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SETTING_PAIR.$", 0x10, true, 0x66f909f7544bbc20 );              
        SDK_FIXED_SIZE( usb_interface_setting_pair_t, 0x10 );              
    };                                                    
};
#include "magic/usb_interface_setting_pair_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_setting_pair_t, 0x10 );
