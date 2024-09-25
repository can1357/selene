#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pciexpress_device_id_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIEXPRESS_DEVICE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pciexpress_device_id_t          
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t vendor_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VendorID
        _m01 uint16_t device_id;             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DeviceID
        _m02 uint24_t class_code;            //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .ClassCode
        _m03 uint8_t  function_number;       //{ +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 } | .FunctionNumber
        _m04 uint8_t  device_number;         //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .DeviceNumber
        _m05 uint16_t segment;               //{ +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  } | .Segment
        _m06 uint8_t  primary_bus_number;    //{ +0x0008@24 +0x0008@24 +0x0008@24 +0x0008@24 +0x0008@24 } | .PrimaryBusNumber
        _m07 uint8_t  secondary_bus_number;  //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .SecondaryBusNumber
        _m08 uint13_t slot_number;           //{ +0x000c@11 +0x000c@11 +0x000c@11 +0x000c@11 +0x000c@11 } | .SlotNumber
                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIEXPRESS_DEVICE_ID.$", 0x10, true, 0x7d9ed60754f8bd1 );                     
        SDK_FIXED_SIZE( pciexpress_device_id_t, 0x10 );                     
    };                                     
};
#include "magic/pciexpress_device_id_t.end.hpp"
SDK_VERIFY( struct whea::pciexpress_device_id_t, 0x10 );
