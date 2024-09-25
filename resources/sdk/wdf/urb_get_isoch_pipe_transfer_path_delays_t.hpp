#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_get_isoch_pipe_transfer_path_delays_t.start.hpp"
namespace wdf
{
    // [struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_get_isoch_pipe_transfer_path_delays_t                                 
    {                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                           
        _m00 struct wdf::urb_header_t hdr;                                             //{ +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                    pipe_handle;                                     //{ +0x0018    +0x0018    +0x0018    } | .PipeHandle
        _m02 uint32_t                 maximum_send_path_delay_in_milli_seconds;        //{ +0x0020    +0x0020    +0x0020    } | .MaximumSendPathDelayInMilliSeconds
        _m03 uint32_t                 maximum_completion_path_delay_in_milli_seconds;  //{ +0x0024    +0x0024    +0x0024    } | .MaximumCompletionPathDelayInMilliSeconds
                                                                                     
        SDK_MAGIC_PROPERTIES( "_URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS.$", 0x28, true, 0x3158c485482fd03a );                                               
        SDK_FIXED_SIZE( urb_get_isoch_pipe_transfer_path_delays_t, 0x28 );                                               
    };                                                                               
};
#include "magic/urb_get_isoch_pipe_transfer_path_delays_t.end.hpp"
SDK_VERIFY( struct wdf::urb_get_isoch_pipe_transfer_path_delays_t, 0x28 );
