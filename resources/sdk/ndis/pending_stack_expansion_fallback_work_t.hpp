#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pending_stack_expansion_fallback_work_t.start.hpp"
namespace ndis
{
    struct oid_request_t;
    struct net_buffer_list_t;
    struct status_indication_t;
    struct net_device_pnp_event_t;
    struct net_pnp_event_notification_t;

    // [struct _PENDING_STACK_EXPANSION_FALLBACK_WORK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pending_stack_expansion_fallback_work_t                                      
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                              
        _m00 uint8_t                                    issue_oid_request;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IssueOidRequest
        _m01 uint8_t                                    complete_oid_request;             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .CompleteOidRequest
        _m02 struct ndis::oid_request_t*                direct_oid_requests_to_complete;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DirectOidRequestsToComplete
        _m03 struct ndis::status_indication_t*          status_indications;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StatusIndications
        _m04 struct ndis::net_pnp_event_notification_t* net_pn_p_events;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NetPnPEvents
        _m05 struct ndis::net_device_pnp_event_t*       device_pn_p_events;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DevicePnPEvents
        _m06 struct ndis::net_buffer_list_t*            sent_nbls_to_complete;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SentNblsToComplete
        _m07 struct ndis::net_buffer_list_t*            received_nbls_to_complete;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReceivedNblsToComplete
                                                                                        
        SDK_MAGIC_PROPERTIES( "_PENDING_STACK_EXPANSION_FALLBACK_WORK.$", 0x38, true, 0xf8682fc6ecf5c379 );                                
        SDK_FIXED_SIZE( pending_stack_expansion_fallback_work_t, 0x38 );                                
    };                                                                                  
};
#include "magic/pending_stack_expansion_fallback_work_t.end.hpp"
SDK_VERIFY( struct ndis::pending_stack_expansion_fallback_work_t, 0x38 );
