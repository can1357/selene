#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_xmit_defs_0004_t.hpp"
#include "wire_winrt_async_call_failure_details_part1_t.hpp"
#include "wire_winrt_async_call_success_details_part1_t.hpp"

#include "magic/wire_winrt_async_call_outcome_details_t.start.hpp"
namespace win
{
    // [struct WireWinrtAsyncCallOutcomeDetails]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_winrt_async_call_outcome_details_t           
    {                                                        
        using success_details_t = struct win::wire_winrt_async_call_success_details_part1_t;                
        using failure_details_t = struct win::wire_winrt_async_call_failure_details_part1_t;                
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 enum win::midl_xmit_defs_0004_t outcome;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .outcome
        _m01 enum win::midl_xmit_defs_0004_t switch_is;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .switchIs
        _m02 success_details_t               success_details;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .successDetails
        _m03 failure_details_t               failure_details;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .failureDetails
                                                             
        SDK_MAGIC_PROPERTIES( "WireWinrtAsyncCallOutcomeDetails.$", 0x20, true, 0x5e7f22cebc250daa );                
        SDK_FIXED_SIZE( wire_winrt_async_call_outcome_details_t, 0x20 );                
    };                                                       
};
#include "magic/wire_winrt_async_call_outcome_details_t.end.hpp"
SDK_VERIFY( struct win::wire_winrt_async_call_outcome_details_t, 0x20 );
