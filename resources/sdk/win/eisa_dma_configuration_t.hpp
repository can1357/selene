#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/configuration_byte0_t.hpp"
#include "../dma/configuration_byte1_t.hpp"

#include "magic/eisa_dma_configuration_t.start.hpp"
namespace win
{
    // [struct _EISA_DMA_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_dma_configuration_t                                
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                         
        _m00 struct dma::configuration_byte0_t configuration_byte0;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ConfigurationByte0
        _m01 struct dma::configuration_byte1_t configuration_byte1;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ConfigurationByte1
                                                                   
        SDK_NONVOL_PROPERTIES( "_EISA_DMA_CONFIGURATION.$", 0x2, true, 0x1f7b89f3a7959494 );                    
        SDK_FIXED_SIZE( eisa_dma_configuration_t, 0x2 );                    
    };                                                             
};
#include "magic/eisa_dma_configuration_t.end.hpp"
SDK_VERIFY( struct win::eisa_dma_configuration_t, 0x2 );
