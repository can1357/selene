#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/x86_call_frame_t.start.hpp"
namespace win
{
    // [struct _X86_CALL_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x86_call_frame_t              
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t return_address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReturnAddress
        _m01 uint32_t param1;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Param1
        _m02 uint32_t param2;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Param2
        _m03 uint32_t compatibility_area;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CompatibilityArea
                                         
        SDK_MAGIC_PROPERTIES( "_X86_CALL_FRAME.$", 0x10, true, 0xf6b453f34a7c6b76 );                   
        SDK_FIXED_SIZE( x86_call_frame_t, 0x10 );                   
    };                                   
};
#include "magic/x86_call_frame_t.end.hpp"
SDK_VERIFY( struct win::x86_call_frame_t, 0x10 );
