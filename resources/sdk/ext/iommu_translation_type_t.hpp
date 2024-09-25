#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_TRANSLATION_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class iommu_translation_type_t : int32_t
    {                                            
        pass_through =      0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        blocked =           0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate =         0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //invalid =         0x3,                   // Windows 11
        safe_pass_through = 0x3,                   // Windows 10 v2004, Windows 10 v20H2
        invalid =           0x4,                   // Windows 10 v2004, Windows 10 v20H2
    };                                           
};
