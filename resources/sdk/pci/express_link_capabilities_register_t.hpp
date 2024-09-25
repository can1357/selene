#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_link_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_link_capabilities_register_t                 
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                     
        _m00 uint4_t  maximum_link_speed;                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MaximumLinkSpeed
        _m01 uint6_t  maximum_link_width;                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .MaximumLinkWidth
        _m02 uint2_t  active_state_pm_support;                   //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .ActiveStatePMSupport
        _m03 uint3_t  l0s_exit_latency;                          //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .L0sExitLatency
        _m04 uint3_t  l1_exit_latency;                           //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .L1ExitLatency
        _m05 uint1_t  clock_power_management;                    //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .ClockPowerManagement
        _m06 uint1_t  surprise_down_error_reporting_capable;     //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .SurpriseDownErrorReportingCapable
        _m07 uint1_t  data_link_layer_active_reporting_capable;  //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .DataLinkLayerActiveReportingCapable
        _m08 uint1_t  link_bandwidth_notification_capability;    //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .LinkBandwidthNotificationCapability
        _m09 uint1_t  aspm_optionality_compliance;               //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .AspmOptionalityCompliance
        _m10 uint1_t  rsvd;                                      //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .Rsvd
        _m11 uint8_t  port_number;                               //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .PortNumber
        _m12 uint32_t as_ulong;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.$", 0x4, true, 0xdae7ac0bdae27b1 );                                         
        SDK_FIXED_SIZE( express_link_capabilities_register_t, 0x4 );                                         
    };                                                         
};
#include "magic/express_link_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_link_capabilities_register_t, 0x4 );
