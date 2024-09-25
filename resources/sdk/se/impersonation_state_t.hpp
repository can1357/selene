#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/impersonation_level_t.hpp"

#include "magic/impersonation_state_t.start.hpp"
namespace se
{
    // [struct _SE_IMPERSONATION_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct impersonation_state_t                            
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 void*                           token;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Token
        _m01 uint8_t                         copy_on_open;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CopyOnOpen
        _m02 uint8_t                         effective_only;  //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .EffectiveOnly
        _m03 enum sec::impersonation_level_t level;           //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Level
                                                            
        SDK_NONVOL_PROPERTIES( "_SE_IMPERSONATION_STATE.$", 0x10, true, 0x450fc76bca4e22f5 );               
        SDK_FIXED_SIZE( impersonation_state_t, 0x10 );               
    };                                                      
};
#include "magic/impersonation_state_t.end.hpp"
SDK_VERIFY( struct se::impersonation_state_t, 0x10 );
