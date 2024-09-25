#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "kqueue_t.hpp"

namespace rtl { struct ums_context_t; }

#include "magic/ums_control_block_t.start.hpp"
namespace nt
{
    struct single_list_entry_t;

    // [struct _UMS_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct ums_control_block_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
        //                                                                 
        _m00 struct rtl::ums_context_t*      ums_context;                    //{ +0x0000    +0x0000    +0x0000    } | .UmsContext
        _m01 struct nt::single_list_entry_t* completion_list_entry;          //{ +0x0008    +0x0008    +0x0008    } | .CompletionListEntry
        _m02 struct nt::kevent_t*            completion_list_event;          //{ +0x0010    +0x0010    +0x0010    } | .CompletionListEvent
        _m03 uint32_t                        service_sequence_number;        //{ +0x0018    +0x0018    +0x0018    } | .ServiceSequenceNumber
        _m04 struct nt::kqueue_t             ums_queue;                      //{ +0x0020    +0x0020    +0x0020    } | .UmsQueue
        _m05 nt::list_entry_t                queue_entry;                    //{ +0x0060    +0x0060    +0x0060    } | .QueueEntry
        _m06 struct rtl::ums_context_t*      yielding_ums_context;           //{ +0x0070    +0x0070    +0x0070    } | .YieldingUmsContext
        _m07 void*                           yielding_param;                 //{ +0x0078    +0x0078    +0x0078    } | .YieldingParam
        _m08 void*                           ums_teb;                        //{ +0x0080    +0x0080    +0x0080    } | .UmsTeb
        _m09 struct nt::kqueue_t*            ums_associated_queue;           //{ +0x0020    +0x0020    +0x0020    } | .UmsAssociatedQueue
        _m10 nt::list_entry_t*               ums_queue_list_entry;           //{ +0x0028    +0x0028    +0x0028    } | .UmsQueueListEntry
        _m11 struct nt::kevent_t             ums_wait_event;                 //{ +0x0030    +0x0030    +0x0030    } | .UmsWaitEvent
        _m12 void*                           staging_area;                   //{ +0x0048    +0x0048    +0x0048    } | .StagingArea
        _m13 uint1_t                         ums_primary_delivered_context;  //{ +0x0050@0  +0x0050@0  +0x0050@0  } | .UmsPrimaryDeliveredContext
        _m14 uint1_t                         ums_associated_queue_used;      //{ +0x0050@1  +0x0050@1  +0x0050@1  } | .UmsAssociatedQueueUsed
        _m15 uint1_t                         ums_thread_parked;              //{ +0x0050@2  +0x0050@2  +0x0050@2  } | .UmsThreadParked
        _m16 uint32_t                        ums_flags;                      //{ +0x0050    +0x0050    +0x0050    } | .UmsFlags
                                                                           
        // Windows 10 v1607                                                
        //                                                                 
        _m17 uint16_t                        teb_selector;                   //{ +0x0088    } | .TebSelector
                                                                           
        SDK_MAGIC_PROPERTIES( "_UMS_CONTROL_BLOCK.$", 0x88, true, 0x9abd3c54c8b80988 );                              
        SDK_DYNAMIC_SIZE( ums_control_block_t );                              
    };                                                                     
};
#include "magic/ums_control_block_t.end.hpp"
