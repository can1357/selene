#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fw_frame_t.start.hpp"
namespace win
{
    // [struct FwFrame]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fw_frame_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t p1_home;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P1Home
        _m01 uint64_t p2_home;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .P2Home
        _m02 uint64_t p3_home;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .P3Home
        _m03 uint64_t p4_home;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .P4Home
        _m04 uint64_t saved_rcx;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SavedRcx
        _m05 uint64_t saved_rdx;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SavedRdx
        _m06 uint64_t saved_r8;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SavedR8
        _m07 uint64_t saved_r9;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SavedR9
                                
        SDK_MAGIC_PROPERTIES( "FwFrame.$", 0x48, true, 0xbddc90be83984fac );          
        SDK_FIXED_SIZE( fw_frame_t, 0x48 );          
    };                          
};
#include "magic/fw_frame_t.end.hpp"
SDK_VERIFY( struct win::fw_frame_t, 0x48 );
