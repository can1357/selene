#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "usbd_interface_information_t.hpp"

#include "magic/urb_select_interface_t.start.hpp"
namespace wdf
{
    // [struct _URB_SELECT_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_select_interface_t                                          
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                 
        _m00 struct wdf::urb_header_t                 hdr;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                                    configuration_handle;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ConfigurationHandle
        _m02 struct wdf::usbd_interface_information_t interface;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Interface
                                                                           
        SDK_MAGIC_PROPERTIES( "_URB_SELECT_INTERFACE.$", 0x50, true, 0x539f74313bbad969 );                     
        SDK_FIXED_SIZE( urb_select_interface_t, 0x50 );                     
    };                                                                     
};
#include "magic/urb_select_interface_t.end.hpp"
SDK_VERIFY( struct wdf::urb_select_interface_t, 0x50 );
