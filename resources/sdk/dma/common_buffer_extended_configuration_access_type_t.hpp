#pragma once
#include <sdkgen/support_library.hpp>

namespace dma
{
    // [enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE]
    //  Windows 11
    //
    enum class common_buffer_extended_configuration_access_type_t : int32_t
    {                                                                      
        read_only =  0x0,                                                    // Windows 11
        write_only = 0x1,                                                    // Windows 11
        read_write = 0x2,                                                    // Windows 11
        max =        0x3,                                                    // Windows 11
    };                                                                     
};
