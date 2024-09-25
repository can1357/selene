#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_id_gic_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DEVICE_ID_GIC]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_device_id_gic_t  
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t line_number;  //{ +0x0000    +0x0000    +0x0000    } | .LineNumber
                                  
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID_GIC.$", 0x4, true, 0x5faa379ee31b5f90 );            
        SDK_FIXED_SIZE( iommu_device_id_gic_t, 0x4 );            
    };                            
};
#include "magic/iommu_device_id_gic_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_id_gic_t, 0x4 );
