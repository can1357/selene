#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/present_stats_dwm_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_STATS_DWM]
    // => WDK 10 (NV)
    //
    struct present_stats_dwm_t                
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t present_count;            //{ +0x0000    } | .PresentCount
        _m01 uint32_t present_refresh_count;    //{ +0x0004    } | .PresentRefreshCount
        _m02 int64_t  present_qpc_time;         //{ +0x0008    } | .PresentQPCTime
        _m03 uint32_t sync_refresh_count;       //{ +0x0010    } | .SyncRefreshCount
        _m04 int64_t  sync_qpc_time;            //{ +0x0018    } | .SyncQPCTime
        _m05 uint32_t custom_present_duration;  //{ +0x0020    } | .CustomPresentDuration
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_STATS_DWM.$", 0x0, false, 0xd4e7edfcff92e52b );                        
        SDK_FIXED_SIZE( present_stats_dwm_t, 0x28 );                        
    };                                        
};
#include "magic/present_stats_dwm_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_stats_dwm_t, 0x28 );
