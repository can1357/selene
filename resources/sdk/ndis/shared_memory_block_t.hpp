#pragma once
#include <sdkgen/support_library.hpp>
#include "shared_memory_parameters_t.hpp"

#include "magic/shared_memory_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct miniport_block_t;
    struct receive_queue_block_t;

    // [struct _NDIS_SHARED_MEMORY_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_memory_block_t                                                   
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                         
        _m00 nt::list_entry_t                        miniport_link;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MiniportLink
        _m01 nt::list_entry_t                        open_link;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpenLink
        _m02 nt::list_entry_t                        queue_link;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QueueLink
        _m03 uint32_t                                flags;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m04 struct ndis::miniport_block_t*          miniport;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Miniport
        _m05 struct ndis::open_block_t*              open;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Open
        _m06 struct ndis::receive_queue_block_t*     receive_queue;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReceiveQueue
        _m07 sdk::function<void(void*, void*)>*      free_shared_memory_handler;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FreeSharedMemoryHandler
        _m08 void*                                   shared_memory_handler_context;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SharedMemoryHandlerContext
        _m09 void*                                   provider_allocation_context;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ProviderAllocationContext
        _m10 int64_t                                 physical_address;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PhysicalAddress
        _m11 struct ndis::shared_memory_parameters_t shared_memory_parameters;       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SharedMemoryParameters
                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_SHARED_MEMORY_BLOCK.$", 0xb8, true, 0x16e338c8a1321d1c );                              
        SDK_FIXED_SIZE( shared_memory_block_t, 0xb8 );                              
    };                                                                             
};
#include "magic/shared_memory_block_t.end.hpp"
SDK_VERIFY( struct ndis::shared_memory_block_t, 0xb8 );
