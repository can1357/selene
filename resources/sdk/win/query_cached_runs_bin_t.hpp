#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_cached_runs_bin_t.start.hpp"
namespace win
{
    // [struct _QUERY_CACHED_RUNS_BIN]
    // => Windows 11
    //
    struct query_cached_runs_bin_t          
    {                                       
        // Windows 11                       
        //                                  
        _m00 int64_t  max_length;             //{ +0x0000    } | .MaxLength
        _m01 uint32_t run_count;              //{ +0x0008    } | .RunCount
        _m02 uint32_t effective_allocations;  //{ +0x000c    } | .EffectiveAllocations
                                            
        SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_BIN.$", 0x0, false, 0xbc2a524becadf113 );                      
        SDK_FIXED_SIZE( query_cached_runs_bin_t, 0x10 );                      
    };                                      
};
#include "magic/query_cached_runs_bin_t.end.hpp"
SDK_VERIFY( struct win::query_cached_runs_bin_t, 0x10 );
