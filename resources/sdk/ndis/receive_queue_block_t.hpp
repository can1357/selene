#pragma once
#include <sdkgen/support_library.hpp>
#include "receive_queue_pnp_state_t.hpp"
#include "receive_queue_parameters_t.hpp"
#include "receive_queue_operational_state_t.hpp"

#include "magic/receive_queue_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct miniport_block_t;
    struct shared_memory_parameters_t;

    // [struct _NDIS_RECEIVE_QUEUE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_queue_block_t                                                         
    {                                                                                    
        using allocate_shared_memory_handler_t = sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*;                               
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                               
        _m00 nt::list_entry_t                             adapter_link;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterLink
        _m01 nt::list_entry_t                             open_link;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpenLink
        _m02 nt::list_entry_t                             filter_list;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FilterList
        _m03 uint32_t                                     queue_id;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QueueId
        _m04 enum ndis::receive_queue_pnp_state_t         queue_pn_p_state;                //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .QueuePnPState
        _m05 enum ndis::receive_queue_operational_state_t queue_state;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .QueueState
        _m06 struct ndis::miniport_block_t*               miniport;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Miniport
        _m07 struct ndis::open_block_t*                   open;                            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Open
        _m08 int32_t                                      reference;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Reference
        _m09 uint32_t                                     num_filters;                     //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .NumFilters
        _m10 nt::list_entry_t                             shared_memory_list;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SharedMemoryList
        _m11 allocate_shared_memory_handler_t             allocate_shared_memory_handler;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AllocateSharedMemoryHandler
        _m12 sdk::function<void(void*, void*)>*           free_shared_memory_handler;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .FreeSharedMemoryHandler
        _m13 sdk::array<uint8_t, 6>                       mac_address;                     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .MacAddress
        _m14 struct ndis::receive_queue_parameters_t      queue_parameters;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .QueueParameters
                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_QUEUE_BLOCK.$", 0x4c8, true, 0x18dc3dea701be701 );                               
        SDK_FIXED_SIZE( receive_queue_block_t, 0x4c8 );                                  
    };                                                                                   
};
#include "magic/receive_queue_block_t.end.hpp"
SDK_VERIFY( struct ndis::receive_queue_block_t, 0x4c8 );
