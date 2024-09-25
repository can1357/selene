#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_worker_numanode_switch_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_WORKER_NUMANODE_SWITCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_worker_numanode_switch_t                        
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                          
        _m00 struct win::system_trace_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             pool_id;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PoolId
        _m02 uint32_t                          current_node;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentNode
        _m03 uint32_t                          next_node;             //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .NextNode
        _m04 uint16_t                          current_group;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CurrentGroup
        _m05 uint16_t                          next_group;            //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .NextGroup
        _m06 uint32_t                          current_worker_count;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CurrentWorkerCount
        _m07 uint32_t                          next_worker_count;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NextWorkerCount
                                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.$", 0x40, true, 0x9be5d9ea92d7baf8 );                     
        SDK_FIXED_SIZE( tp_event_worker_numanode_switch_t, 0x40 );                     
    };                                                              
};
#include "magic/tp_event_worker_numanode_switch_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_worker_numanode_switch_t, 0x40 );
