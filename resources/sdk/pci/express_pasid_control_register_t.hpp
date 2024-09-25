#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_pasid_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PASID_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_pasid_control_register_t      
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  pasid_enable;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PASIDEnable
        _m01 uint1_t  execute_permission_enable;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ExecutePermissionEnable
        _m02 uint1_t  privileged_mode_enable;     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PrivilegedModeEnable
        _m03 uint13_t rsvd;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m04 uint16_t as_ushort;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PASID_CONTROL_REGISTER.$", 0x2, true, 0x1f5bf20ada4e0af2 );                          
        SDK_FIXED_SIZE( express_pasid_control_register_t, 0x2 );                          
    };                                          
};
#include "magic/express_pasid_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_pasid_control_register_t, 0x2 );
