#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_reply_header_t.hpp"

#include "magic/wdfprocmgmt_message_query_process_reply_t.start.hpp"
namespace wdf
{
    // [struct _WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfprocmgmt_message_query_process_reply_t                 
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                           
        _m00 struct wdf::wudfmessage_reply_header_t header;            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                               process_timeout;   //{ +0x0004    +0x0004    +0x0004    } | .ProcessTimeout
        _m02 uint32_t                               debug_mode_flags;  //{ +0x0008    +0x0008    +0x0008    } | .DebugModeFlags
                                                                     
        SDK_MAGIC_PROPERTIES( "_WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY.$", 0xc, true, 0x7ec4d611b5dd891d );                 
        SDK_FIXED_SIZE( wdfprocmgmt_message_query_process_reply_t, 0xc );                 
    };                                                               
};
#include "magic/wdfprocmgmt_message_query_process_reply_t.end.hpp"
SDK_VERIFY( struct wdf::wdfprocmgmt_message_query_process_reply_t, 0xc );
