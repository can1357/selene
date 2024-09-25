#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_entropy_timing_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ENTROPY_TIMING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_entropy_timing_information_t                                   
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                       
        _m00 sdk::function<void(void*, uint32_t)>*        entropy_routine;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntropyRoutine
        _m01 sdk::function<void(void*, uint32_t, void*)>* initialization_routine;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitializationRoutine
        _m02 void*                                        initialization_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InitializationContext
                                                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ENTROPY_TIMING_INFORMATION.$", 0x18, true, 0x714efb1bb63615a1 );                       
        SDK_FIXED_SIZE( system_entropy_timing_information_t, 0x18 );                       
    };                                                                           
};
#include "magic/system_entropy_timing_information_t.end.hpp"
SDK_VERIFY( struct win::system_entropy_timing_information_t, 0x18 );
