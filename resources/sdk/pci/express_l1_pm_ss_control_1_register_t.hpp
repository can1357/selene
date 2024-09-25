#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_l1_pm_ss_control_1_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_l1_pm_ss_control_1_register_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  pci_pm_l12_enabled;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PciPmL12Enabled
        _m01 uint1_t  pci_pm_l11_enabled;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PciPmL11Enabled
        _m02 uint1_t  aspm_l12_enabled;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AspmL12Enabled
        _m03 uint1_t  aspm_l11_enabled;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AspmL11Enabled
        _m04 uint4_t  rsvd;                      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Rsvd
        _m05 uint8_t  common_mode_restore_time;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .CommonModeRestoreTime
        _m06 uint10_t ltr_l12_threshold_value;   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .LtrL12ThresholdValue
        _m07 uint3_t  rsvd2;                     //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .Rsvd2
        _m08 uint3_t  ltr_l12_threshold_scale;   //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .LtrL12ThresholdScale
        _m09 uint32_t as_ulong;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.$", 0x4, true, 0xc1f531a9d77f521a );                         
        SDK_FIXED_SIZE( express_l1_pm_ss_control_1_register_t, 0x4 );                         
    };                                         
};
#include "magic/express_l1_pm_ss_control_1_register_t.end.hpp"
SDK_VERIFY( union pci::express_l1_pm_ss_control_1_register_t, 0x4 );
