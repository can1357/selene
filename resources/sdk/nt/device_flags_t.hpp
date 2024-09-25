#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_flags_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_flags_t        
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint1_t failed;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Failed
        _m01 uint1_t read_only;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ReadOnly
        _m02 uint1_t removable;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Removable
        _m03 uint1_t console_in;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ConsoleIn
        _m04 uint1_t console_out;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ConsoleOut
        _m05 uint1_t input;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Input
        _m06 uint1_t output;       //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Output
                                 
        SDK_NONVOL_PROPERTIES( "_DEVICE_FLAGS.$", 0x4, true, 0xc6b288024f7d1dd4 );            
        SDK_FIXED_SIZE( device_flags_t, 0x4 );            
    };                           
};
#include "magic/device_flags_t.end.hpp"
SDK_VERIFY( struct nt::device_flags_t, 0x4 );
