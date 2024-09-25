#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_npem_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_NPEM_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_npem_control_register_t         
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint1_t  enable;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Enable
        _m01 uint1_t  initiate_reset;               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InitiateReset
        _m02 uint1_t  ok_control;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .OkControl
        _m03 uint1_t  locate_control;               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .LocateControl
        _m04 uint1_t  fail_control;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FailControl
        _m05 uint1_t  rebuild_control;              //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .RebuildControl
        _m06 uint1_t  pfa_control;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PFAControl
        _m07 uint1_t  hot_spare_control;            //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HotSpareControl
        _m08 uint1_t  in_a_critical_array_control;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .InACriticalArrayControl
        _m09 uint1_t  in_a_failed_array_control;    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .InAFailedArrayControl
        _m10 uint1_t  invalid_device_type_control;  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .InvalidDeviceTypeControl
        _m11 uint1_t  disabled_control;             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .DisabledControl
        _m12 uint12_t rsvd;                         //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Rsvd
        _m13 uint8_t  enclosure_specific_controls;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .EnclosureSpecificControls
        _m14 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_NPEM_CONTROL_REGISTER.$", 0x4, true, 0xd8af5aba9e647a36 );                            
        SDK_FIXED_SIZE( express_npem_control_register_t, 0x4 );                            
    };                                            
};
#include "magic/express_npem_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_npem_control_register_t, 0x4 );
