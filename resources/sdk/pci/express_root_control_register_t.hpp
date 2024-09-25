#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ROOT_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_root_control_register_t            
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  correctable_serr_enable;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableSerrEnable
        _m01 uint1_t  non_fatal_serr_enable;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NonFatalSerrEnable
        _m02 uint1_t  fatal_serr_enable;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .FatalSerrEnable
        _m03 uint1_t  pme_interrupt_enable;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PMEInterruptEnable
        _m04 uint1_t  crs_software_visibility_enable;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CRSSoftwareVisibilityEnable
        _m05 uint11_t rsvd;                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Rsvd
        _m06 uint16_t as_ushort;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_CONTROL_REGISTER.$", 0x2, true, 0x4a6888eff311ca27 );                               
        SDK_FIXED_SIZE( express_root_control_register_t, 0x2 );                               
    };                                               
};
#include "magic/express_root_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_root_control_register_t, 0x2 );
