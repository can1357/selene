#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_perf_flags_t.start.hpp"
namespace pop
{
    // [union _POP_FX_PERF_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fx_perf_flags_t                  
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 int32_t value;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint3_t progress;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Progress
        _m02 uint2_t synchronicity;          //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .Synchronicity
        _m03 uint1_t request_pep_completed;  //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .RequestPepCompleted
        _m04 uint1_t request_succeeded;      //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .RequestSucceeded
        _m05 uint1_t nested_callback;        //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .NestedCallback
                                           
        SDK_MAGIC_PROPERTIES( "_POP_FX_PERF_FLAGS.$", 0x4, true, 0xf94afb141fd75649 );                      
        SDK_FIXED_SIZE( fx_perf_flags_t, 0x4 );                      
    };                                     
};
#include "magic/fx_perf_flags_t.end.hpp"
SDK_VERIFY( union pop::fx_perf_flags_t, 0x4 );
