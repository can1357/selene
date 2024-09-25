#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_features_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HEAP_FEATURES]
    // => Windows 10 v1607
    //
    struct heap_features_t                           
    {                                                
        // Windows 10 v1607                                
        //                                           
        _m00 uint1_t use_segment_heap;                 //{ +0x0000@0  } | .UseSegmentHeap
        _m01 uint1_t enable_tagging;                   //{ +0x0000@1  } | .EnableTagging
        _m02 uint1_t enable_stack_tracking;            //{ +0x0000@2  } | .EnableStackTracking
        _m03 uint1_t disable_dbg_break_on_corruption;  //{ +0x0000@3  } | .DisableDbgBreakOnCorruption
                                                     
        SDK_MAGIC_PROPERTIES( "_RTLP_HEAP_FEATURES.$", 0x0, false, 0x861ade9f3c4bada9 );                                
        SDK_FIXED_SIZE( heap_features_t, 0x1 );                                
    };                                               
};
#include "magic/heap_features_t.end.hpp"
SDK_VERIFY( struct rtlp::heap_features_t, 0x1 );
