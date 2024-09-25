#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_dma_logical_allocator_type_t.hpp"

#include "magic/iommu_dma_logical_allocator_config_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG]
    // => Windows 11
    //
    struct iommu_dma_logical_allocator_config_t                                 
    {                                                                           
        struct u0_buddy_allocator_config_t                                      
        {                                                                       
            // Windows 11                                                       
            //                                                                  
            _m01 uint32_t address_width;                                          //{ +0x0000    } | .AddressWidth
                                                                                
            SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.BuddyAllocatorConfig.$", 0x0, false, 0xe3e9ea2ef9084606 );                                     
            SDK_FIXED_SIZE( u0_buddy_allocator_config_t, 0x4 );                                     
        };                                                                      
                                                                                
        // Windows 11                                                           
        //                                                                      
        _m00 enum nt::iommu_dma_logical_allocator_type_t logical_allocator_type;  //{ +0x0000    } | .LogicalAllocatorType
        _m02 u0_buddy_allocator_config_t                 buddy_allocator_config;  //{ +0x0004    } | .BuddyAllocatorConfig
                                                                                
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.$", 0x0, false, 0xc0cbc8d74157bc3b );                       
        SDK_FIXED_SIZE( iommu_dma_logical_allocator_config_t, 0x8 );                       
    };                                                                          
};
#include "magic/iommu_dma_logical_allocator_config_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_allocator_config_t::u0_buddy_allocator_config_t, 0x4 );
SDK_VERIFY( struct nt::iommu_dma_logical_allocator_config_t, 0x8 );
