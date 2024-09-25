#pragma once
#include <sdkgen/support_library.hpp>
#include "aptkind_t.hpp"
#include "waitable_count_t.hpp"
#include "cached_call_event_t.hpp"
#include "../rpc/async_state_t.hpp"

namespace tp { struct wait_t; }

#include "magic/c_async_call_t.start.hpp"
namespace win
{
    struct wire_that_t;
    class c_async_call_t;
    class c_channel_object_t;

    // [class CAsyncCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_async_call_t                                                                               
    {                                                                                                  
        enum class u0_server_cancellation_state_t : int32_t                                            
        {                                                                                              
            dynamically_test_cancel = 0x0,                                                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            captured_cancelled =      0x1,                                                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            captured_not_cancelled =  0x2,                                                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                                                             
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                             
        _m00 class win::c_channel_object_t*                p_chnl_obj;                                   //{ +0x01b8    +0x02a0    +0x02a0    +0x02a0    } | ._pChnlObj
        _m01 struct rpc::async_state_t                     async_state;                                  //{ +0x01d0    +0x02b0    +0x02b0    +0x02b0    } | ._AsyncState
        _m02 class win::c_async_call_t*                    p_next;                                       //{ +0x0240    +0x0320    +0x0320    +0x0320    } | ._pNext
        _m03 void*                                         p_request_buffer;                             //{ +0x01c0    +0x0328    +0x0328    +0x0328    } | ._pRequestBuffer
        _m04 sdk::hresult                                  idempotent_i_rpc_receive_result;              //{ +0x0248    +0x0330    +0x0330    +0x0330    } | ._idempotentIRpcReceiveResult
        _m05 bool                                          cancelation_notifications_enabled;            //{ +0x0258    +0x0334    +0x0334    +0x0334    } | ._cancelationNotificationsEnabled
        _m06 class win::waitable_count_t                   c_server_cancelation_notifications_received;  //{ +0x025c    +0x0338    +0x0338    +0x0338    } | ._cServerCancelationNotificationsReceived
        _m07 void*                                         h_rpc_notification_call_cancel_event;         //{ +0x0260    +0x0340    +0x0340    +0x0340    } | ._hRpcNotificationCallCancelEvent
        _m08 struct tp::wait_t*                            p_rpc_notification_call_cancel_wait;          //{ +0x0268    +0x0348    +0x0348    +0x0348    } | ._pRpcNotificationCallCancelWait
        _m09 const class win::cached_call_event_t          event_rpc_notification;                       //{ +0x0278    +0x0360    +0x0360    +0x0360    } | ._eventRpcNotification
        _m10 volatile uint32_t                             c_client_rpc_free_deferrals;                  //{ +0x0288    +0x0370    +0x0370    +0x0370    } | ._cClientRpcFreeDeferrals
        _m11 u0_server_cancellation_state_t                server_cancellation_state;                    //{ +0x0298    +0x0380    +0x0380    +0x0380    } | ._serverCancellationState
                                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                             
        _m12 volatile uint64_t                             m_call_complete_tick_count;                   //{ +0x0358    +0x0358    +0x0358    } | .m_callCompleteTickCount
                                                                                                       
        // Windows 10 v1607                                                                            
        //                                                                                             
        _m13 const uint32_t                                l_apt;                                        //{ +0x01c8    } | ._lApt
        _m14 const enum win::aptkind_t                     client_apt_kind;                              //{ +0x01cc    } | ._clientAptKind
        _m15 struct win::wire_that_t*                      p_idempotent_i_rpc_receive_wire_that;         //{ +0x0250    } | ._pIdempotentIRpcReceiveWireThat
                                                                                                       
        SDK_MAGIC_PROPERTIES( "CAsyncCall.$", 0x398, true, 0x52ad6cfe1f009403 );                                            
        SDK_DYNAMIC_SIZE( c_async_call_t );                                                            
    };                                                                                                 
};
#include "magic/c_async_call_t.end.hpp"
