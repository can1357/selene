#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY]
    //  Windows 11
    //
    enum class iommu_address_translation_policy_t : int32_t
    {                                                      
        disable =                  0x0,                      // Windows 11
        enable_default_bypass =    0x1,                      // Windows 11
        enable_default_block =     0x2,                      // Windows 11
        enable_default_translate = 0x3,                      // Windows 11
    };                                                     
};
