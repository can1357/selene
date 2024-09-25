#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfstate_event_t.start.hpp"
namespace ppm
{
    // [struct PPM_PERFSTATE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfstate_event_t    
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t state;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t status;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
        _m02 uint32_t latency;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Latency
        _m03 uint32_t speed;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Speed
        _m04 uint32_t processor;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Processor
                                
        SDK_MAGIC_PROPERTIES( "PPM_PERFSTATE_EVENT.$", 0x14, true, 0xbb094a7622dcd2a8 );          
        SDK_FIXED_SIZE( perfstate_event_t, 0x14 );          
    };                          
};
#include "magic/perfstate_event_t.end.hpp"
SDK_VERIFY( struct ppm::perfstate_event_t, 0x14 );
