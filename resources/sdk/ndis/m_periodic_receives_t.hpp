#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"
#include "m_periodic_receive_state_t.hpp"

#include "magic/m_periodic_receives_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;
    struct net_buffer_list_t;

    // [struct _NDIS_M_PERIODIC_RECEIVES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct m_periodic_receives_t                                       
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                             
        _m00 struct ndis::miniport_block_t*        next_miniport_block;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextMiniportBlock
        _m01 enum ndis::m_periodic_receive_state_t state;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .State
        _m02 uint64_t                              spin_lock;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SpinLock
        _m03 void*                                 lock_thread;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LockThread
        _m04 int32_t                               num_m_queued_nbls;    //{ +0x0024    +0x0020    +0x0020    +0x0020    } | .NumMQueuedNbls
        _m05 int32_t                               num_nbls_dequeued;    //{ +0x0028    +0x0024    +0x0024    +0x0024    } | .NumNblsDequeued
        _m06 struct ndis::net_buffer_list_t*       queued_head;          //{ +0x0030    +0x0028    +0x0028    +0x0028    } | .QueuedHead
        _m07 struct ndis::net_buffer_list_t*       queued_tail;          //{ +0x0038    +0x0030    +0x0030    +0x0030    } | .QueuedTail
        _m08 uint32_t                              bound_to_ip;          //{ +0x0040    +0x0038    +0x0038    +0x0038    } | .BoundToIP
        _m09 uint8_t                               paused;               //{ +0x0044    +0x003c    +0x003c    +0x003c    } | .Paused
        _m10 int32_t                               nbls_allocated;       //{ +0x0048    +0x0040    +0x0040    +0x0040    } | .NblsAllocated
        _m11 uint32_t                              tracking_queued;      //{ +0x004c    +0x0044    +0x0044    +0x0044    } | .TrackingQueued
        _m12 uint32_t                              tracking_dequeued;    //{ +0x0050    +0x0048    +0x0048    +0x0048    } | .TrackingDequeued
        _m13 uint32_t                              tracking_resources;   //{ +0x0054    +0x004c    +0x004c    +0x004c    } | .TrackingResources
        _m14 uint32_t                              tracking_pending;     //{ +0x0058    +0x0050    +0x0050    +0x0050    } | .TrackingPending
        _m15 uint32_t                              tracking_indicated;   //{ +0x005c    +0x0054    +0x0054    +0x0054    } | .TrackingIndicated
        _m16 uint32_t                              tracking_emptied;     //{ +0x0060    +0x0058    +0x0058    +0x0058    } | .TrackingEmptied
        _m17 struct nt::work_queue_item_t          work_item;            //{ +0x0068    +0x0060    +0x0060    +0x0060    } | .WorkItem
        _m18 int32_t                               work_item_queued;     //{ +0x0088    +0x0080    +0x0080    +0x0080    } | .WorkItemQueued
                                                                       
        // Windows 10 v1607                                            
        //                                                             
        _m19 uint32_t                              lock_dbg;             //{ +0x0020    } | .LockDbg
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_M_PERIODIC_RECEIVES.$", 0x88, true, 0xd5576cacf0e2d4ac );                    
        SDK_DYNAMIC_SIZE( m_periodic_receives_t );                     
    };                                                                 
};
#include "magic/m_periodic_receives_t.end.hpp"
