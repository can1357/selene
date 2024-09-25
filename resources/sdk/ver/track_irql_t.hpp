#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_irql_t.start.hpp"
namespace ver
{
    // [struct _VI_TRACK_IRQL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct track_irql_t                       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                    
        _m00 void*                thread;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 uint8_t              old_irql;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OldIrql
        _m02 uint8_t              new_irql;     //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .NewIrql
        _m03 uint16_t             processor;    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Processor
        _m04 uint32_t             tick_count;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TickCount
        _m05 sdk::array<void*, 5> stack_trace;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackTrace
                                              
        SDK_MAGIC_PROPERTIES( "_VI_TRACK_IRQL.$", 0x38, true, 0xf9b18085e5c3d5f6 );            
        SDK_FIXED_SIZE( track_irql_t, 0x38 );            
    };                                        
};
#include "magic/track_irql_t.end.hpp"
SDK_VERIFY( struct ver::track_irql_t, 0x38 );
