#pragma once
#include <sdkgen/support_library.hpp>
#include "unbiased_timer_t.hpp"

#include "magic/outgoing_call_diagnosis_t.start.hpp"
namespace win
{
    // [class OutgoingCallDiagnosis]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class outgoing_call_diagnosis_t                      
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 class win::unbiased_timer_t timer;            //{ +0x0000    +0x0000    +0x0000    } | ._timer
        _m01 volatile uint64_t           tick_count;       //{ +0x0018    +0x0018    +0x0018    } | ._tickCount
        _m02 uint32_t                    waits_completed;  //{ +0x0020    +0x0020    +0x0020    } | ._waitsCompleted
        _m03 const uint32_t              outer_timeout;    //{ +0x0024    +0x0024    +0x0024    } | ._outerTimeout
        _m04 const uint32_t              call_timeout;     //{ +0x0028    +0x0028    +0x0028    } | ._callTimeout
                                                         
        SDK_MAGIC_PROPERTIES( "OutgoingCallDiagnosis.$", 0x30, true, 0x6cd96ddccf655985 );                
        SDK_FIXED_SIZE( outgoing_call_diagnosis_t, 0x30 );                
    };                                                   
};
#include "magic/outgoing_call_diagnosis_t.end.hpp"
SDK_VERIFY( class win::outgoing_call_diagnosis_t, 0x30 );
