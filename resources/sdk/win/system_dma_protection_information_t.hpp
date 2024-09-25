#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dma_protection_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DMA_PROTECTION_INFORMATION]
    // => Windows 10 v1607
    //
    struct system_dma_protection_information_t 
    {                                          
        // Windows 10 v1607                          
        //                                     
        _m00 uint8_t dma_protections_available;  //{ +0x0000    } | .DmaProtectionsAvailable
        _m01 uint8_t dma_protections_in_use;     //{ +0x0001    } | .DmaProtectionsInUse
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DMA_PROTECTION_INFORMATION.$", 0x0, false, 0x3dcc39515dd79d6c );                          
        SDK_FIXED_SIZE( system_dma_protection_information_t, 0x2 );                          
    };                                         
};
#include "magic/system_dma_protection_information_t.end.hpp"
SDK_VERIFY( struct win::system_dma_protection_information_t, 0x2 );
