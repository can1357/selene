#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "usbd_interface_information_t.hpp"

#include "magic/urb_select_configuration_t.start.hpp"
namespace wdf
{
    struct usb_configuration_descriptor_t;

    // [struct _URB_SELECT_CONFIGURATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_select_configuration_t                                             
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                        
        _m00 struct wdf::urb_header_t                    hdr;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 struct wdf::usb_configuration_descriptor_t* configuration_descriptor;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ConfigurationDescriptor
        _m02 void*                                       configuration_handle;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ConfigurationHandle
        _m03 struct wdf::usbd_interface_information_t    interface;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Interface
                                                                                  
        SDK_MAGIC_PROPERTIES( "_URB_SELECT_CONFIGURATION.$", 0x58, true, 0xa1b29cfc4c5f1e45 );                         
        SDK_FIXED_SIZE( urb_select_configuration_t, 0x58 );                         
    };                                                                            
};
#include "magic/urb_select_configuration_t.end.hpp"
SDK_VERIFY( struct wdf::urb_select_configuration_t, 0x58 );
