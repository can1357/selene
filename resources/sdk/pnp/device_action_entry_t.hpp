#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "device_action_request_t.hpp"
#include "device_action_request_argument_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct kevent_t;        }

#include "magic/device_action_entry_t.start.hpp"
namespace pnp
{
    // [struct _PNP_DEVICE_ACTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_action_entry_t                                  
    {                                                             
        using request_argument_t = sdk::variant<uint64_t, union pnp::device_action_request_argument_t>;                   
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 nt::list_entry_t                  list_entry;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::device_object_t*       device_object;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceObject
        _m02 enum pnp::device_action_request_t request_type;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RequestType
        _m03 uint8_t                           reordering_barrier;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ReorderingBarrier
        _m04 request_argument_t                request_argument;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestArgument
        _m05 struct nt::kevent_t*              completion_event;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CompletionEvent
        _m06 int32_t*                          completion_status;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CompletionStatus
        _m07 struct nt::guid_t                 activity_id;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ActivityId
                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m08 int32_t                           ref_count;           //{ +0x0048    +0x0048    +0x0048    } | .RefCount
        _m09 uint8_t                           dequeued;            //{ +0x004c    +0x004c    +0x004c    } | .Dequeued
        _m10 struct ex::push_lock_t            cancel_lock;         //{ +0x0050    +0x0050    +0x0050    } | .CancelLock
        _m11 uint8_t                           cancel_requested;    //{ +0x0058    +0x0058    +0x0058    } | .CancelRequested
                                                                  
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_ENTRY.$", 0x60, true, 0x6a1779ff18e6b83 );                   
        SDK_DYNAMIC_SIZE( device_action_entry_t );                   
    };                                                            
};
#include "magic/device_action_entry_t.end.hpp"
