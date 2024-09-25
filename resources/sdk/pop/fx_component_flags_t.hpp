#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_component_flags_t.start.hpp"
namespace pop
{
    // [union _POP_FX_COMPONENT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fx_component_flags_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 int32_t  value;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 int32_t  value2;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Value2
        _m02 uint30_t ref_count;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RefCount
        _m03 uint1_t  idling;                  //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Idling
        _m04 uint1_t  active;                  //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .Active
        _m05 uint1_t  critical_idle_override;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .CriticalIdleOverride
        _m06 uint1_t  resident_override;       //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .ResidentOverride
                                             
        SDK_MAGIC_PROPERTIES( "_POP_FX_COMPONENT_FLAGS.$", 0x8, true, 0xdd0f6acd094e4677 );                       
        SDK_FIXED_SIZE( fx_component_flags_t, 0x8 );                       
    };                                       
};
#include "magic/fx_component_flags_t.end.hpp"
SDK_VERIFY( union pop::fx_component_flags_t, 0x8 );
