#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_set_frame_length_t.start.hpp"
namespace wdf
{
    // [struct _URB_SET_FRAME_LENGTH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_set_frame_length_t                        
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 struct wdf::urb_header_t hdr;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 int32_t                  frame_length_delta;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FrameLengthDelta
                                                         
        SDK_MAGIC_PROPERTIES( "_URB_SET_FRAME_LENGTH.$", 0x20, true, 0xeaa16da9e137018f );                   
        SDK_FIXED_SIZE( urb_set_frame_length_t, 0x20 );                   
    };                                                   
};
#include "magic/urb_set_frame_length_t.end.hpp"
SDK_VERIFY( struct wdf::urb_set_frame_length_t, 0x20 );
