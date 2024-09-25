#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksystem_time_t.start.hpp"
namespace nt
{
    // [struct _KSYSTEM_TIME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ksystem_time_t        
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t low_part;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
        _m01 int32_t  high1_time;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .High1Time
        _m02 int32_t  high2_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .High2Time
                                 
        SDK_NONVOL_PROPERTIES( "_KSYSTEM_TIME.$", 0xc, true, 0x41808c083a0136e0 );           
        SDK_FIXED_SIZE( ksystem_time_t, 0xc );           
    };                           
};
#include "magic/ksystem_time_t.end.hpp"
SDK_VERIFY( struct nt::ksystem_time_t, 0xc );
