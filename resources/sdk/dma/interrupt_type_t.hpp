#pragma once
#include <sdkgen/support_library.hpp>

namespace dma
{
    // [enum _DMA_INTERRUPT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_type_t : int32_t
    {                                    
        completion = 0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =      0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancelled =  0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
