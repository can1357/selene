#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_id_flags_t.start.hpp"
namespace ext
{
    // [union _EXT_IOMMU_DEVICE_ID_FLAGS]
    // => Windows 11
    //
    union iommu_device_id_flags_t
    {                            
        // Windows 11            
        //                       
        _m00 uint16_t as_ushort;   //{ +0x0000    } | .AsUSHORT
        _m01 uint1_t  is_aliased;  //{ +0x0000@0  } | .IsAliased
                                 
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID_FLAGS.$", 0x0, false, 0x6a7af825347c794 );           
        SDK_FIXED_SIZE( iommu_device_id_flags_t, 0x2 );           
    };                           
};
#include "magic/iommu_device_id_flags_t.end.hpp"
SDK_VERIFY( union ext::iommu_device_id_flags_t, 0x2 );
