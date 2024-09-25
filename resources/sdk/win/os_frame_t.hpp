#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/os_frame_t.start.hpp"
namespace win
{
    // [struct OsFrame]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct os_frame_t            
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t p1_home;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P1Home
        _m01 uint64_t p2_home;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .P2Home
        _m02 uint64_t p3_home;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .P3Home
        _m03 uint64_t p4_home;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .P4Home
        _m04 uint64_t saved_xmm0;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SavedXmm0
        _m05 uint64_t saved_xmm1;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SavedXmm1
        _m06 uint64_t saved_xmm2;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SavedXmm2
        _m07 uint64_t saved_xmm3;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SavedXmm3
                                 
        SDK_MAGIC_PROPERTIES( "OsFrame.$", 0x48, true, 0xe2086e441202adec );           
        SDK_FIXED_SIZE( os_frame_t, 0x48 );           
    };                           
};
#include "magic/os_frame_t.end.hpp"
SDK_VERIFY( struct win::os_frame_t, 0x48 );
