#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sriov_control_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SRIOV_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sriov_control_t                   
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  vf_enable;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VFEnable
        _m01 uint1_t  vf_migration_enable;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VFMigrationEnable
        _m02 uint1_t  vf_migration_interrupt_enable;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .VFMigrationInterruptEnable
        _m03 uint1_t  vf_memory_space_enable;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VFMemorySpaceEnable
        _m04 uint1_t  ari_capable_hierarchy;          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ARICapableHierarchy
        _m05 uint16_t as_ushort;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                    
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SRIOV_CONTROL.$", 0x2, true, 0xeec9f03c334cbad4 );                              
        SDK_FIXED_SIZE( express_sriov_control_t, 0x2 );                              
    };                                              
};
#include "magic/express_sriov_control_t.end.hpp"
SDK_VERIFY( union pci::express_sriov_control_t, 0x2 );
