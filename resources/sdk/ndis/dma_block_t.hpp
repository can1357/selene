#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/dma_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DMA_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_block_t                                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                             
        _m00 void*               map_register_base;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MapRegisterBase
        _m01 struct nt::kevent_t allocation_event;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationEvent
        _m02 void*               system_adapter_object;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemAdapterObject
        _m03 void*               miniport;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Miniport
        _m04 uint8_t             in_progress;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InProgress
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_DMA_BLOCK.$", 0x38, true, 0x9f00181cc8f71d77 );                      
        SDK_FIXED_SIZE( dma_block_t, 0x38 );                      
    };                                                 
};
#include "magic/dma_block_t.end.hpp"
SDK_VERIFY( struct ndis::dma_block_t, 0x38 );
