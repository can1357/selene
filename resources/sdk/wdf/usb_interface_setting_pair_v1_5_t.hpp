#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_setting_pair_v1_5_t.start.hpp"
namespace wdf
{
    struct wdfusbinterface_t;

    // [struct _WDF_USB_INTERFACE_SETTING_PAIR_V1_5]
    // => Windows 10 v1607
    //
    struct usb_interface_setting_pair_v1_5_t              
    {                                                     
        // Windows 10 v1607                               
        //                                                
        _m00 struct wdf::wdfusbinterface_t* usb_interface;  //{ +0x0000    } | .UsbInterface
        _m01 uint8_t                        setting_index;  //{ +0x0008    } | .SettingIndex
                                                          
        SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SETTING_PAIR_V1_5.$", 0x0, false, 0x62fd05d28bd7cb06 );              
        SDK_FIXED_SIZE( usb_interface_setting_pair_v1_5_t, 0x10 );              
    };                                                    
};
#include "magic/usb_interface_setting_pair_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_setting_pair_v1_5_t, 0x10 );
