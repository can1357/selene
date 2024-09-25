#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kclock_increment_trace_t.start.hpp"
namespace nt
{
    // [struct _KCLOCK_INCREMENT_TRACE]
    // => Windows 11
    //
    struct kclock_increment_trace_t       
    {                                     
        // Windows 11                     
        //                                
        _m00 uint32_t actual_increment;     //{ +0x0000    } | .ActualIncrement
        _m01 uint32_t requested_increment;  //{ +0x0004    } | .RequestedIncrement
        _m02 uint64_t interrupt_time;       //{ +0x0008    } | .InterruptTime
        _m03 uint64_t performance_counter;  //{ +0x0010    } | .PerformanceCounter
        _m04 uint8_t  one_shot;             //{ +0x0018    } | .OneShot
                                          
        SDK_MAGIC_PROPERTIES( "_KCLOCK_INCREMENT_TRACE.$", 0x0, false, 0xedbfc7471f577180 );                    
        SDK_FIXED_SIZE( kclock_increment_trace_t, 0x20 );                    
    };                                    
};
#include "magic/kclock_increment_trace_t.end.hpp"
SDK_VERIFY( struct nt::kclock_increment_trace_t, 0x20 );
