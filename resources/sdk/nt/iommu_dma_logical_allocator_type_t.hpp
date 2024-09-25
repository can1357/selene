#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE]
    //  Windows 11
    //
    enum class iommu_dma_logical_allocator_type_t : int32_t
    {                                                      
        none =  0x0,                                         // Windows 11
        buddy = 0x1,                                         // Windows 11
        max =   0x2,                                         // Windows 11
    };                                                     
};
