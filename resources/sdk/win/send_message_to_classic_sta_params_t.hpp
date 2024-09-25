#pragma once
#include <sdkgen/support_library.hpp>
#include "send_message_to_classic_sta_reason_t.hpp"

#include "magic/send_message_to_classic_sta_params_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct SendMessageToClassicSTAParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct send_message_to_classic_sta_params_t                                       
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                            
        _m00 uint32_t                                       dw_thread_id_classic_sta;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwThreadIdClassicSTA
        _m01 enum win::send_message_to_classic_sta_reason_t reason;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .reason
        _m02 struct win::hwnd_t*                            h_wnd;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hWnd
        _m03 uint32_t                                       msg;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Msg
        _m04 uint64_t                                       w_param;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .wParam
        _m05 int64_t                                        l_param;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lParam
        _m06 void*                                          h_event_send_message_done;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hEventSendMessageDone
        _m07 sdk::hresult                                   hr_send_message;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hrSendMessage
                                                                                      
        SDK_MAGIC_PROPERTIES( "SendMessageToClassicSTAParams.$", 0x38, true, 0x984c4ea88bccb575 );                          
        SDK_FIXED_SIZE( send_message_to_classic_sta_params_t, 0x38 );                          
    };                                                                                
};
#include "magic/send_message_to_classic_sta_params_t.end.hpp"
SDK_VERIFY( struct win::send_message_to_classic_sta_params_t, 0x38 );
