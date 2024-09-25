#pragma once
#include <sdkgen/support_library.hpp>
#include "../../ddi_flip_interval_type_t.hpp"

#include "magic/present_t.start.hpp"
namespace dxgi::ddi::cb
{
    // [struct DXGIDDICB_PRESENT]
    // => WDK 10 (NV)
    //
    struct present_t                                                          
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                            h_src_allocation;              //{ +0x0000    } | .hSrcAllocation
        _m01 uint32_t                            h_dst_allocation;              //{ +0x0004    } | .hDstAllocation
        _m02 void*                               p_dxgi_context;                //{ +0x0008    } | .pDXGIContext
        _m03 void*                               h_context;                     //{ +0x0010    } | .hContext
        _m04 uint32_t                            broadcast_context_count;       //{ +0x0018    } | .BroadcastContextCount
        _m05 sdk::array<void*, 64>               broadcast_context;             //{ +0x0020    } | .BroadcastContext
        _m06 uint32_t*                           broadcast_src_allocation;      //{ +0x0220    } | .BroadcastSrcAllocation
        _m07 uint32_t*                           broadcast_dst_allocation;      //{ +0x0228    } | .BroadcastDstAllocation
        _m08 uint32_t                            private_driver_data_size;      //{ +0x0230    } | .PrivateDriverDataSize
        _m09 void*                               p_private_driver_data;         //{ +0x0238    } | .pPrivateDriverData
        _m10 uint8_t                             b_optimize_for_composition;    //{ +0x0240    } | .bOptimizeForComposition
        _m11 int32_t                             sync_interval_override_valid;  //{ +0x0244    } | .SyncIntervalOverrideValid
        _m12 enum dxgi::ddi_flip_interval_type_t sync_interval_override;        //{ +0x0248    } | .SyncIntervalOverride
                                                                              
        SDK_NONVOL_PROPERTIES( "DXGIDDICB_PRESENT.$", 0x0, false, 0x52962c612680b522 );                             
        SDK_FIXED_SIZE( present_t, 0x250 );                                   
    };                                                                        
};
#include "magic/present_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi::cb::present_t, 0x250 );
