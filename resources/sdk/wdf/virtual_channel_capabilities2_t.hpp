#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_channel_capabilities2_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_CHANNEL_CAPABILITIES2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_channel_capabilities2_t         
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint8_t  vc_arbitration_capability;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VCArbitrationCapability
        _m01 uint16_t rsvd_p;                       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RsvdP
        _m02 uint8_t  vc_arbitration_table_offset;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .VCArbitrationTableOffset
        _m03 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_CHANNEL_CAPABILITIES2.$", 0x4, true, 0x5355b7b29e705a8c );                            
        SDK_FIXED_SIZE( virtual_channel_capabilities2_t, 0x4 );                            
    };                                            
};
#include "magic/virtual_channel_capabilities2_t.end.hpp"
SDK_VERIFY( union wdf::virtual_channel_capabilities2_t, 0x4 );
