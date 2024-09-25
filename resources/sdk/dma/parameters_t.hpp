#pragma once
#include <sdkgen/support_library.hpp>

namespace dma
{
    // [struct __DMA_PARAMETERS]
    // => WDK 10
    //
    struct parameters_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "__DMA_PARAMETERS.$", 0x0, false, 0x27329901b465e3db );
        SDK_FIXED_SIZE( parameters_t, 0x0 );
    };                 
};
SDK_VERIFY( struct dma::parameters_t, 0x0 );
