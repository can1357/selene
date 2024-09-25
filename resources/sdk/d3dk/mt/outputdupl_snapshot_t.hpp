#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/outputdupl_context_debug_info_t.hpp"

#include "magic/outputdupl_snapshot_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_SNAPSHOT]
    // => WDK 10 (NV)
    //
    struct outputdupl_snapshot_t                                         
    {                                                                    
        using output_dupl_debug_infos_t = sdk::array<struct nt::outputdupl_context_debug_info_t>;                                 
                                                                         
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                   size;                              //{ +0x0000    } | .Size
        _m01 uint32_t                   session_process_count;             //{ +0x0004    } | .SessionProcessCount
        _m02 uint32_t                   session_active_connections_count;  //{ +0x0008    } | .SessionActiveConnectionsCount
        _m03 uint32_t                   num_vid_pn_sources;                //{ +0x000c    } | .NumVidPnSources
        _m04 uint32_t                   num_output_dupl_contexts;          //{ +0x0010    } | .NumOutputDuplContexts
        _m05 output_dupl_debug_infos_t  output_dupl_debug_infos;           //{ +0x0018    } | .OutputDuplDebugInfos
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_SNAPSHOT.$", 0x0, false, 0xcecf08ddcf676168 );                                 
        SDK_FIXED_SIZE( outputdupl_snapshot_t, 0x18 );                                 
    };                                                                   
};
#include "magic/outputdupl_snapshot_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_snapshot_t, 0x18 );
