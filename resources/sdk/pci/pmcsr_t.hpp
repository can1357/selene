#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmcsr_t.start.hpp"
namespace pci
{
    // [struct _PCI_PMCSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pmcsr_t                 
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint2_t power_state;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerState
        _m01 uint1_t rsvd1;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd1
        _m02 uint1_t no_soft_reset;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NoSoftReset
        _m03 uint4_t rsvd2;          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Rsvd2
        _m04 uint1_t pme_enable;     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PMEEnable
        _m05 uint4_t data_select;    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .DataSelect
        _m06 uint2_t data_scale;     //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .DataScale
        _m07 uint1_t pme_status;     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .PMEStatus
                                   
        SDK_NONVOL_PROPERTIES( "_PCI_PMCSR.$", 0x2, true, 0xbf038b218e3e9784 );              
        SDK_FIXED_SIZE( pmcsr_t, 0x2 );              
    };                             
};
#include "magic/pmcsr_t.end.hpp"
SDK_VERIFY( struct pci::pmcsr_t, 0x2 );
