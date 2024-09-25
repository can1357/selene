#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_status_2_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_status_2_register_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t rsvd;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd
        _m01 uint16_t as_ushort;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                            
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_STATUS_2_REGISTER.$", 0x2, true, 0x99de3e780b8ef0f );          
        SDK_FIXED_SIZE( express_device_status_2_register_t, 0x2 );          
    };                                      
};
#include "magic/express_device_status_2_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_status_2_register_t, 0x2 );
