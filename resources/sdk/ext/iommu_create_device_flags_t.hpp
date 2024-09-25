#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_create_device_flags_t.start.hpp"
namespace ext
{
    // [union _EXT_IOMMU_CREATE_DEVICE_FLAGS]
    // => Windows 11
    //
    union iommu_create_device_flags_t
    {                                
        // Windows 11              
        //                         
        _m00 uint32_t as_uint32;       //{ +0x0000    } | .AsUINT32
        _m01 uint1_t  wild_card;       //{ +0x0000@0  } | .WildCard
        _m02 uint1_t  force_create;    //{ +0x0000@1  } | .ForceCreate
        _m03 uint1_t  live_traffic;    //{ +0x0000@2  } | .LiveTraffic
                                     
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_CREATE_DEVICE_FLAGS.$", 0x0, false, 0x73633e18d212e910 );             
        SDK_FIXED_SIZE( iommu_create_device_flags_t, 0x4 );             
    };                               
};
#include "magic/iommu_create_device_flags_t.end.hpp"
SDK_VERIFY( union ext::iommu_create_device_flags_t, 0x4 );
