#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_vpd_b2_data_t.start.hpp"
namespace nt
{
    // [struct _CLASS_VPD_B2_DATA]
    // => WDK 10 (NV)
    //
    struct class_vpd_b2_data_t                     
    {                                              
        // WDK 10                                  
        //                                         
        _m00 int32_t  command_status;                //{ +0x0000    } | .CommandStatus
        _m01 uint8_t  threshold_exponent;            //{ +0x0004    } | .ThresholdExponent
        _m02 uint1_t  dp;                            //{ +0x0005@0  } | .DP
        _m03 uint1_t  anc_sup;                       //{ +0x0005@1  } | .ANC_SUP
        _m04 uint1_t  lbprz;                         //{ +0x0005@4  } | .LBPRZ
        _m05 uint1_t  lbpws10;                       //{ +0x0005@5  } | .LBPWS10
        _m06 uint1_t  lbpws;                         //{ +0x0005@6  } | .LBPWS
        _m07 uint1_t  lbpu;                          //{ +0x0005@7  } | .LBPU
        _m08 uint3_t  provisioning_type;             //{ +0x0006@0  } | .ProvisioningType
        _m09 uint32_t soft_threshold_event_pending;  //{ +0x0008    } | .SoftThresholdEventPending
                                                   
        SDK_NONVOL_PROPERTIES( "_CLASS_VPD_B2_DATA.$", 0x0, false, 0x845af822d7e2da82 );                             
        SDK_FIXED_SIZE( class_vpd_b2_data_t, 0xc );                             
    };                                             
};
#include "magic/class_vpd_b2_data_t.end.hpp"
SDK_VERIFY( struct nt::class_vpd_b2_data_t, 0xc );
