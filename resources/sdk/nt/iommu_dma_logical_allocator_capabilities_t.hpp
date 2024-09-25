#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_logical_allocator_capabilities_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES]
    // => Windows 11
    //
    struct iommu_dma_logical_allocator_capabilities_t
    {                                                
        // Windows 11                         
        //                                    
        _m00 uint1_t explicit_address_capable;         //{ +0x0000@0  } | .ExplicitAddressCapable
                                                     
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES.$", 0x0, false, 0x1d60aff9365e8400 );                         
        SDK_FIXED_SIZE( iommu_dma_logical_allocator_capabilities_t, 0x4 );                         
    };                                               
};
#include "magic/iommu_dma_logical_allocator_capabilities_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_allocator_capabilities_t, 0x4 );
