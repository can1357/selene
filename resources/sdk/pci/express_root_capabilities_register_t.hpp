#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_root_capabilities_register_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint1_t  crs_software_visibility;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CRSSoftwareVisibility
        _m01 uint15_t rsvd;                     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd
        _m02 uint16_t as_ushort;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER.$", 0x2, true, 0xd3db49e1f812c119 );                        
        SDK_FIXED_SIZE( express_root_capabilities_register_t, 0x2 );                        
    };                                        
};
#include "magic/express_root_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_root_capabilities_register_t, 0x2 );
