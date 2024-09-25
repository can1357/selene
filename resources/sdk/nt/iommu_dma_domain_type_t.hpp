#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _IOMMU_DMA_DOMAIN_TYPE]
    //  Windows 11
    //
    enum class iommu_dma_domain_type_t : int32_t
    {                                           
        translate =    0x0,                       // Windows 11
        pass_through = 0x1,                       // Windows 11
        unmanaged =    0x2,                       // Windows 11
        max =          0x3,                       // Windows 11
    };                                          
};
