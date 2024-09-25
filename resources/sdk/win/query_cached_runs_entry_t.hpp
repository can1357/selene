#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_cached_runs_entry_t.start.hpp"
namespace win
{
    // [struct _QUERY_CACHED_RUNS_ENTRY]
    // => Windows 11
    //
    struct query_cached_runs_entry_t    
    {                                   
        // Windows 11                   
        //                              
        _m00 uint32_t next_entry_offset;  //{ +0x0000    } | .NextEntryOffset
        _m01 uint32_t tier_name_offset;   //{ +0x0004    } | .TierNameOffset
        _m02 uint32_t tier_name_length;   //{ +0x0008    } | .TierNameLength
        _m03 uint32_t media_type;         //{ +0x000c    } | .MediaType
        _m04 int64_t  longest_freed_run;  //{ +0x0010    } | .LongestFreedRun
        _m05 int64_t  alignment;          //{ +0x0018    } | .Alignment
        _m06 uint32_t total_bins;         //{ +0x0020    } | .TotalBins
        _m07 uint32_t bins_matched;       //{ +0x0024    } | .BinsMatched
        _m08 uint32_t bins_returned;      //{ +0x0028    } | .BinsReturned
        _m09 uint32_t bins_offset;        //{ +0x002c    } | .BinsOffset
        _m10 uint32_t max_runs;           //{ +0x0030    } | .MaxRuns
        _m11 uint32_t total_runs;         //{ +0x0034    } | .TotalRuns
        _m12 uint32_t runs_matched;       //{ +0x0038    } | .RunsMatched
        _m13 uint32_t runs_returned;      //{ +0x003c    } | .RunsReturned
        _m14 uint32_t runs_offset;        //{ +0x0040    } | .RunsOffset
                                        
        SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_ENTRY.$", 0x0, false, 0x87541ddbec90a20b );                  
        SDK_FIXED_SIZE( query_cached_runs_entry_t, 0x48 );                  
    };                                  
};
#include "magic/query_cached_runs_entry_t.end.hpp"
SDK_VERIFY( struct win::query_cached_runs_entry_t, 0x48 );
