#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_presence_parameters_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEVICE_PRESENCE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_presence_parameters_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint16_t vendor_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VendorID
        _m03 uint16_t device_id;         //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .DeviceID
        _m04 uint8_t  revision_id;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RevisionID
        _m05 uint16_t sub_vendor_id;     //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .SubVendorID
        _m06 uint16_t sub_system_id;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SubSystemID
        _m07 uint8_t  base_class;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .BaseClass
        _m08 uint8_t  sub_class;         //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .SubClass
        _m09 uint8_t  prog_if;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ProgIf
                                       
        SDK_NONVOL_PROPERTIES( "_PCI_DEVICE_PRESENCE_PARAMETERS.$", 0x18, true, 0xa9dbf8d791ca7c0d );              
        SDK_FIXED_SIZE( device_presence_parameters_t, 0x18 );              
    };                                 
};
#include "magic/device_presence_parameters_t.end.hpp"
SDK_VERIFY( struct pci::device_presence_parameters_t, 0x18 );
