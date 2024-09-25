#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace dma { struct adapter_t;             }
namespace nt  { struct device_object_t;       }
namespace nt  { struct kevent_t;              }
namespace nt  { struct map_register_entry_t;  }
namespace nt  { struct scatter_gather_list_t; }

#include "magic/sg_dma_block_t.start.hpp"
namespace ndis
{
    struct generic_object_t;
    struct miniport_block_t;

    // [struct _NDIS_SG_DMA_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sg_dma_block_t                                                                 
    {                                                                                     
        using process_sg_list_handler_t =              sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*;                                     
        using shared_mem_allocate_complete_handler_t = sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*;                                     
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                
        _m00 struct ndis::object_header_t            header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::miniport_block_t*          miniport;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Miniport
        _m02 void*                                   miniport_adapter_context;              //{ +0x0010    +0x0010    +0x0020    +0x0010    } | .MiniportAdapterContext
        _m03 struct dma::adapter_t*                  dma_adapter_object;                    //{ +0x0018    +0x0018    +0x0028    +0x0018    } | .DmaAdapterObject
        _m04 process_sg_list_handler_t               process_sg_list_handler;               //{ +0x0020    +0x0020    +0x0030    +0x0020    } | .ProcessSGListHandler
        _m05 shared_mem_allocate_complete_handler_t  shared_mem_allocate_complete_handler;  //{ +0x0028    +0x0028    +0x0038    +0x0028    } | .SharedMemAllocateCompleteHandler
        _m06 uint32_t                                flags;                                 //{ +0x0030    +0x0030    +0x0040    +0x0030    } | .Flags
        _m07 uint32_t                                maximum_physical_mapping;              //{ +0x0034    +0x0034    +0x0044    +0x0034    } | .MaximumPhysicalMapping
        _m08 uint32_t                                scatter_gather_list_size;              //{ +0x0038    +0x0038    +0x0048    +0x0038    } | .ScatterGatherListSize
        _m09 void*                                   sg_list_lookaside_list;                //{ +0x0040    +0x0040    +0x0050    +0x0040    } | .SGListLookasideList
        _m10 int32_t                                 dma_adapter_ref_count;                 //{ +0x0048    +0x0048    +0x0058    +0x0048    } | .DmaAdapterRefCount
        _m11 struct nt::kevent_t*                    dma_resources_released_event;          //{ +0x0050    +0x0050    +0x0060    +0x0050    } | .DmaResourcesReleasedEvent
        _m12 sdk::array<void*, 2>                    shared_memory_page;                    //{ +0x0058    +0x0058    +0x0068    +0x0058    } | .SharedMemoryPage
        _m13 sdk::array<uint32_t, 2>                 shared_memory_left;                    //{ +0x0068    +0x0068    +0x0078    +0x0068    } | .SharedMemoryLeft
        _m14 sdk::array<int64_t, 2>                  shared_memory_address;                 //{ +0x0070    +0x0070    +0x0080    +0x0070    } | .SharedMemoryAddress
        _m15 struct dma::adapter_t*                  saved_dma_adapter_object;              //{ +0x0080    +0x0080    +0x0090    +0x0080    } | .SavedDmaAdapterObject
        _m16 struct nt::map_register_entry_t*        map_registers;                         //{ +0x0088    +0x0088    +0x0098    +0x0088    } | .MapRegisters
        _m17 struct nt::kevent_t*                    allocation_event;                      //{ +0x0090    +0x0090    +0x00a0    +0x0090    } | .AllocationEvent
        _m18 uint16_t                                current_map_register;                  //{ +0x0098    +0x0098    +0x00a8    +0x0098    } | .CurrentMapRegister
        _m19 uint16_t                                base_map_registers_needed;             //{ +0x009a    +0x009a    +0x00aa    +0x009a    } | .BaseMapRegistersNeeded
        _m20 uint16_t                                sg_map_registers_needed;               //{ +0x009c    +0x009c    +0x00ac    +0x009c    } | .SGMapRegistersNeeded
                                                                                          
        // Windows 11                                                                     
        //                                                                                
        _m21 struct ndis::generic_object_t*          generic_object;                        //{ +0x0010    } | .GenericObject
        _m22 struct nt::device_object_t*             physical_device_object;                //{ +0x0018    } | .PhysicalDeviceObject
                                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_SG_DMA_BLOCK.$", 0xa0, true, 0x14848a6bbb33d535 );                                     
        SDK_DYNAMIC_SIZE( sg_dma_block_t );                                               
    };                                                                                    
};
#include "magic/sg_dma_block_t.end.hpp"
