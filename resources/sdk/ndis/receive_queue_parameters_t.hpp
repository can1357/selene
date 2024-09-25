#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "receive_queue_type_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "if_counted_string_lh_t.hpp"

#include "magic/receive_queue_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_QUEUE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_queue_parameters_t                                           
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                      
        _m00 struct ndis::object_header_t        header;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            flags;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::receive_queue_type_t     queue_type;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueType
        _m03 uint32_t                            queue_id;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .QueueId
        _m04 uint32_t                            queue_group_id;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueueGroupId
        _m05 struct nt::group_affinity_t         processor_affinity;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessorAffinity
        _m06 uint32_t                            num_suggested_receive_buffers;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumSuggestedReceiveBuffers
        _m07 uint32_t                            msix_table_entry;                //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MSIXTableEntry
        _m08 uint32_t                            lookahead_size;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LookaheadSize
        _m09 struct ndis::if_counted_string_lh_t vm_name;                         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .VmName
        _m10 struct ndis::if_counted_string_lh_t queue_name;                      //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .QueueName
        _m11 uint32_t                            port_id;                         //{ +0x043c    +0x043c    +0x043c    +0x043c    } | .PortId
        _m12 uint32_t                            interrupt_coalescing_domain_id;  //{ +0x0440    +0x0440    +0x0440    +0x0440    } | .InterruptCoalescingDomainId
        _m13 uint32_t                            qos_sq_id;                       //{ +0x0444    +0x0444    +0x0444    +0x0444    } | .QosSqId
                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_QUEUE_PARAMETERS.$", 0x448, true, 0xbfc1c09c323fbeb7 );                               
        SDK_FIXED_SIZE( receive_queue_parameters_t, 0x448 );                               
    };                                                                          
};
#include "magic/receive_queue_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_queue_parameters_t, 0x448 );
