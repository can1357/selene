#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/bus_extension_t.start.hpp"
namespace pi
{
    // [struct _PI_BUS_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_extension_t                                        
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 uint32_t                       flags;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint8_t                        number_cs_ns;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberCSNs
        _m02 uint8_t*                       read_data_port;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadDataPort
        _m03 uint8_t                        data_port_mapped;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataPortMapped
        _m04 uint8_t*                       address_port;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AddressPort
        _m05 uint8_t                        addr_port_mapped;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AddrPortMapped
        _m06 uint8_t*                       command_port;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CommandPort
        _m07 uint8_t                        cmd_port_mapped;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CmdPortMapped
        _m08 uint32_t                       next_slot_number;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NextSlotNumber
        _m09 struct nt::single_list_entry_t device_list;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DeviceList
        _m10 struct nt::single_list_entry_t card_list;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CardList
        _m11 struct nt::device_object_t*    physical_bus_device;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PhysicalBusDevice
        _m12 struct nt::device_object_t*    functional_bus_device;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FunctionalBusDevice
        _m13 struct nt::device_object_t*    attached_device;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AttachedDevice
        _m14 uint32_t                       bus_number;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BusNumber
        _m15 enum nt::system_power_state_t  system_power_state;     //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .SystemPowerState
        _m16 enum nt::device_power_state_t  device_power_state;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DevicePowerState
                                                                  
        SDK_MAGIC_PROPERTIES( "_PI_BUS_EXTENSION.$", 0x70, true, 0xc57d31fe89d1084 );                      
        SDK_FIXED_SIZE( bus_extension_t, 0x70 );                      
    };                                                            
};
#include "magic/bus_extension_t.end.hpp"
SDK_VERIFY( struct pi::bus_extension_t, 0x70 );
