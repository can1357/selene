#pragma once
#include <sdkgen/support_library.hpp>
#include "bus_width_t.hpp"
#include "hardware_interface_t.hpp"
#include "root_bus_osc_control_field_t.hpp"
#include "root_bus_osc_support_field_t.hpp"

#include "magic/root_bus_hardware_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct root_bus_hardware_capability_t                                         
    {                                                                             
        enum class u0_secondary_bus_width_t : int32_t                             
        {                                                                         
            width32_bits = 0x0,                                                     // WDK 10
            width64_bits = 0x1,                                                     // WDK 10
        };                                                                        
                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m00 enum pci::hardware_interface_t           secondary_interface;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecondaryInterface
        _m01 uint8_t                                  bus_capabilities_found;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BusCapabilitiesFound
        _m02 uint32_t                                 current_speed_and_mode;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSpeedAndMode
        _m03 uint32_t                                 supported_speeds_and_modes;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SupportedSpeedsAndModes
        _m04 uint8_t                                  device_id_messaging_capable;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceIDMessagingCapable
        _m05 int32_t                                  secondary_bus_width;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SecondaryBusWidth
        _m06 struct pci::root_bus_osc_support_field_t osc_feature_support;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OscFeatureSupport
        _m07 struct pci::root_bus_osc_control_field_t osc_control_request;          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .OscControlRequest
        _m08 struct pci::root_bus_osc_control_field_t osc_control_granted;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OscControlGranted
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.$", 0x24, true, 0x8bbbc6dd372d6f13 );                            
        SDK_FIXED_SIZE( root_bus_hardware_capability_t, 0x24 );                            
    };                                                                            
};
#include "magic/root_bus_hardware_capability_t.end.hpp"
SDK_VERIFY( struct pci::root_bus_hardware_capability_t, 0x24 );
