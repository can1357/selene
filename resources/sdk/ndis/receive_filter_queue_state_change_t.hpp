#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/receive_filter_queue_state_change_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_queue_state_change_t     
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     queue_id;  //{ +0x0004    +0x0004    +0x0004    } | .QueueId
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE.$", 0x8, true, 0x108ac32e1dc8aabd );         
        SDK_FIXED_SIZE( receive_filter_queue_state_change_t, 0x8 );         
    };                                             
};
#include "magic/receive_filter_queue_state_change_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_queue_state_change_t, 0x8 );
