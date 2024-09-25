#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_capabilities_register_t      
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint4_t  capability_version;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CapabilityVersion
        _m01 uint4_t  device_type;               //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DeviceType
        _m02 uint1_t  slot_implemented;          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .SlotImplemented
        _m03 uint5_t  interrupt_message_number;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .InterruptMessageNumber
        _m04 uint2_t  rsvd;                      //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Rsvd
        _m05 uint16_t as_ushort;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_CAPABILITIES_REGISTER.$", 0x2, true, 0xd5d8d1973e9b0f45 );                         
        SDK_FIXED_SIZE( express_capabilities_register_t, 0x2 );                         
    };                                         
};
#include "magic/express_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_capabilities_register_t, 0x2 );
