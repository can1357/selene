#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_HV_DMA_DOMAIN_CONFIG_ARCH]
    //  Windows 11
    //
    enum class hv_dma_domain_config_arch_t : int32_t
    {                                               
        arm64 = 0x0,                                  // Windows 11
        x64 =   0x1,                                  // Windows 11
    };                                              
};
