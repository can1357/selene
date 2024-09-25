#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pccard_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_PCCARD_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pccard_device_data_t                          
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint8_t                 flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint8_t                 error_code;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ErrorCode
        _m02 uint32_t                bus_data;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BusData
        _m03 uint32_t                device_id;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceId
        _m04 uint32_t                legacy_base_address;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .LegacyBaseAddress
        _m05 sdk::array<uint8_t, 16> irq_map;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IRQMap
                                                         
        SDK_NONVOL_PROPERTIES( "_CM_PCCARD_DEVICE_DATA.$", 0x20, true, 0xad7ca75c9c31bc54 );                    
        SDK_FIXED_SIZE( pccard_device_data_t, 0x20 );                    
    };                                                   
};
#include "magic/pccard_device_data_t.end.hpp"
SDK_VERIFY( struct cm::pccard_device_data_t, 0x20 );
