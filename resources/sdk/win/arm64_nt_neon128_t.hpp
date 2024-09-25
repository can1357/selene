#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_nt_neon128_t.start.hpp"
namespace win
{
    // [union _ARM64_NT_NEON128]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm64_nt_neon128_t              
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 uint64_t                low;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Low
        _m01 int64_t                 high;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .High
        _m02 sdk::array<double, 2>   d;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .D
        _m03 sdk::array<float, 4>    s;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .S
        _m04 sdk::array<uint16_t, 8> h;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .H
        _m05 sdk::array<uint8_t, 16> b;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .B
                                          
        SDK_NONVOL_PROPERTIES( "_ARM64_NT_NEON128.$", 0x10, true, 0xda30314d062b267f );     
        SDK_FIXED_SIZE( arm64_nt_neon128_t, 0x10 );     
    };                                    
};
#include "magic/arm64_nt_neon128_t.end.hpp"
SDK_VERIFY( union win::arm64_nt_neon128_t, 0x10 );
