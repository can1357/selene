#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/header_type_2_t.start.hpp"
namespace pci
{
    // [struct _PCI_HEADER_TYPE_2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct header_type_2_t                                           
    {                                                                
        struct u0_range_t                                            
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                       
            _m07 uint32_t base;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
            _m08 uint32_t limit;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Limit
                                                                     
            SDK_NONVOL_PROPERTIES( "_PCI_HEADER_TYPE_2.Range.$", 0x8, true, 0x3c2c056068a623c4 );                                    
            SDK_FIXED_SIZE( u0_range_t, 0x8 );                                    
        };                                                           
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 uint32_t                  socket_registers_base_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SocketRegistersBaseAddress
        _m01 uint8_t                   capabilities_ptr;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CapabilitiesPtr
        _m02 uint16_t                  secondary_status;               //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SecondaryStatus
        _m03 uint8_t                   primary_bus;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PrimaryBus
        _m04 uint8_t                   secondary_bus;                  //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .SecondaryBus
        _m05 uint8_t                   subordinate_bus;                //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .SubordinateBus
        _m06 uint8_t                   secondary_latency;              //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .SecondaryLatency
        _m09 sdk::array<u0_range_t, 4> range;                          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Range
        _m10 uint8_t                   interrupt_line;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .InterruptLine
        _m11 uint8_t                   interrupt_pin;                  //{ +0x002d    +0x002d    +0x002d    +0x002d    +0x002d    } | .InterruptPin
        _m12 uint16_t                  bridge_control;                 //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .BridgeControl
                                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_HEADER_TYPE_2.$", 0x30, true, 0xf63a1d6c9c5c8536 );                              
        SDK_FIXED_SIZE( header_type_2_t, 0x30 );                              
    };                                                               
};
#include "magic/header_type_2_t.end.hpp"
SDK_VERIFY( struct pci::header_type_2_t::u0_range_t, 0x8 );
SDK_VERIFY( struct pci::header_type_2_t, 0x30 );
