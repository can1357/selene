#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/call_frame_t.start.hpp"
namespace win
{
    // [struct _CALL_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_frame_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* return_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReturnAddress
        _m01 void* param1_home;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Param1Home
        _m02 void* param2_home;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Param2Home
        _m03 void* param3_home;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Param3Home
        _m04 void* param4_home;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Param4Home
                                  
        SDK_MAGIC_PROPERTIES( "_CALL_FRAME.$", 0x28, true, 0x3512f4a21fdbfd87 );               
        SDK_FIXED_SIZE( call_frame_t, 0x28 );               
    };                            
};
#include "magic/call_frame_t.end.hpp"
SDK_VERIFY( struct win::call_frame_t, 0x28 );
