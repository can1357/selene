#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_link_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_LINK_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_link_control_register_t           
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint2_t  active_state_pm_control;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ActiveStatePMControl
        _m01 uint1_t  rsvd1;                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd1
        _m02 uint1_t  read_completion_boundary;       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ReadCompletionBoundary
        _m03 uint1_t  link_disable;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .LinkDisable
        _m04 uint1_t  retrain_link;                   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .RetrainLink
        _m05 uint1_t  common_clock_config;            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .CommonClockConfig
        _m06 uint1_t  extended_synch;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ExtendedSynch
        _m07 uint1_t  enable_clock_power_management;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EnableClockPowerManagement
        _m08 uint7_t  rsvd2;                          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Rsvd2
        _m09 uint16_t as_ushort;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                    
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LINK_CONTROL_REGISTER.$", 0x2, true, 0x74e7c10f64b1d73c );                              
        SDK_FIXED_SIZE( express_link_control_register_t, 0x2 );                              
    };                                              
};
#include "magic/express_link_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_link_control_register_t, 0x2 );
