#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_pipe_request_t.start.hpp"
namespace wdf
{
    // [struct _URB_PIPE_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_pipe_request_t                     
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 struct wdf::urb_header_t hdr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                    pipe_handle;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PipeHandle
                                                  
        SDK_MAGIC_PROPERTIES( "_URB_PIPE_REQUEST.$", 0x28, true, 0x40b1b7347ff763 );            
        SDK_FIXED_SIZE( urb_pipe_request_t, 0x28 );            
    };                                            
};
#include "magic/urb_pipe_request_t.end.hpp"
SDK_VERIFY( struct wdf::urb_pipe_request_t, 0x28 );
