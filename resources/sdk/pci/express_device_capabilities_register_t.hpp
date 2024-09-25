#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_capabilities_register_t      
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint3_t  max_payload_size_supported;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MaxPayloadSizeSupported
        _m01 uint2_t  phantom_functions_supported;      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PhantomFunctionsSupported
        _m02 uint1_t  extended_tag_supported;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ExtendedTagSupported
        _m03 uint3_t  l0s_acceptable_latency;           //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .L0sAcceptableLatency
        _m04 uint3_t  l1_acceptable_latency;            //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .L1AcceptableLatency
        _m05 uint3_t  undefined;                        //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Undefined
        _m06 uint1_t  role_based_error_reporting;       //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .RoleBasedErrorReporting
        _m07 uint2_t  rsvd1;                            //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd1
        _m08 uint8_t  captured_slot_power_limit;        //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .CapturedSlotPowerLimit
        _m09 uint2_t  captured_slot_power_limit_scale;  //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .CapturedSlotPowerLimitScale
        _m10 uint1_t  function_level_reset_capability;  //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .FunctionLevelResetCapability
        _m11 uint3_t  rsvd2;                            //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .Rsvd2
        _m12 uint32_t as_ulong;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER.$", 0x4, true, 0x836a90351a0b69e8 );                                
        SDK_FIXED_SIZE( express_device_capabilities_register_t, 0x4 );                                
    };                                                
};
#include "magic/express_device_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_capabilities_register_t, 0x4 );
