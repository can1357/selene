#pragma once
#include <sdkgen/support_library.hpp>

namespace halp
{
    // [enum _HALP_DMA_TRANSLATION_TYPE]
    //  Windows 11
    //
    enum class dma_translation_type_t : int32_t
    {                                          
        passthrough =        0x0,                // Windows 11
        safe_passthrough =   0x1,                // Windows 11
        hybrid_passthrough = 0x2,                // Windows 11
        translate =          0x3,                // Windows 11
        max =                0x4,                // Windows 11
    };                                         
};
