#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_ats_settings_t.start.hpp"
namespace nt
{
    // [union _IOMMU_ATS_SETTINGS]
    // => Windows 11
    //
    union iommu_ats_settings_t     
    {                              
        // Windows 11              
        //                         
        _m00 uint1_t ats_supported;  //{ +0x0000@0  } | .AtsSupported
        _m01 uint1_t ats_required;   //{ +0x0000@1  } | .AtsRequired
        _m02 uint6_t rsvd;           //{ +0x0000@2  } | .Rsvd
        _m03 uint8_t as_uchar;       //{ +0x0000    } | .AsUCHAR
                                   
        SDK_MAGIC_PROPERTIES( "_IOMMU_ATS_SETTINGS.$", 0x0, false, 0xea914f291d6b3556 );              
        SDK_FIXED_SIZE( iommu_ats_settings_t, 0x1 );              
    };                             
};
#include "magic/iommu_ats_settings_t.end.hpp"
SDK_VERIFY( union nt::iommu_ats_settings_t, 0x1 );
