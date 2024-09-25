#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_idle_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_IDLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_idle_information_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t idle_time;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleTime
        _m01 uint64_t c1_time;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .C1Time
        _m02 uint64_t c2_time;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .C2Time
        _m03 uint64_t c3_time;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .C3Time
        _m04 uint32_t c1_transitions;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .C1Transitions
        _m05 uint32_t c2_transitions;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .C2Transitions
        _m06 uint32_t c3_transitions;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .C3Transitions
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_IDLE_INFORMATION.$", 0x30, true, 0x7f1e846937ae252f );               
        SDK_FIXED_SIZE( system_processor_idle_information_t, 0x30 );               
    };                                        
};
#include "magic/system_processor_idle_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_idle_information_t, 0x30 );
