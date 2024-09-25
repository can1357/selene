#pragma once
#include <sdkgen/support_library.hpp>
#include "i_message_param_list_t.hpp"

#include "magic/classic_sta_state_t.start.hpp"
namespace win
{
    // [struct ClassicSTAState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct classic_sta_state_t                                                                              
    {                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                                  
        _m00 sdk::array<class win::i_message_param_list_t, 8> a_message_param_lists;                          //{ +0x0008    +0x0018    +0x0018    +0x0018    } | .aMessageParamLists
                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
        //                                                                                                  
        _m01 bool                                             asta_call_reentrancy_guard_explicitly_enabled;  //{ +0x0000    +0x0000    +0x0000    } | ._astaCallReentrancyGuardExplicitlyEnabled
        _m02 uint32_t                                         incoming_winrt_async_call_count;                //{ +0x0004    +0x0004    +0x0004    } | ._incomingWinrtAsyncCallCount
                                                                                                            
        // Windows 10 v1607                                                                                 
        //                                                                                                  
        _m03 bool                                             b_asta_call_reentrancy_guard_explicit;          //{ +0x0088    } | .bASTACallReentrancyGuardExplicit
        _m04 bool                                             b_has_message_filter;                           //{ +0x0089    } | .bHasMessageFilter
        _m05 uint32_t                                         c_incoming_winrt_async_calls;                   //{ +0x008c    } | .cIncomingWinrtAsyncCalls
                                                                                                            
        SDK_MAGIC_PROPERTIES( "ClassicSTAState.$", 0x98, true, 0xd83c74ed65fbe253 );                                              
        SDK_DYNAMIC_SIZE( classic_sta_state_t );                                                            
    };                                                                                                      
};
#include "magic/classic_sta_state_t.end.hpp"
