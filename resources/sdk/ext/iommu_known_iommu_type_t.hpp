#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_KNOWN_IOMMU_TYPE]
    //  Windows 11
    //
    enum class iommu_known_iommu_type_t : int32_t
    {                                            
        invalid = 0x0,                             // Windows 11
        amd =     0x1,                             // Windows 11
        intel =   0x2,                             // Windows 11
        smmuv1 =  0x3,                             // Windows 11
        smmuv2 =  0x4,                             // Windows 11
        smmuv3 =  0x5,                             // Windows 11
        its =     0x6,                             // Windows 11
        unknown = 0x1000,                          // Windows 11
    };                                           
};
