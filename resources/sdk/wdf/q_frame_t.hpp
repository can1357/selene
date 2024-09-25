#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/q_frame_t.start.hpp"
namespace wdf
{
    // [struct QFrame]
    // => Windows 11
    //
    struct q_frame_t                  
    {                                 
        // Windows 11                 
        //                            
        _m00 uint64_t  p1_home;         //{ +0x0000    } | .P1Home
        _m01 uint64_t  p2_home;         //{ +0x0008    } | .P2Home
        _m02 uint64_t  p3_home;         //{ +0x0010    } | .P3Home
        _m03 uint64_t  p4_home;         //{ +0x0018    } | .P4Home
        _m04 uint128_t saved_xmm0;      //{ +0x0020    } | .SavedXmm0
        _m05 uint64_t  saved_rax;       //{ +0x0030    } | .SavedRax
        _m06 uint64_t  saved_rcx;       //{ +0x0038    } | .SavedRcx
        _m07 uint64_t  saved_rdx;       //{ +0x0040    } | .SavedRdx
        _m08 uint64_t  saved_r8;        //{ +0x0048    } | .SavedR8
        _m09 uint64_t  saved_r9;        //{ +0x0050    } | .SavedR9
        _m10 uint64_t  return_address;  //{ +0x0058    } | .ReturnAddress
                                      
        SDK_MAGIC_PROPERTIES( "QFrame.$", 0x0, false, 0x9dbefc6f63a0a3d );               
        SDK_FIXED_SIZE( q_frame_t, 0x60 );               
    };                                
};
#include "magic/q_frame_t.end.hpp"
SDK_VERIFY( struct wdf::q_frame_t, 0x60 );
