#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDmaCompletionType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_completion_type_t : int32_t
    {                                         
        full =    0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        partial = 0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abort =   0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
