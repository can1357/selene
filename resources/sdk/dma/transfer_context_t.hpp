#pragma once
#include <sdkgen/support_library.hpp>
#include "transfer_context_v1_t.hpp"

#include "magic/transfer_context_t.start.hpp"
namespace dma
{
    // [struct _DMA_TRANSFER_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transfer_context_t                          
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                             
        _m00 uint32_t                          version;  //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct dma::transfer_context_v1_t v1;       //{ +0x0008    +0x0008    +0x0008    } | .V1
                                                       
        SDK_MAGIC_PROPERTIES( "_DMA_TRANSFER_CONTEXT.$", 0x60, true, 0x905a8b796a4ddad9 );        
        SDK_FIXED_SIZE( transfer_context_t, 0x60 );        
    };                                                 
};
#include "magic/transfer_context_t.end.hpp"
SDK_VERIFY( struct dma::transfer_context_t, 0x60 );
