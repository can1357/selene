#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/present_stats_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_STATS]
    // => WDK 10 (NV)
    //
    struct present_stats_t                  
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t present_count;          //{ +0x0000    } | .PresentCount
        _m01 uint32_t present_refresh_count;  //{ +0x0004    } | .PresentRefreshCount
        _m02 uint32_t sync_refresh_count;     //{ +0x0008    } | .SyncRefreshCount
        _m03 int64_t  sync_qpc_time;          //{ +0x0010    } | .SyncQPCTime
        _m04 int64_t  sync_gpu_time;          //{ +0x0018    } | .SyncGPUTime
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_STATS.$", 0x0, false, 0x321e6b9352bcf88b );                      
        SDK_FIXED_SIZE( present_stats_t, 0x20 );                      
    };                                      
};
#include "magic/present_stats_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_stats_t, 0x20 );
