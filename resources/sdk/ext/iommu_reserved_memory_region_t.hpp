#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_reserved_memory_region_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_RESERVED_MEMORY_REGION]
    // => Windows 11
    //
    struct iommu_reserved_memory_region_t
    {                                    
        // Windows 11        
        //                   
        _m00 int64_t base;                 //{ +0x0000    } | .Base
        _m01 int64_t limit;                //{ +0x0008    } | .Limit
        _m02 uint8_t ignored;              //{ +0x0010    } | .Ignored
                                         
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_RESERVED_MEMORY_REGION.$", 0x0, false, 0x117628bfdf69b51a );        
        SDK_FIXED_SIZE( iommu_reserved_memory_region_t, 0x18 );        
    };                                   
};
#include "magic/iommu_reserved_memory_region_t.end.hpp"
SDK_VERIFY( struct ext::iommu_reserved_memory_region_t, 0x18 );
