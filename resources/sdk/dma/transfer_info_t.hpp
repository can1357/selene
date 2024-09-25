#pragma once
#include <sdkgen/support_library.hpp>
#include "transfer_info_v1_t.hpp"
#include "transfer_info_v2_t.hpp"

#include "magic/transfer_info_t.start.hpp"
namespace dma
{
    // [struct _DMA_TRANSFER_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transfer_info_t                          
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 uint32_t                       version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct dma::transfer_info_v1_t v1;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .V1
                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m02 struct dma::transfer_info_v2_t v2;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .V2
                                                    
        SDK_NONVOL_PROPERTIES( "_DMA_TRANSFER_INFO.$", 0x14, true, 0xf32990963787a95c );        
        SDK_DYNAMIC_SIZE( transfer_info_t );        
    };                                              
};
#include "magic/transfer_info_t.end.hpp"
