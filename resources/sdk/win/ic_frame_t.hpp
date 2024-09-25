#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ic_frame_t.start.hpp"
namespace win
{
    // [struct IcFrame]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ic_frame_t         
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t p1_home;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P1Home
        _m01 uint64_t p2_home;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .P2Home
        _m02 uint64_t p3_home;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .P3Home
        _m03 uint64_t p4_home;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .P4Home
                              
        SDK_MAGIC_PROPERTIES( "IcFrame.$", 0x28, true, 0xda45a37d6066faf5 );        
        SDK_FIXED_SIZE( ic_frame_t, 0x28 );        
    };                        
};
#include "magic/ic_frame_t.end.hpp"
SDK_VERIFY( struct win::ic_frame_t, 0x28 );
