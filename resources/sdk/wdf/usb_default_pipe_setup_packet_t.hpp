#pragma once
#include <sdkgen/support_library.hpp>
#include "bm_request_type_t.hpp"

#include "magic/usb_default_pipe_setup_packet_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEFAULT_PIPE_SETUP_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_default_pipe_setup_packet_t                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 union wdf::bm_request_type_t bm_request_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bmRequestType
        _m01 uint8_t                      b_request;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bRequest
        _m02 uint16_t                     w_length;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wLength
                                                          
        SDK_MAGIC_PROPERTIES( "_USB_DEFAULT_PIPE_SETUP_PACKET.$", 0x8, true, 0x2f651bd8ade7174e );                
        SDK_FIXED_SIZE( usb_default_pipe_setup_packet_t, 0x8 );                
    };                                                    
};
#include "magic/usb_default_pipe_setup_packet_t.end.hpp"
SDK_VERIFY( struct wdf::usb_default_pipe_setup_packet_t, 0x8 );
