#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idlestate_event_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLESTATE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idlestate_event_t     
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t new_state;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NewState
        _m01 uint32_t old_state;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OldState
        _m02 uint64_t processors;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
                                 
        SDK_MAGIC_PROPERTIES( "PPM_IDLESTATE_EVENT.$", 0x10, true, 0xcbffca2218fff9da );           
        SDK_FIXED_SIZE( idlestate_event_t, 0x10 );           
    };                           
};
#include "magic/idlestate_event_t.end.hpp"
SDK_VERIFY( struct ppm::idlestate_event_t, 0x10 );
