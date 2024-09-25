#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tracker_t.start.hpp"
namespace verf
{
    // [struct _VF_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tracker_t                
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t tracker_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TrackerFlags
        _m01 uint32_t tracker_size;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TrackerSize
        _m02 uint32_t tracker_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrackerIndex
        _m03 uint32_t trace_depth;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TraceDepth
                                    
        SDK_MAGIC_PROPERTIES( "_VF_TRACKER.$", 0x10, true, 0xb2004020eae7dddb );              
        SDK_FIXED_SIZE( tracker_t, 0x10 );              
    };                              
};
#include "magic/tracker_t.end.hpp"
SDK_VERIFY( struct verf::tracker_t, 0x10 );
