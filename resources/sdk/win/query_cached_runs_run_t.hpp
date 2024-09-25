#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_cached_runs_run_t.start.hpp"
namespace win
{
    // [struct _QUERY_CACHED_RUNS_RUN]
    // => Windows 11
    //
    struct query_cached_runs_run_t
    {                             
        // Windows 11       
        //                  
        _m00 int64_t lcn;           //{ +0x0000    } | .Lcn
        _m01 int64_t length;        //{ +0x0008    } | .Length
                                  
        SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_RUN.$", 0x0, false, 0x2bf3a1b90b3ed2e0 );       
        SDK_FIXED_SIZE( query_cached_runs_run_t, 0x10 );       
    };                            
};
#include "magic/query_cached_runs_run_t.end.hpp"
SDK_VERIFY( struct win::query_cached_runs_run_t, 0x10 );
