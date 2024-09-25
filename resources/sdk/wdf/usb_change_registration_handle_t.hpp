#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct USB_CHANGE_REGISTRATION_HANDLE__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_change_registration_handle_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "USB_CHANGE_REGISTRATION_HANDLE__.$", 0x4, true, 0xeba10bdf6bfac10b );
        SDK_FIXED_SIZE( usb_change_registration_handle_t, 0x4 );
    };                                     
};
SDK_VERIFY( struct wdf::usb_change_registration_handle_t, 0x4 );
