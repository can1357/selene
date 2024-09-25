#pragma once
#include <sdkgen/support_library.hpp>
#include "dl_oui_t.hpp"
#include "dl_ei48_t.hpp"

#include "magic/dl_eui48_t.start.hpp"
namespace ndis
{
    // [union _DL_EUI48]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union dl_eui48_t                     
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                               
        _m00 sdk::array<uint8_t, 6> byte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte
        _m01 union ndis::dl_oui_t   oui;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Oui
        _m02 union ndis::dl_ei48_t  ei48;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Ei48
                                         
        SDK_NONVOL_PROPERTIES( "_DL_EUI48.$", 0x6, true, 0xc55e6319e5cc2989 );     
        SDK_FIXED_SIZE( dl_eui48_t, 0x6 );     
    };                                   
};
#include "magic/dl_eui48_t.end.hpp"
SDK_VERIFY( union ndis::dl_eui48_t, 0x6 );
