#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_channel_status_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_CHANNEL_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_channel_status_t                
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint1_t  vc_arbitration_table_status;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VCArbitrationTableStatus
        _m01 uint15_t rsvd_z;                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RsvdZ
        _m02 uint16_t as_ushort;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                  
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_CHANNEL_STATUS.$", 0x2, true, 0x9c1d5656d05e1eb4 );                            
        SDK_FIXED_SIZE( virtual_channel_status_t, 0x2 );                            
    };                                            
};
#include "magic/virtual_channel_status_t.end.hpp"
SDK_VERIFY( union wdf::virtual_channel_status_t, 0x2 );
