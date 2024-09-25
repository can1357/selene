#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wire_winrt_async_call_response_block_part1_t.start.hpp"
namespace win
{
    // [struct WireWinrtAsyncCallResponseBlockPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_winrt_async_call_response_block_part1_t    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 uint32_t          async_status;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .asyncStatus
        _m01 uint64_t          u_server_causality_trace_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uServerCausalityTraceId
        _m02 uint32_t          unique;                       //{ +0x0014    +0x0024    +0x0024    +0x0024    } | .unique
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m03 struct nt::guid_t completion_trace_activity;    //{ +0x0010    +0x0010    +0x0010    } | .completionTraceActivity
                                                           
        SDK_MAGIC_PROPERTIES( "WireWinrtAsyncCallResponseBlockPart1.$", 0x28, true, 0x7cdecc4560d8980a );                            
        SDK_DYNAMIC_SIZE( wire_winrt_async_call_response_block_part1_t );                            
    };                                                     
};
#include "magic/wire_winrt_async_call_response_block_part1_t.end.hpp"
