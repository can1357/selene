#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/headless_loader_block_t.start.hpp"
namespace nt
{
    // [struct _HEADLESS_LOADER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct headless_loader_block_t                  
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint8_t           used_bios_settings;    //{ +0x0000    +0x0000    +0x0000    } | .UsedBiosSettings
        _m01 uint8_t           data_bits;             //{ +0x0001    +0x0001    +0x0001    } | .DataBits
        _m02 uint8_t           stop_bits;             //{ +0x0002    +0x0002    +0x0002    } | .StopBits
        _m03 uint8_t           parity;                //{ +0x0003    +0x0003    +0x0003    } | .Parity
        _m04 uint32_t          baud_rate;             //{ +0x0004    +0x0004    +0x0004    } | .BaudRate
        _m05 uint32_t          port_number;           //{ +0x0008    +0x0008    +0x0008    } | .PortNumber
        _m06 uint8_t*          port_address;          //{ +0x0010    +0x0010    +0x0010    } | .PortAddress
        _m07 uint16_t          pci_device_id;         //{ +0x0018    +0x0018    +0x0018    } | .PciDeviceId
        _m08 uint16_t          pci_vendor_id;         //{ +0x001a    +0x001a    +0x001a    } | .PciVendorId
        _m09 uint8_t           pci_bus_number;        //{ +0x001c    +0x001c    +0x001c    } | .PciBusNumber
        _m10 uint16_t          pci_bus_segment;       //{ +0x001e    +0x001e    +0x001e    } | .PciBusSegment
        _m11 uint8_t           pci_slot_number;       //{ +0x0020    +0x0020    +0x0020    } | .PciSlotNumber
        _m12 uint8_t           pci_function_number;   //{ +0x0021    +0x0021    +0x0021    } | .PciFunctionNumber
        _m13 uint32_t          pci_flags;             //{ +0x0024    +0x0024    +0x0024    } | .PciFlags
        _m14 struct nt::guid_t system_guid;           //{ +0x0028    +0x0028    +0x0028    } | .SystemGUID
        _m15 uint8_t           is_mmio_device;        //{ +0x0038    +0x0038    +0x0038    } | .IsMMIODevice
        _m16 uint8_t           terminal_type;         //{ +0x0039    +0x0039    +0x0039    } | .TerminalType
        _m17 uint8_t           interface_type;        //{ +0x003a    +0x003a    +0x003a    } | .InterfaceType
        _m18 uint8_t           register_bit_width;    //{ +0x003b    +0x003b    +0x003b    } | .RegisterBitWidth
        _m19 uint8_t           register_access_size;  //{ +0x003c    +0x003c    +0x003c    } | .RegisterAccessSize
                                                    
        SDK_MAGIC_PROPERTIES( "_HEADLESS_LOADER_BLOCK.$", 0x40, true, 0x29b2c9e8fc1c756e );                     
        SDK_FIXED_SIZE( headless_loader_block_t, 0x40 );                     
    };                                              
};
#include "magic/headless_loader_block_t.end.hpp"
SDK_VERIFY( struct nt::headless_loader_block_t, 0x40 );
