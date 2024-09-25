#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_reply_header_t.hpp"

#include "magic/wdfprocmgmt_message_open_process_reply_t.start.hpp"
namespace wdf
{
    // [struct _WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfprocmgmt_message_open_process_reply_t                
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 struct wdf::wudfmessage_reply_header_t header;          //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                                  process_handle;  //{ +0x0008    +0x0008    +0x0008    } | .ProcessHandle
                                                                   
        SDK_MAGIC_PROPERTIES( "_WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY.$", 0x10, true, 0x5a7bc9c3bed3d416 );               
        SDK_FIXED_SIZE( wdfprocmgmt_message_open_process_reply_t, 0x10 );               
    };                                                             
};
#include "magic/wdfprocmgmt_message_open_process_reply_t.end.hpp"
SDK_VERIFY( struct wdf::wdfprocmgmt_message_open_process_reply_t, 0x10 );
