#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sriov_migration_state_array_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sriov_migration_state_array_t 
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint3_t  vf_migration_state_bir;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VFMigrationStateBIR
        _m01 uint29_t vf_migration_state_offset;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VFMigrationStateOffset
        _m02 uint32_t as_ulong;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY.$", 0x4, true, 0x138c536ed40734c1 );                          
        SDK_FIXED_SIZE( express_sriov_migration_state_array_t, 0x4 );                          
    };                                          
};
#include "magic/express_sriov_migration_state_array_t.end.hpp"
SDK_VERIFY( union pci::express_sriov_migration_state_array_t, 0x4 );
