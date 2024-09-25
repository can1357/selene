#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sriov_status_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SRIOV_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sriov_status_t          
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint1_t  vf_migration_status;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VFMigrationStatus
        _m01 uint16_t as_ushort;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                          
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SRIOV_STATUS.$", 0x2, true, 0x404ab1fd7753f301 );                    
        SDK_FIXED_SIZE( express_sriov_status_t, 0x2 );                    
    };                                    
};
#include "magic/express_sriov_status_t.end.hpp"
SDK_VERIFY( union pci::express_sriov_status_t, 0x2 );
