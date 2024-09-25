#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reentrant_sta_state_t.start.hpp"
namespace win
{
    // [class ReentrantSTAState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class reentrant_sta_state_t                                     
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                          
        _m00 bool     asta_call_reentrancy_guard_explicitly_enabled;  //{ +0x0000    +0x0000    +0x0000    } | ._astaCallReentrancyGuardExplicitlyEnabled
        _m01 uint32_t incoming_winrt_async_call_count;                //{ +0x0004    +0x0004    +0x0004    } | ._incomingWinrtAsyncCallCount
                                                                    
        SDK_MAGIC_PROPERTIES( "ReentrantSTAState.$", 0x8, true, 0x9a52f154b918982a );                                              
        SDK_FIXED_SIZE( reentrant_sta_state_t, 0x8 );                                              
    };                                                              
};
#include "magic/reentrant_sta_state_t.end.hpp"
SDK_VERIFY( class win::reentrant_sta_state_t, 0x8 );
