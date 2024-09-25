#pragma once
#include <sdkgen/support_library.hpp>
#include "avrf_process_handle_tracing_entry_wow64_t.hpp"

#include "magic/avrf_process_handle_tracing_query_wow64_t.start.hpp"
namespace win
{
    // [struct _AVRF_PROCESS_HANDLE_TRACING_QUERY_WOW64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avrf_process_handle_tracing_query_wow64_t
    {                                               
        using handle_trace_t = sdk::array<struct win::avrf_process_handle_tracing_entry_wow64_t, 1>;             
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                
        _m00 uint64_t        handle;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint32_t        total_traces;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalTraces
        _m02 handle_trace_t  handle_trace;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandleTrace
                                                    
        SDK_MAGIC_PROPERTIES( "_AVRF_PROCESS_HANDLE_TRACING_QUERY_WOW64.$", 0xb0, true, 0x76b4d78356a38f04 );             
        SDK_FIXED_SIZE( avrf_process_handle_tracing_query_wow64_t, 0xb0 );             
    };                                              
};
#include "magic/avrf_process_handle_tracing_query_wow64_t.end.hpp"
SDK_VERIFY( struct win::avrf_process_handle_tracing_query_wow64_t, 0xb0 );
