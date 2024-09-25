#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/state_name_t.start.hpp"
namespace wnf
{
    // [struct _WNF_STATE_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct state_name_t                   
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                          
        SDK_NONVOL_PROPERTIES( "_WNF_STATE_NAME.$", 0x8, true, 0x745cdf838dee8489 );     
        SDK_FIXED_SIZE( state_name_t, 0x8 );     
    };                                    
};
#include "magic/state_name_t.end.hpp"
SDK_VERIFY( struct wnf::state_name_t, 0x8 );
