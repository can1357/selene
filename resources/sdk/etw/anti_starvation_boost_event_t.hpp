#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/anti_starvation_boost_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_ANTI_STARVATION_BOOST_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct anti_starvation_boost_event_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t thread_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint16_t processor_index;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessorIndex
        _m02 int8_t   old_priority;       //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .OldPriority
                                        
        SDK_MAGIC_PROPERTIES( "_ETW_ANTI_STARVATION_BOOST_EVENT.$", 0x8, true, 0x8fa516f5b9448cc0 );                
        SDK_FIXED_SIZE( anti_starvation_boost_event_t, 0x8 );                
    };                                  
};
#include "magic/anti_starvation_boost_event_t.end.hpp"
SDK_VERIFY( struct etw::anti_starvation_boost_event_t, 0x8 );
