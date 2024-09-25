#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_non_operational_power_state_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE]
    // => Windows 11
    //
    union nvme_cdw11_feature_non_operational_power_state_t
    {                                                     
        // Windows 11          
        //                     
        _m00 uint1_t  noppme;                               //{ +0x0000@0  } | .NOPPME
        _m01 uint32_t as_ulong;                             //{ +0x0000    } | .AsUlong
                                                          
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE.$", 0x0, false, 0xac7dd35d21df359e );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_non_operational_power_state_t, 0x4 );         
    };                                                    
};
#include "magic/nvme_cdw11_feature_non_operational_power_state_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_non_operational_power_state_t, 0x4 );
