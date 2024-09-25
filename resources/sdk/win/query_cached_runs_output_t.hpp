#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_cached_runs_output_t.start.hpp"
namespace win
{
    // [struct _QUERY_CACHED_RUNS_OUTPUT]
    // => Windows 11
    //
    struct query_cached_runs_output_t    
    {                                    
        // Windows 11                    
        //                               
        _m00 uint32_t version;             //{ +0x0000    } | .Version
        _m01 uint32_t length;              //{ +0x0004    } | .Length
        _m02 uint32_t first_entry_offset;  //{ +0x0008    } | .FirstEntryOffset
                                         
        SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_OUTPUT.$", 0x0, false, 0x3dfe41c7d2d5ed46 );                   
        SDK_FIXED_SIZE( query_cached_runs_output_t, 0xc );                   
    };                                   
};
#include "magic/query_cached_runs_output_t.end.hpp"
SDK_VERIFY( struct win::query_cached_runs_output_t, 0xc );
