#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_pasid_capability_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_pasid_capability_register_t      
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint1_t  rsvd;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd
        _m01 uint1_t  execute_permission_supported;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ExecutePermissionSupported
        _m02 uint1_t  privileged_mode_supported;     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PrivilegedModeSupported
        _m03 uint5_t  rsvd2;                         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd2
        _m04 uint5_t  max_pasid_width;               //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .MaxPASIDWidth
        _m05 uint3_t  rsvd3;                         //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Rsvd3
        _m06 uint16_t as_ushort;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                   
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PASID_CAPABILITY_REGISTER.$", 0x2, true, 0x200e1409742589a4 );                             
        SDK_FIXED_SIZE( express_pasid_capability_register_t, 0x2 );                             
    };                                             
};
#include "magic/express_pasid_capability_register_t.end.hpp"
SDK_VERIFY( union pci::express_pasid_capability_register_t, 0x2 );
