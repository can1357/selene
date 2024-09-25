#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/header_type_0_t.start.hpp"
namespace pci
{
    // [struct _PCI_HEADER_TYPE_0]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct header_type_0_t                            
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                            
        _m00 sdk::array<uint32_t, 6> base_addresses;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddresses
        _m01 uint32_t                cis;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CIS
        _m02 uint16_t                sub_vendor_id;     //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .SubVendorID
        _m03 uint16_t                sub_system_id;     //{ +0x001e    +0x001e    +0x001e    +0x001e    +0x001e    } | .SubSystemID
        _m04 uint32_t                rom_base_address;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ROMBaseAddress
        _m05 uint8_t                 capabilities_ptr;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CapabilitiesPtr
        _m06 uint8_t                 interrupt_line;    //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .InterruptLine
        _m07 uint8_t                 interrupt_pin;     //{ +0x002d    +0x002d    +0x002d    +0x002d    +0x002d    } | .InterruptPin
        _m08 uint8_t                 minimum_grant;     //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .MinimumGrant
        _m09 uint8_t                 maximum_latency;   //{ +0x002f    +0x002f    +0x002f    +0x002f    +0x002f    } | .MaximumLatency
                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_HEADER_TYPE_0.$", 0x30, true, 0x804a07382a7d1ae6 );                 
        SDK_FIXED_SIZE( header_type_0_t, 0x30 );                 
    };                                                
};
#include "magic/header_type_0_t.end.hpp"
SDK_VERIFY( struct pci::header_type_0_t, 0x30 );
