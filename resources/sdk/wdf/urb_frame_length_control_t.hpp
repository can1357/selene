#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_frame_length_control_t.start.hpp"
namespace wdf
{
    // [struct _URB_FRAME_LENGTH_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_frame_length_control_t     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                
        _m00 struct wdf::urb_header_t hdr;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
                                          
        SDK_MAGIC_PROPERTIES( "_URB_FRAME_LENGTH_CONTROL.$", 0x18, true, 0x18777c66d8a2281 );    
        SDK_FIXED_SIZE( urb_frame_length_control_t, 0x18 );    
    };                                    
};
#include "magic/urb_frame_length_control_t.end.hpp"
SDK_VERIFY( struct wdf::urb_frame_length_control_t, 0x18 );
