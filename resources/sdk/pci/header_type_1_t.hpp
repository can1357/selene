#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/header_type_1_t.start.hpp"
namespace pci
{
    // [struct _PCI_HEADER_TYPE_1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct header_type_1_t                                  
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 sdk::array<uint32_t, 2> base_addresses;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddresses
        _m01 uint8_t                 primary_bus;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PrimaryBus
        _m02 uint8_t                 secondary_bus;           //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .SecondaryBus
        _m03 uint8_t                 subordinate_bus;         //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .SubordinateBus
        _m04 uint8_t                 secondary_latency;       //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .SecondaryLatency
        _m05 uint8_t                 io_base;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .IOBase
        _m06 uint8_t                 io_limit;                //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .IOLimit
        _m07 uint16_t                secondary_status;        //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .SecondaryStatus
        _m08 uint16_t                memory_base;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MemoryBase
        _m09 uint16_t                memory_limit;            //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .MemoryLimit
        _m10 uint16_t                prefetch_base;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PrefetchBase
        _m11 uint16_t                prefetch_limit;          //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .PrefetchLimit
        _m12 uint32_t                prefetch_base_upper32;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PrefetchBaseUpper32
        _m13 uint32_t                prefetch_limit_upper32;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .PrefetchLimitUpper32
        _m14 uint16_t                io_base_upper16;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .IOBaseUpper16
        _m15 uint16_t                io_limit_upper16;        //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .IOLimitUpper16
        _m16 uint8_t                 capabilities_ptr;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CapabilitiesPtr
        _m17 uint32_t                rom_base_address;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ROMBaseAddress
        _m18 uint8_t                 interrupt_line;          //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .InterruptLine
        _m19 uint8_t                 interrupt_pin;           //{ +0x002d    +0x002d    +0x002d    +0x002d    +0x002d    } | .InterruptPin
        _m20 uint16_t                bridge_control;          //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .BridgeControl
                                                            
        SDK_NONVOL_PROPERTIES( "_PCI_HEADER_TYPE_1.$", 0x30, true, 0xc424428b79246e64 );                       
        SDK_FIXED_SIZE( header_type_1_t, 0x30 );                       
    };                                                      
};
#include "magic/header_type_1_t.end.hpp"
SDK_VERIFY( struct pci::header_type_1_t, 0x30 );
