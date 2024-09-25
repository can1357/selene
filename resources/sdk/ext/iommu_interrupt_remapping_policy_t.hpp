#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY]
    //  Windows 11
    //
    enum class iommu_interrupt_remapping_policy_t : int32_t
    {                                                      
        disable =       0x0,                                 // Windows 11
        enable_loose =  0x1,                                 // Windows 11
        enable_strict = 0x2,                                 // Windows 11
    };                                                     
};
