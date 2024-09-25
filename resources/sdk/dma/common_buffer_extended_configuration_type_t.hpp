#pragma once
#include <sdkgen/support_library.hpp>

namespace dma
{
    // [enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE]
    //  Windows 11
    //
    enum class common_buffer_extended_configuration_type_t : int32_t
    {                                                               
        logical_address_limits =      0x0,                            // Windows 11
        sub_section =                 0x1,                            // Windows 11
        hardware_access_permissions = 0x2,                            // Windows 11
        max =                         0x3,                            // Windows 11
    };                                                              
};
