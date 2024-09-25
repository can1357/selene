#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_resource_control_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_RESOURCE_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_resource_control_t              
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint8_t  tc_vc_map;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TcVcMap
        _m01 uint8_t  rsvd_p1;                      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RsvdP1
        _m02 uint1_t  load_port_arbitration_table;  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .LoadPortArbitrationTable
        _m03 uint3_t  port_arbitration_select;      //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .PortArbitrationSelect
        _m04 uint4_t  rsvd_p2;                      //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .RsvdP2
        _m05 uint3_t  vc_id;                        //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .VcID
        _m06 uint4_t  rsvd_p3;                      //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .RsvdP3
        _m07 uint1_t  vc_enable;                    //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .VcEnable
        _m08 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_RESOURCE_CONTROL.$", 0x4, true, 0xfc92f059e3addcd2 );                            
        SDK_FIXED_SIZE( virtual_resource_control_t, 0x4 );                            
    };                                            
};
#include "magic/virtual_resource_control_t.end.hpp"
SDK_VERIFY( union wdf::virtual_resource_control_t, 0x4 );
