#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _HW_DMA_RETURN]
    //  WDK 10
    //
    enum class hw_dma_return_t : int32_t
    {                                   
        async_return = 0x0,               // WDK 10
        sync_return =  0x1,               // WDK 10
    };                                  
};
