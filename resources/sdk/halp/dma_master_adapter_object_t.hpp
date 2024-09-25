#pragma once
#include <sdkgen/support_library.hpp>
#include "dma_adapter_object_t.hpp"

#include "magic/dma_master_adapter_object_t.start.hpp"
namespace halp
{
    // [struct _HALP_DMA_MASTER_ADAPTER_OBJECT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_master_adapter_object_t                                     
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                 
        _m00 struct halp::dma_adapter_object_t adapter_object;               //{ +0x0000    +0x0000    +0x0000    } | .AdapterObject
        _m01 nt::list_entry_t                  contiguous_adapter_queue;     //{ +0x0098    +0x00a0    +0x0098    } | .ContiguousAdapterQueue
        _m02 nt::list_entry_t                  scatter_adapter_queue;        //{ +0x00a8    +0x00b0    +0x00a8    } | .ScatterAdapterQueue
        _m03 uint32_t                          map_buffer_size;              //{ +0x00b8    +0x00c0    +0x00b8    } | .MapBufferSize
        _m04 int64_t                           map_buffer_physical_address;  //{ +0x00c0    +0x00c8    +0x00c0    } | .MapBufferPhysicalAddress
        _m05 uint32_t                          contiguous_page_count;        //{ +0x00c8    +0x00d0    +0x00c8    } | .ContiguousPageCount
        _m06 uint32_t                          contiguous_page_limit;        //{ +0x00cc    +0x00d4    +0x00cc    } | .ContiguousPageLimit
        _m07 uint32_t                          scatter_page_count;           //{ +0x00d0    +0x00d8    +0x00d0    } | .ScatterPageCount
        _m08 uint32_t                          scatter_page_limit;           //{ +0x00d4    +0x00dc    +0x00d4    } | .ScatterPageLimit
                                                                           
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_MASTER_ADAPTER_OBJECT.$", 0xd8, true, 0xe27f27158edf8ddb );                            
        SDK_DYNAMIC_SIZE( dma_master_adapter_object_t );                            
    };                                                                     
};
#include "magic/dma_master_adapter_object_t.end.hpp"
