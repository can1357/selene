#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_resource_capability_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_RESOURCE_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_resource_capability_t             
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint8_t  port_arbitration_capability;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PortArbitrationCapability
        _m01 uint6_t  rsvd_p1;                        //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RsvdP1
        _m02 uint1_t  undefined;                      //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Undefined
        _m03 uint1_t  reject_snoop_transactions;      //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .RejectSnoopTransactions
        _m04 uint7_t  maximum_time_slots;             //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .MaximumTimeSlots
        _m05 uint1_t  rsvd_p2;                        //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .RsvdP2
        _m06 uint8_t  port_arbitration_table_offset;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .PortArbitrationTableOffset
        _m07 uint32_t as_ulong;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                    
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_RESOURCE_CAPABILITY.$", 0x4, true, 0xf0735d8981cd6c9e );                              
        SDK_FIXED_SIZE( virtual_resource_capability_t, 0x4 );                              
    };                                              
};
#include "magic/virtual_resource_capability_t.end.hpp"
SDK_VERIFY( union wdf::virtual_resource_capability_t, 0x4 );
