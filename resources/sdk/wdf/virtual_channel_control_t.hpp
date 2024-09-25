#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_channel_control_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_CHANNEL_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_channel_control_t             
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  load_vc_arbitration_table;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LoadVCArbitrationTable
        _m01 uint3_t  vc_arbitration_select;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VCArbitrationSelect
        _m02 uint12_t rsvd_p;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RsvdP
        _m03 uint16_t as_ushort;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_CHANNEL_CONTROL.$", 0x2, true, 0x3eb48edd699c0427 );                          
        SDK_FIXED_SIZE( virtual_channel_control_t, 0x2 );                          
    };                                          
};
#include "magic/virtual_channel_control_t.end.hpp"
SDK_VERIFY( union wdf::virtual_channel_control_t, 0x2 );
