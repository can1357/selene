#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serial_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_SERIAL_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct serial_device_data_t  
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint16_t version;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t revision;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint32_t baud_clock;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BaudClock
                                 
        SDK_NONVOL_PROPERTIES( "_CM_SERIAL_DEVICE_DATA.$", 0x8, true, 0xeac343a9112d787c );           
        SDK_FIXED_SIZE( serial_device_data_t, 0x8 );           
    };                           
};
#include "magic/serial_device_data_t.end.hpp"
SDK_VERIFY( struct cm::serial_device_data_t, 0x8 );
