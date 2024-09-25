#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_dma_logical_address_token_mapped_segment_t.start.hpp"
namespace nt
{
    struct iommu_dma_logical_address_token_t;

    // [struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT]
    // => Windows 11
    //
    struct iommu_dma_logical_address_token_mapped_segment_t             
    {                                                                   
        // Windows 11                                                   
        //                                                              
        _m00 struct nt::iommu_dma_logical_address_token_t* owning_token;  //{ +0x0000    } | .OwningToken
        _m01 uint64_t                                      offset;        //{ +0x0008    } | .Offset
        _m02 uint64_t                                      size;          //{ +0x0010    } | .Size
                                                                        
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT.$", 0x0, false, 0x6579ccd8c3a03bbe );             
        SDK_FIXED_SIZE( iommu_dma_logical_address_token_mapped_segment_t, 0x18 );             
    };                                                                  
};
#include "magic/iommu_dma_logical_address_token_mapped_segment_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_logical_address_token_mapped_segment_t, 0x18 );
