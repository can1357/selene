#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submitpresentblttohwqueue_t.start.hpp"
namespace dxgi::ddi::cb
{
    // [struct DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitpresentblttohwqueue_t           
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t h_src_allocation;            //{ +0x0000    } | .hSrcAllocation
        _m01 uint32_t h_dst_allocation;            //{ +0x0004    } | .hDstAllocation
        _m02 void*    p_dxgi_context;              //{ +0x0008    } | .pDXGIContext
        _m03 void*    h_hw_queue;                  //{ +0x0010    } | .hHwQueue
        _m04 uint64_t hw_queue_progress_fence_id;  //{ +0x0018    } | .HwQueueProgressFenceId
        _m05 uint32_t private_driver_data_size;    //{ +0x0020    } | .PrivateDriverDataSize
        _m06 void*    p_private_driver_data;       //{ +0x0028    } | .pPrivateDriverData
                                                 
        SDK_NONVOL_PROPERTIES( "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.$", 0x0, false, 0x8b313aa1fe4bef9c );                           
        SDK_FIXED_SIZE( submitpresentblttohwqueue_t, 0x30 );                           
    };                                           
};
#include "magic/submitpresentblttohwqueue_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi::cb::submitpresentblttohwqueue_t, 0x30 );
