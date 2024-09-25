#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dl_ei48_t.start.hpp"
namespace ndis
{
    // [union _DL_EI48]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union dl_ei48_t                      
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                               
        _m00 sdk::array<uint8_t, 3> byte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte
                                         
        SDK_NONVOL_PROPERTIES( "_DL_EI48.$", 0x3, true, 0x1b8fa250a7d8aa61 );     
        SDK_FIXED_SIZE( dl_ei48_t, 0x3 );     
    };                                   
};
#include "magic/dl_ei48_t.end.hpp"
SDK_VERIFY( union ndis::dl_ei48_t, 0x3 );
