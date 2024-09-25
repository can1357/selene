#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dl_oui_t.start.hpp"
namespace ndis
{
    // [union _DL_OUI]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union dl_oui_t                        
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 sdk::array<uint8_t, 3> byte;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte
        _m01 uint1_t                group;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Group
        _m02 uint1_t                local;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Local
                                          
        SDK_NONVOL_PROPERTIES( "_DL_OUI.$", 0x3, true, 0x8c9a879f12d92833 );      
        SDK_FIXED_SIZE( dl_oui_t, 0x3 );      
    };                                    
};
#include "magic/dl_oui_t.end.hpp"
SDK_VERIFY( union ndis::dl_oui_t, 0x3 );
