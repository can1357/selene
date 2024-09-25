#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_auto_power_state_transition_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_AUTO_POWER_STATE_TRANSITION]
    // => Windows 11
    //
    union nvme_cdw11_feature_auto_power_state_transition_t
    {                                                     
        // Windows 11          
        //                     
        _m00 uint1_t  apste;                                //{ +0x0000@0  } | .APSTE
        _m01 uint32_t as_ulong;                             //{ +0x0000    } | .AsUlong
                                                          
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_AUTO_POWER_STATE_TRANSITION.$", 0x0, false, 0x642a405b7308c49b );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_auto_power_state_transition_t, 0x4 );         
    };                                                    
};
#include "magic/nvme_cdw11_feature_auto_power_state_transition_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_auto_power_state_transition_t, 0x4 );
