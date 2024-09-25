#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_output_mapping_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_OUTPUT_MAPPING]
    // => Windows 11
    //
    struct iommu_output_mapping_t
    {                            
        // Windows 11           
        //                      
        _m00 uint64_t output_id;   //{ +0x0000    } | .OutputId
                                 
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_OUTPUT_MAPPING.$", 0x0, false, 0x765982e853f865e9 );          
        SDK_FIXED_SIZE( iommu_output_mapping_t, 0x8 );          
    };                           
};
#include "magic/iommu_output_mapping_t.end.hpp"
SDK_VERIFY( struct ext::iommu_output_mapping_t, 0x8 );
