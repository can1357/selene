#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sriov_caps_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SRIOV_CAPS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sriov_caps_t                      
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  vf_migration_capable;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VFMigrationCapable
        _m01 uint11_t vf_migration_interrupt_number;  //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .VFMigrationInterruptNumber
        _m02 uint32_t as_ulong;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                    
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SRIOV_CAPS.$", 0x4, true, 0x6ab214ddb992e5ab );                              
        SDK_FIXED_SIZE( express_sriov_caps_t, 0x4 );                              
    };                                              
};
#include "magic/express_sriov_caps_t.end.hpp"
SDK_VERIFY( union pci::express_sriov_caps_t, 0x4 );
