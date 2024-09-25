#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ideal_processor_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_IDEAL_PROCESSOR_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ideal_processor_event_t        
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t thread_id;            //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint32_t old_ideal_processor;  //{ +0x0004    +0x0004    +0x0004    } | .OldIdealProcessor
        _m02 uint32_t new_ideal_processor;  //{ +0x0008    +0x0008    +0x0008    } | .NewIdealProcessor
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_IDEAL_PROCESSOR_EVENT.$", 0xc, true, 0x5d231f03bf31852a );                    
        SDK_FIXED_SIZE( ideal_processor_event_t, 0xc );                    
    };                                    
};
#include "magic/ideal_processor_event_t.end.hpp"
SDK_VERIFY( struct etw::ideal_processor_event_t, 0xc );
