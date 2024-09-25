#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dvtargetdevice_t.start.hpp"
namespace tag
{
    // [struct tagDVTARGETDEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dvtargetdevice_t                               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               td_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tdSize
        _m01 uint16_t               td_driver_name_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .tdDriverNameOffset
        _m02 uint16_t               td_device_name_offset;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .tdDeviceNameOffset
        _m03 uint16_t               td_port_name_offset;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .tdPortNameOffset
        _m04 uint16_t               td_ext_devmode_offset;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .tdExtDevmodeOffset
        _m05 sdk::array<uint8_t, 1> td_data;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .tdData
                                                          
        SDK_MAGIC_PROPERTIES( "tagDVTARGETDEVICE.$", 0x10, true, 0xb45f3a19c155a1af );                      
        SDK_FIXED_SIZE( dvtargetdevice_t, 0x10 );                      
    };                                                    
};
#include "magic/dvtargetdevice_t.end.hpp"
SDK_VERIFY( struct tag::dvtargetdevice_t, 0x10 );
