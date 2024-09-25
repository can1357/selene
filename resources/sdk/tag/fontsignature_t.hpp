#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fontsignature_t.start.hpp"
namespace tag
{
    // [struct tagFONTSIGNATURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fontsignature_t                  
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint32_t, 4> fs_usb;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .fsUsb
        _m01 sdk::array<uint32_t, 2> fs_csb;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .fsCsb
                                            
        SDK_NONVOL_PROPERTIES( "tagFONTSIGNATURE.$", 0x18, true, 0xf5baf37880e18e7d );       
        SDK_FIXED_SIZE( fontsignature_t, 0x18 );       
    };                                      
};
#include "magic/fontsignature_t.end.hpp"
SDK_VERIFY( struct tag::fontsignature_t, 0x18 );
