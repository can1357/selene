#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_l1_pm_ss_control_2_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_l1_pm_ss_control_2_register_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint2_t  t_power_on_scale;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TPowerOnScale
        _m01 uint1_t  rsvd;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd
        _m02 uint5_t  t_power_on_value;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .TPowerOnValue
        _m03 uint24_t rsvd2;                     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Rsvd2
        _m04 uint32_t as_ulong;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER.$", 0x4, true, 0x9befce3262eb0051 );                 
        SDK_FIXED_SIZE( express_l1_pm_ss_control_2_register_t, 0x4 );                 
    };                                         
};
#include "magic/express_l1_pm_ss_control_2_register_t.end.hpp"
SDK_VERIFY( union pci::express_l1_pm_ss_control_2_register_t, 0x4 );
