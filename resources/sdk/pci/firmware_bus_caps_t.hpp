#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/firmware_bus_caps_t.start.hpp"
namespace pci
{
    // [struct _PCI_FIRMWARE_BUS_CAPS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct firmware_bus_caps_t                             
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint16_t type;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t length;                                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Length
        _m02 uint1_t  sixty_four_bit_device;                 //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .SixtyFourBitDevice
        _m03 uint1_t  pci_x_mode1_ecc_capable;               //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .PciXMode1EccCapable
        _m04 uint1_t  device_id_messaging_capable;           //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .DeviceIdMessagingCapable
        _m05 uint1_t  obff_wake_signal_capable;              //{ +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  } | .ObffWakeSignalCapable
        _m06 uint8_t  current_speed_and_mode;                //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .CurrentSpeedAndMode
        _m07 uint8_t  supported_speeds_and_modes_low_byte;   //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SupportedSpeedsAndModesLowByte
        _m08 uint8_t  supported_speeds_and_modes_high_byte;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .SupportedSpeedsAndModesHighByte
        _m09 uint8_t  voltage;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Voltage
                                                           
        SDK_NONVOL_PROPERTIES( "_PCI_FIRMWARE_BUS_CAPS.$", 0x10, true, 0xb7d1b77fad3af08f );                                     
        SDK_FIXED_SIZE( firmware_bus_caps_t, 0x10 );                                     
    };                                                     
};
#include "magic/firmware_bus_caps_t.end.hpp"
SDK_VERIFY( struct pci::firmware_bus_caps_t, 0x10 );
