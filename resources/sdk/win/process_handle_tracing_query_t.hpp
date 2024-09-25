#pragma once
#include <sdkgen/support_library.hpp>
#include "process_handle_tracing_entry_t.hpp"

#include "magic/process_handle_tracing_query_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_TRACING_QUERY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_handle_tracing_query_t 
    {                                     
        using handle_trace_t = sdk::array<struct win::process_handle_tracing_entry_t, 1>;             
                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                
        _m00 void*           handle;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint32_t        total_traces;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalTraces
        _m02 handle_trace_t  handle_trace;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HandleTrace
                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_HANDLE_TRACING_QUERY.$", 0xb0, true, 0x39a5857cb6b70668 );             
        SDK_FIXED_SIZE( process_handle_tracing_query_t, 0xb0 );             
    };                                    
};
#include "magic/process_handle_tracing_query_t.end.hpp"
SDK_VERIFY( struct win::process_handle_tracing_query_t, 0xb0 );
