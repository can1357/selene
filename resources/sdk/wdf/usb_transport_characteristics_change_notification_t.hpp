#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_transport_characteristics_t.hpp"

#include "magic/usb_transport_characteristics_change_notification_t.start.hpp"
namespace wdf
{
    struct usb_change_registration_handle_t;

    // [struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_transport_characteristics_change_notification_t                           
    {                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m00 struct wdf::usb_change_registration_handle_t* handle;                         //{ +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 struct wdf::usb_transport_characteristics_t   usb_transport_characteristics;  //{ +0x0008    +0x0008    +0x0008    } | .UsbTransportCharacteristics
                                                                                         
        SDK_MAGIC_PROPERTIES( "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION.$", 0x20, true, 0x78a09db0d5d95f41 );                              
        SDK_FIXED_SIZE( usb_transport_characteristics_change_notification_t, 0x20 );                              
    };                                                                                   
};
#include "magic/usb_transport_characteristics_change_notification_t.end.hpp"
SDK_VERIFY( struct wdf::usb_transport_characteristics_change_notification_t, 0x20 );
