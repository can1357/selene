#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/in_frame_t.start.hpp"
namespace win
{
    // [struct InFrame]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct in_frame_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t p1_home;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P1Home
        _m01 uint64_t p2_home;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .P2Home
        _m02 uint64_t p3_home;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .P3Home
        _m03 uint64_t p4_home;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .P4Home
        _m04 uint64_t saved_rbp;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SavedRbp
        _m05 uint64_t saved_rsi;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SavedRsi
        _m06 uint64_t saved_rdi;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SavedRdi
                                
        SDK_MAGIC_PROPERTIES( "InFrame.$", 0x38, true, 0xc91821efdfff6ad3 );          
        SDK_FIXED_SIZE( in_frame_t, 0x38 );          
    };                          
};
#include "magic/in_frame_t.end.hpp"
SDK_VERIFY( struct win::in_frame_t, 0x38 );
