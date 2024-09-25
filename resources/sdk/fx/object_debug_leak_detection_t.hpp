#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_debug_leak_detection_t.start.hpp"
namespace fx
{
    // [struct FxObjectDebugLeakDetection]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_debug_leak_detection_t   
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 uint8_t          enabled;       //{ +0x0000    +0x0000    +0x0000    } | .Enabled
        _m01 int32_t          limit;         //{ +0x0004    +0x0004    +0x0004    } | .Limit
        _m02 volatile int32_t limit_scaled;  //{ +0x0008    +0x0008    +0x0008    } | .LimitScaled
        _m03 volatile int32_t object_cnt;    //{ +0x000c    +0x000c    +0x000c    } | .ObjectCnt
        _m04 volatile int32_t device_cnt;    //{ +0x0010    +0x0010    +0x0010    } | .DeviceCnt
                                           
        SDK_MAGIC_PROPERTIES( "FxObjectDebugLeakDetection.$", 0x14, true, 0xa31a4181f6ce27c9 );             
        SDK_FIXED_SIZE( object_debug_leak_detection_t, 0x14 );             
    };                                     
};
#include "magic/object_debug_leak_detection_t.end.hpp"
SDK_VERIFY( struct fx::object_debug_leak_detection_t, 0x14 );
