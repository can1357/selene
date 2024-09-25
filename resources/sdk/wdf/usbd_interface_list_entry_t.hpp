#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usbd_interface_list_entry_t.start.hpp"
namespace wdf
{
    struct usb_interface_descriptor_t;
    struct usbd_interface_information_t;

    // [struct _USBD_INTERFACE_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_interface_list_entry_t                                      
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m00 struct wdf::usb_interface_descriptor_t*   interface_descriptor;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceDescriptor
        _m01 struct wdf::usbd_interface_information_t* interface;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Interface
                                                                            
        SDK_MAGIC_PROPERTIES( "_USBD_INTERFACE_LIST_ENTRY.$", 0x10, true, 0xd42bdcddd62f3852 );                     
        SDK_FIXED_SIZE( usbd_interface_list_entry_t, 0x10 );                     
    };                                                                      
};
#include "magic/usbd_interface_list_entry_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_interface_list_entry_t, 0x10 );
