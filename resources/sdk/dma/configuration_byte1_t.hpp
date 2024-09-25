#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/configuration_byte1_t.start.hpp"
namespace dma
{
    // [struct _DMA_CONFIGURATION_BYTE1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct configuration_byte1_t   
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint2_t transfer_size;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TransferSize
        _m01 uint2_t timing;         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Timing
                                   
        SDK_NONVOL_PROPERTIES( "_DMA_CONFIGURATION_BYTE1.$", 0x1, true, 0x2b468d6362a84cb1 );              
        SDK_FIXED_SIZE( configuration_byte1_t, 0x1 );              
    };                             
};
#include "magic/configuration_byte1_t.end.hpp"
SDK_VERIFY( struct dma::configuration_byte1_t, 0x1 );
