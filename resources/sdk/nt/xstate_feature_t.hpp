#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xstate_feature_t.start.hpp"
namespace nt
{
    // [struct _XSTATE_FEATURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xstate_feature_t  
    {                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t size;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                             
        SDK_NONVOL_PROPERTIES( "_XSTATE_FEATURE.$", 0x8, true, 0xc73bdd836dadceaf );       
        SDK_FIXED_SIZE( xstate_feature_t, 0x8 );       
    };                       
};
#include "magic/xstate_feature_t.end.hpp"
SDK_VERIFY( struct nt::xstate_feature_t, 0x8 );
