#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "receive_queue_operational_state_t.hpp"

#include "magic/receive_queue_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_QUEUE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_queue_state_t                                      
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                            
        _m00 struct ndis::object_header_t                 header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                     flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                     queue_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueId
        _m03 enum ndis::receive_queue_operational_state_t queue_state;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .QueueState
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_QUEUE_STATE.$", 0x10, true, 0xd4c993a36435b86e );            
        SDK_FIXED_SIZE( receive_queue_state_t, 0x10 );                
    };                                                                
};
#include "magic/receive_queue_state_t.end.hpp"
SDK_VERIFY( struct ndis::receive_queue_state_t, 0x10 );
