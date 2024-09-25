#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_t.hpp"

#include "magic/sid_t.start.hpp"
namespace se
{
    // [union _SE_SID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union sid_t                             
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 struct nt::sid_t        sid;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Sid
        _m01 sdk::array<uint8_t, 68> buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                                            
        SDK_NONVOL_PROPERTIES( "_SE_SID.$", 0x44, true, 0xb8cbfb4a6495e93a );       
        SDK_FIXED_SIZE( sid_t, 0x44 );       
    };                                      
};
#include "magic/sid_t.end.hpp"
SDK_VERIFY( union se::sid_t, 0x44 );
