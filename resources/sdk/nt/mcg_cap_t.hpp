#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mcg_cap_t.start.hpp"
namespace nt
{
    // [union _MCG_CAP]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union mcg_cap_t                                     
    {                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint8_t  count_field;                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CountField
        _m01 uint1_t  control_msr_present;                //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ControlMsrPresent
        _m02 uint1_t  extended_msrs_present;              //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .ExtendedMsrsPresent
        _m03 uint1_t  signaling_extension_present;        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .SignalingExtensionPresent
        _m04 uint1_t  threshold_error_status_present;     //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .ThresholdErrorStatusPresent
        _m05 uint8_t  extended_register_count;            //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ExtendedRegisterCount
        _m06 uint1_t  software_error_recovery_supported;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .SoftwareErrorRecoverySupported
        _m07 uint1_t  enhanced_machine_check_capability;  //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .EnhancedMachineCheckCapability
        _m08 uint1_t  extended_error_logging;             //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .ExtendedErrorLogging
        _m09 uint1_t  local_machine_check_exception;      //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .LocalMachineCheckException
        _m10 uint64_t quad_part;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                                        
        SDK_NONVOL_PROPERTIES( "_MCG_CAP.$", 0x8, true, 0xf85714f4d52ff6aa );                                  
        SDK_FIXED_SIZE( mcg_cap_t, 0x8 );                                  
    };                                                  
};
#include "magic/mcg_cap_t.end.hpp"
SDK_VERIFY( union nt::mcg_cap_t, 0x8 );
