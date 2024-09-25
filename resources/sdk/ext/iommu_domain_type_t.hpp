#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_DOMAIN_TYPE]
    //  Windows 11
    //
    enum class iommu_domain_type_t : int32_t
    {                                       
        s1 =      0x0,                        // Windows 11
        s2 =      0x1,                        // Windows 11
        invalid = 0x2,                        // Windows 11
    };                                      
};
