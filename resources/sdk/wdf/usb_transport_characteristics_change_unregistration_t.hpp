#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_transport_characteristics_change_unregistration_t.start.hpp"
namespace wdf
{
    struct usb_change_registration_handle_t;

    // [struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_UNREGISTRATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_transport_characteristics_change_unregistration_t  
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                        
        _m00 struct wdf::usb_change_registration_handle_t* handle;  //{ +0x0000    +0x0000    +0x0000    } | .Handle
                                                                  
        SDK_MAGIC_PROPERTIES( "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_UNREGISTRATION.$", 0x8, true, 0xf24dc63b7241c15d );       
        SDK_FIXED_SIZE( usb_transport_characteristics_change_unregistration_t, 0x8 );       
    };                                                            
};
#include "magic/usb_transport_characteristics_change_unregistration_t.end.hpp"
SDK_VERIFY( struct wdf::usb_transport_characteristics_change_unregistration_t, 0x8 );
