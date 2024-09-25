#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_dma_logical_allocator_type_t.hpp"

#include "magic/iommu_dma_logical_allocator_t.start.hpp"
namespace nt
{
    struct iommu_dma_logical_allocator_operations_v1_t;

    // [struct _IOMMU_DMA_LOGICAL_ALLOCATOR]
    // => Windows 11
    //
    struct iommu_dma_logical_allocator_t                                
    {                                                                   
        using operations_t = struct nt::iommu_dma_logical_allocator_operations_v1_t*;               
                                                                        
        // Windows 11                                                   
        //                                                              
        _m00 operations_t                                operations;      //{ +0x0000    } | .Operations
        _m01 uint32_t                                    version;         //{ +0x0008    } | .Version
        _m02 uint32_t                                    size;            //{ +0x000c    } | .Size
        _m03 enum nt::iommu_dma_logical_allocator_type_t allocator_type;  //{ +0x0010    } | .AllocatorType
                                                                        
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ALLOCATOR.$", 0x0, false, 0x2cea5178ed58b72d );               
        SDK_FIXED_SIZE( iommu_dma_logical_allocator_t, 0x18 );               
    };                                                                  
};
#include "magic/iommu_dma_logical_allocator_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_allocator_t, 0x18 );
