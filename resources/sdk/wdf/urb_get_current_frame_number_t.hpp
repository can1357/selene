#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_get_current_frame_number_t.start.hpp"
namespace wdf
{
    // [struct _URB_GET_CURRENT_FRAME_NUMBER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_get_current_frame_number_t          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 struct wdf::urb_header_t hdr;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 uint32_t                 frame_number;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FrameNumber
                                                   
        SDK_MAGIC_PROPERTIES( "_URB_GET_CURRENT_FRAME_NUMBER.$", 0x20, true, 0x633bcb5ff1f9abe9 );             
        SDK_FIXED_SIZE( urb_get_current_frame_number_t, 0x20 );             
    };                                             
};
#include "magic/urb_get_current_frame_number_t.end.hpp"
SDK_VERIFY( struct wdf::urb_get_current_frame_number_t, 0x20 );
