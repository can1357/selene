#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sd_query_stats_output_t.start.hpp"
namespace win
{
    // [struct _SD_QUERY_STATS_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_query_stats_output_t        
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t sds_stream_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SdsStreamSize
        _m01 uint64_t sds_allocation_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SdsAllocationSize
        _m02 uint64_t sii_stream_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SiiStreamSize
        _m03 uint64_t sii_allocation_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SiiAllocationSize
        _m04 uint64_t sdh_stream_size;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SdhStreamSize
        _m05 uint64_t sdh_allocation_size;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SdhAllocationSize
        _m06 uint64_t num_sd_total;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .NumSDTotal
        _m07 uint64_t num_sd_unused;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .NumSDUnused
                                          
        SDK_NONVOL_PROPERTIES( "_SD_QUERY_STATS_OUTPUT.$", 0x40, true, 0x72171359e7e30960 );                    
        SDK_FIXED_SIZE( sd_query_stats_output_t, 0x40 );                    
    };                                    
};
#include "magic/sd_query_stats_output_t.end.hpp"
SDK_VERIFY( struct win::sd_query_stats_output_t, 0x40 );
