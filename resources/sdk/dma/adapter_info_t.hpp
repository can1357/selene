#pragma once
#include <sdkgen/support_library.hpp>
#include "adapter_info_v1_t.hpp"
#include "adapter_info_crashdump_t.hpp"

#include "magic/adapter_info_t.start.hpp"
namespace dma
{
    // [struct _DMA_ADAPTER_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct adapter_info_t                                   
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                  
        _m00 uint32_t                             version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct dma::adapter_info_v1_t        v1;         //{ +0x0004    +0x0004    +0x0004    +0x0008    +0x0004    } | .V1
                                                            
        // Windows 11                                       
        //                                                  
        _m02 struct dma::adapter_info_crashdump_t crashdump;  //{ +0x0008    } | .Crashdump
                                                            
        SDK_MAGIC_PROPERTIES( "_DMA_ADAPTER_INFO.$", 0x18, true, 0x2e2403b92157cb2d );          
        SDK_DYNAMIC_SIZE( adapter_info_t );                 
    };                                                      
};
#include "magic/adapter_info_t.end.hpp"
