#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_dma_width_t.hpp"
#include "stor_dma_version_t.hpp"

namespace dma { struct adapter_t; }

#include "magic/raid_dma_adapter_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_DMA_ADAPTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_dma_adapter_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                               
        _m00 struct dma::adapter_t*              dma_adapter;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DmaAdapter
        _m01 uint32_t                            number_of_map_registers;  //{ +0x0008    +0x000c    +0x000c    +0x000c    } | .NumberOfMapRegisters
        _m02 void*                               map_register_base;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MapRegisterBase
        _m03 enum stor::port::stor_dma_width_t   width;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Width
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                               
        _m04 uint8_t                             dmar_compatible;          //{ +0x0008    +0x0008    +0x0008    } | .DmarCompatible
        _m05 enum stor::port::stor_dma_version_t dma_version;              //{ +0x001c    +0x001c    +0x001c    } | .DmaVersion
                                                                         
        SDK_MAGIC_PROPERTIES( "_RAID_DMA_ADAPTER.$", 0x20, true, 0x3d7fcea620640067 );                        
        SDK_FIXED_SIZE( raid_dma_adapter_t, 0x20 );                        
    };                                                                   
};
#include "magic/raid_dma_adapter_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_dma_adapter_t, 0x20 );
