#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixbus_id_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIXBUS_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pcixbus_id_t            
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint8_t  bus_number;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusNumber
        _m01 uint8_t  bus_segment;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .BusSegment
        _m02 uint16_t as_ushort;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXBUS_ID.$", 0x2, true, 0xc85cf714e481da74 );            
        SDK_FIXED_SIZE( pcixbus_id_t, 0x2 );            
    };                            
};
#include "magic/pcixbus_id_t.end.hpp"
SDK_VERIFY( union whea::pcixbus_id_t, 0x2 );
