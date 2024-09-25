#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_domain_creation_flags_t.start.hpp"
namespace nt
{
    // [union _IOMMU_DMA_DOMAIN_CREATION_FLAGS]
    // => Windows 11
    //
    union iommu_dma_domain_creation_flags_t
    {                                      
        // Windows 11              
        //                         
        _m00 uint64_t as_ulonglong;          //{ +0x0000    } | .AsUlonglong
                                           
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_DOMAIN_CREATION_FLAGS.$", 0x0, false, 0x8de1cbc94a877d5 );             
        SDK_FIXED_SIZE( iommu_dma_domain_creation_flags_t, 0x8 );             
    };                                     
};
#include "magic/iommu_dma_domain_creation_flags_t.end.hpp"
SDK_VERIFY( union nt::iommu_dma_domain_creation_flags_t, 0x8 );
