#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_ai_params_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_OBJECT_AI_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_ai_params_t         
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t constraint_mask;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ConstraintMask
                                      
        SDK_NONVOL_PROPERTIES( "_SECURITY_OBJECT_AI_PARAMS.$", 0x8, true, 0x81baf3c4ab8c85 );                
        SDK_FIXED_SIZE( object_ai_params_t, 0x8 );                
    };                                
};
#include "magic/object_ai_params_t.end.hpp"
SDK_VERIFY( struct sec::object_ai_params_t, 0x8 );
