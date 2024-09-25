#pragma once
#include <sdkgen/support_library.hpp>
#include "present_rgns_t.hpp"
#include "outputduplpresentflags_t.hpp"

#include "magic/outputduplpresenttohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct outputduplpresenttohwqueue_t                                         
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                                  h_source;                  //{ +0x0000    } | .hSource
        _m01 uint32_t                                  vid_pn_source_id;          //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t                                  broadcast_hw_queue_count;  //{ +0x0008    } | .BroadcastHwQueueCount
        _m03 uint32_t*                                 h_hw_queues;               //{ +0x0010    } | .hHwQueues
        _m04 struct d3dk::mt::present_rgns_t           present_regions;           //{ +0x0018    } | .PresentRegions
        _m05 struct d3dk::mt::outputduplpresentflags_t flags;                     //{ +0x0038    } | .Flags
        _m06 uint32_t                                  h_indirect_hw_queue;       //{ +0x003c    } | .hIndirectHwQueue
                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.$", 0x0, false, 0x6cd95d39cfc7d613 );                         
        SDK_FIXED_SIZE( outputduplpresenttohwqueue_t, 0x40 );                         
    };                                                                          
};
#include "magic/outputduplpresenttohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputduplpresenttohwqueue_t, 0x40 );
