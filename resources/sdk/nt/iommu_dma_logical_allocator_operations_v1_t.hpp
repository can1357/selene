#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_logical_allocator_operations_v1_t.start.hpp"
namespace nt
{
    struct iommu_dma_logical_allocator_t;
    struct iommu_dma_logical_allocator_capabilities_t;

    // [struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1]
    // => Windows 11
    //
    struct iommu_dma_logical_allocator_operations_v1_t            
    {                                                             
        using allocate_logical_address_t = sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t*, uint64_t, uint64_t*, uint64_t*, uint64_t*)>*;                         
        using free_logical_address_t =     sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t)>*;                         
        using reserve_logical_address_t =  sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t, uint64_t)>*;                         
        using query_capabilities_t =       sdk::function<struct nt::iommu_dma_logical_allocator_capabilities_t(struct nt::iommu_dma_logical_allocator_t*)>*;                         
        using clean_up_t =                 sdk::function<void(struct nt::iommu_dma_logical_allocator_t*)>*;                         
                                                                  
        // Windows 11                                             
        //                                                        
        _m00 allocate_logical_address_t  allocate_logical_address;  //{ +0x0000    } | .AllocateLogicalAddress
        _m01 free_logical_address_t      free_logical_address;      //{ +0x0008    } | .FreeLogicalAddress
        _m02 reserve_logical_address_t   reserve_logical_address;   //{ +0x0010    } | .ReserveLogicalAddress
        _m03 query_capabilities_t        query_capabilities;        //{ +0x0018    } | .QueryCapabilities
        _m04 clean_up_t                  clean_up;                  //{ +0x0020    } | .CleanUp
                                                                  
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.$", 0x0, false, 0xb764d3575f13ea0a );                         
        SDK_FIXED_SIZE( iommu_dma_logical_allocator_operations_v1_t, 0x28 );                         
    };                                                            
};
#include "magic/iommu_dma_logical_allocator_operations_v1_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_allocator_operations_v1_t, 0x28 );
