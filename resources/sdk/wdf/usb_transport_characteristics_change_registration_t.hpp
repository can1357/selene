#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_transport_characteristics_t.hpp"

#include "magic/usb_transport_characteristics_change_registration_t.start.hpp"
namespace wdf
{
    struct usb_change_registration_handle_t;

    // [struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_transport_characteristics_change_registration_t                             
    {                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                 
        _m00 uint32_t                                      change_notification_input_flags;  //{ +0x0000    +0x0000    +0x0000    } | .ChangeNotificationInputFlags
        _m01 struct wdf::usb_change_registration_handle_t* handle;                           //{ +0x0004    +0x0004    +0x0004    } | .Handle
        _m02 struct wdf::usb_transport_characteristics_t   usb_transport_characteristics;    //{ +0x000c    +0x000c    +0x000c    } | .UsbTransportCharacteristics
                                                                                           
        SDK_MAGIC_PROPERTIES( "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION.$", 0x24, true, 0x7a4e18e773865018 );                                
        SDK_FIXED_SIZE( usb_transport_characteristics_change_registration_t, 0x24 );                                
    };                                                                                     
};
#include "magic/usb_transport_characteristics_change_registration_t.end.hpp"
SDK_VERIFY( struct wdf::usb_transport_characteristics_change_registration_t, 0x24 );
