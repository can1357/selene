#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_interface_v1_t.hpp"
#include "iommu_interface_v2_t.hpp"

#include "magic/iommu_interface_ex_t.start.hpp"
namespace dma
{
    // [struct _DMA_IOMMU_INTERFACE_EX]
    // => Windows 11
    //
    struct iommu_interface_ex_t                       
    {                                                 
        // Windows 11                                 
        //                                            
        _m00 uint64_t                         size;     //{ +0x0000    } | .Size
        _m01 uint32_t                         version;  //{ +0x0008    } | .Version
        _m02 struct dma::iommu_interface_v1_t v1;       //{ +0x0010    } | .V1
        _m03 struct dma::iommu_interface_v2_t v2;       //{ +0x0010    } | .V2
                                                      
        SDK_MAGIC_PROPERTIES( "_DMA_IOMMU_INTERFACE_EX.$", 0x0, false, 0x1a2856b7d8eb21ce );        
        SDK_FIXED_SIZE( iommu_interface_ex_t, 0xc0 );        
    };                                                
};
#include "magic/iommu_interface_ex_t.end.hpp"
SDK_VERIFY( struct dma::iommu_interface_ex_t, 0xc0 );
