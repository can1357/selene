#pragma once
#include <sdkgen/support_library.hpp>

namespace halp
{
    // [enum _HALP_DMA_MAP_BUFFER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_map_buffer_type_t : int32_t
    {                                         
        contiguous_map_buffer =     0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_contiguous_map_buffer = 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_map_buffer_type =   0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
