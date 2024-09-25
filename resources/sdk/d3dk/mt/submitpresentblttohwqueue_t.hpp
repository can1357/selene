#pragma once
#include <sdkgen/support_library.hpp>
#include "present_t.hpp"

#include "magic/submitpresentblttohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitpresentblttohwqueue_t                             
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                   h_hw_queue;                  //{ +0x0000    } | .hHwQueue
        _m01 uint64_t                   hw_queue_progress_fence_id;  //{ +0x0008    } | .HwQueueProgressFenceId
        _m02 struct d3dk::mt::present_t private_present_data;        //{ +0x0010    } | .PrivatePresentData
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE.$", 0x0, false, 0x99d922fb2746714b );                           
        SDK_FIXED_SIZE( submitpresentblttohwqueue_t, 0x5e8 );                           
    };                                                             
};
#include "magic/submitpresentblttohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitpresentblttohwqueue_t, 0x5e8 );
