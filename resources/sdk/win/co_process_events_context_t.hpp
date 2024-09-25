#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_process_events_context_t.start.hpp"
namespace win
{
    // [struct CO_PROCESS_EVENTS_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_process_events_context_t         
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 sdk::array<uint64_t, 12> internal;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Internal
                                               
        SDK_MAGIC_PROPERTIES( "CO_PROCESS_EVENTS_CONTEXT.$", 0x60, true, 0x1e78ec355eee562c );         
        SDK_FIXED_SIZE( co_process_events_context_t, 0x60 );         
    };                                         
};
#include "magic/co_process_events_context_t.end.hpp"
SDK_VERIFY( struct win::co_process_events_context_t, 0x60 );
