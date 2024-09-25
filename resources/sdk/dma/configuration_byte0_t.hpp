#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/configuration_byte0_t.start.hpp"
namespace dma
{
    // [struct _DMA_CONFIGURATION_BYTE0]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct configuration_byte0_t  
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint3_t channel;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Channel
        _m01 uint1_t shared;        //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Shared
        _m02 uint1_t more_entries;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .MoreEntries
                                  
        SDK_NONVOL_PROPERTIES( "_DMA_CONFIGURATION_BYTE0.$", 0x1, true, 0xa14bafe64406c01a );             
        SDK_FIXED_SIZE( configuration_byte0_t, 0x1 );             
    };                            
};
#include "magic/configuration_byte0_t.end.hpp"
SDK_VERIFY( struct dma::configuration_byte0_t, 0x1 );
