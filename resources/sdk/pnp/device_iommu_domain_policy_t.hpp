#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY]
    //  Windows 11
    //
    enum class device_iommu_domain_policy_t : int32_t
    {                                                
        allow_all =         0x0,                       // Windows 11
        block_passthrough = 0x1,                       // Windows 11
        max =               0x2,                       // Windows 11
    };                                               
};
