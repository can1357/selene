#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_channel_capabilities1_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_CHANNEL_CAPABILITIES1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_channel_capabilities1_t                
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                               
        _m00 varuint_t extended_vc_count;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExtendedVCCount
        _m01 uint1_t   rsvd_p1;                            //{ +0x0000@3  +0x0000@2  +0x0000@3  +0x0000@3  +0x0000@3  } | .RsvdP1
        _m02 varuint_t low_priority_extended_vc_count;     //{ +0x0000@4  +0x0000@3  +0x0000@4  +0x0000@4  +0x0000@4  } | .LowPriorityExtendedVCCount
        _m03 uint1_t   rsvd_p2;                            //{ +0x0000@7  +0x0000@5  +0x0000@7  +0x0000@7  +0x0000@7  } | .RsvdP2
        _m04 uint2_t   reference_clock;                    //{ +0x0000@8  +0x0000@6  +0x0000@8  +0x0000@8  +0x0000@8  } | .ReferenceClock
        _m05 uint2_t   port_arbitration_table_entry_size;  //{ +0x0000@10 +0x0000@8  +0x0000@10 +0x0000@10 +0x0000@10 } | .PortArbitrationTableEntrySize
        _m06 uint20_t  rsvd_p3;                            //{ +0x0000@12 +0x0000@10 +0x0000@12 +0x0000@12 +0x0000@12 } | .RsvdP3
        _m07 uint32_t  as_ulong;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                         
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_CHANNEL_CAPABILITIES1.$", 0x4, true, 0xf68d5440c081b2ec );                                  
        SDK_FIXED_SIZE( virtual_channel_capabilities1_t, 0x4 );                                  
    };                                                   
};
#include "magic/virtual_channel_capabilities1_t.end.hpp"
SDK_VERIFY( union wdf::virtual_channel_capabilities1_t, 0x4 );
