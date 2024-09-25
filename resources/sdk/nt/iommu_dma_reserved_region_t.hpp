#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_reserved_region_t.start.hpp"
namespace nt
{
    struct iommu_dma_reserved_region_t;

    // [struct _IOMMU_DMA_RESERVED_REGION]
    // => Windows 11
    //
    struct iommu_dma_reserved_region_t                               
    {                                                                
        // Windows 11                                                
        //                                                           
        _m00 struct nt::iommu_dma_reserved_region_t* region_next;      //{ +0x0000    } | .RegionNext
        _m01 uint64_t                                base;             //{ +0x0008    } | .Base
        _m02 uint64_t                                number_of_pages;  //{ +0x0010    } | .NumberOfPages
        _m03 uint8_t                                 should_map;       //{ +0x0018    } | .ShouldMap
                                                                     
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_RESERVED_REGION.$", 0x0, false, 0x2dc4bc7ddaa1e88e );                
        SDK_FIXED_SIZE( iommu_dma_reserved_region_t, 0x20 );                
    };                                                               
};
#include "magic/iommu_dma_reserved_region_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_reserved_region_t, 0x20 );
