#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_logical_address_token_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN]
    // => Windows 11
    //
    struct iommu_dma_logical_address_token_t
    {                                       
        // Windows 11                      
        //                                 
        _m00 uint64_t logical_address_base;   //{ +0x0000    } | .LogicalAddressBase
        _m01 uint64_t size;                   //{ +0x0008    } | .Size
                                            
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN.$", 0x0, false, 0xd1a7ffa7e4b56128 );                     
        SDK_FIXED_SIZE( iommu_dma_logical_address_token_t, 0x10 );                     
    };                                      
};
#include "magic/iommu_dma_logical_address_token_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_address_token_t, 0x10 );
