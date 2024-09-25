#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dma_properties_t.start.hpp"
namespace pci
{
    // [union _PCI_DMA_PROPERTIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union dma_properties_t           
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint1_t  untrusted_port;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .UntrustedPort
        _m01 uint32_t as_ulong;        //{ +0x0000    +0x0000    +0x0000    } | .AsULONG
                                     
        SDK_MAGIC_PROPERTIES( "_PCI_DMA_PROPERTIES.$", 0x4, true, 0x9d6576bbfb90d9aa );               
        SDK_FIXED_SIZE( dma_properties_t, 0x4 );               
    };                               
};
#include "magic/dma_properties_t.end.hpp"
SDK_VERIFY( union pci::dma_properties_t, 0x4 );
