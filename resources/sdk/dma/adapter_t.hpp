#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_t.start.hpp"
namespace dma
{
    struct operations_t;

    // [struct _DMA_ADAPTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adapter_t                                  
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 uint16_t                  version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                  size;            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct dma::operations_t* dma_operations;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DmaOperations
                                                      
        SDK_NONVOL_PROPERTIES( "_DMA_ADAPTER.$", 0x10, true, 0xabefc009f2be247b );               
        SDK_FIXED_SIZE( adapter_t, 0x10 );               
    };                                                
};
#include "magic/adapter_t.end.hpp"
SDK_VERIFY( struct dma::adapter_t, 0x10 );
