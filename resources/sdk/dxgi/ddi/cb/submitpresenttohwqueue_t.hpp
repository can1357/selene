#pragma once
#include <sdkgen/support_library.hpp>
#include "../../ddi_flip_interval_type_t.hpp"

#include "magic/submitpresenttohwqueue_t.start.hpp"
namespace dxgi::ddi::cb
{
    // [struct DXGIDDICB_SUBMITPRESENTTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitpresenttohwqueue_t                                           
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 void*                               p_dxgi_context;                //{ +0x0000    } | .pDXGIContext
        _m01 uint32_t*                           broadcast_src_allocations;     //{ +0x0008    } | .BroadcastSrcAllocations
        _m02 uint32_t*                           broadcast_dst_allocations;     //{ +0x0010    } | .BroadcastDstAllocations
        _m03 void**                              h_hw_queues;                   //{ +0x0018    } | .hHwQueues
        _m04 uint32_t                            broadcast_hw_queue_count;      //{ +0x0020    } | .BroadcastHwQueueCount
        _m05 uint32_t                            private_driver_data_size;      //{ +0x0024    } | .PrivateDriverDataSize
        _m06 void*                               p_private_driver_data;         //{ +0x0028    } | .pPrivateDriverData
        _m07 uint8_t                             b_optimize_for_composition;    //{ +0x0030    } | .bOptimizeForComposition
        _m08 int32_t                             sync_interval_override_valid;  //{ +0x0034    } | .SyncIntervalOverrideValid
        _m09 enum dxgi::ddi_flip_interval_type_t sync_interval_override;        //{ +0x0038    } | .SyncIntervalOverride
                                                                              
        SDK_NONVOL_PROPERTIES( "DXGIDDICB_SUBMITPRESENTTOHWQUEUE.$", 0x0, false, 0xc2cf00855e7b3559 );                             
        SDK_FIXED_SIZE( submitpresenttohwqueue_t, 0x40 );                             
    };                                                                        
};
#include "magic/submitpresenttohwqueue_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi::cb::submitpresenttohwqueue_t, 0x40 );
