#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_pri_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PRI_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_pri_control_register_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint1_t  enable;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Enable
        _m01 uint1_t  reset;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Reset
        _m02 uint14_t rsvd;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rsvd
        _m03 uint16_t as_ushort;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                        
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PRI_CONTROL_REGISTER.$", 0x2, true, 0xf26c929741d9608d );          
        SDK_FIXED_SIZE( express_pri_control_register_t, 0x2 );          
    };                                  
};
#include "magic/express_pri_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_pri_control_register_t, 0x2 );
