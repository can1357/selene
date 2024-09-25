#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixdevice_id_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIXDEVICE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcixdevice_id_t            
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t vendor_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VendorId
        _m01 uint16_t device_id;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DeviceId
        _m02 uint24_t class_code;       //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .ClassCode
        _m03 uint8_t  function_number;  //{ +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 } | .FunctionNumber
        _m04 uint8_t  device_number;    //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .DeviceNumber
        _m05 uint8_t  bus_number;       //{ +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  } | .BusNumber
        _m06 uint8_t  segment_number;   //{ +0x0008@16 +0x0008@16 +0x0008@16 +0x0008@16 +0x0008@16 } | .SegmentNumber
                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXDEVICE_ID.$", 0x10, true, 0xd36e21b1f5066653 );                
        SDK_FIXED_SIZE( pcixdevice_id_t, 0x10 );                
    };                                
};
#include "magic/pcixdevice_id_t.end.hpp"
SDK_VERIFY( struct whea::pcixdevice_id_t, 0x10 );
