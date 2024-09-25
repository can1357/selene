#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_signalflags_t.hpp"

#include "magic/signalsynchronizationobject2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2]
    // => WDK 10 (NV)
    //
    struct signalsynchronizationobject2_t                              
    {                                                                  
        struct u0_fence_t                                              
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m06 uint64_t fence_value;                                   //{ +0x0000    } | .FenceValue
                                                                       
            SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.Fence.$", 0x0, false, 0xbece0a2d2ac4d290 );                                    
            SDK_FIXED_SIZE( u0_fence_t, 0x8 );                                    
        };                                                             
                                                                       
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                          h_context;                //{ +0x0000    } | .hContext
        _m01 uint32_t                          object_count;             //{ +0x0004    } | .ObjectCount
        _m02 sdk::array<uint32_t, 32>          object_handle_array;      //{ +0x0008    } | .ObjectHandleArray
        _m03 struct nt::d3dddicb_signalflags_t flags;                    //{ +0x0088    } | .Flags
        _m04 uint32_t                          broadcast_context_count;  //{ +0x008c    } | .BroadcastContextCount
        _m05 sdk::array<uint32_t, 64>          broadcast_context;        //{ +0x0090    } | .BroadcastContext
        _m07 u0_fence_t                        fence;                    //{ +0x0190    } | .Fence
        _m08 void*                             cpu_event_handle;         //{ +0x0190    } | .CpuEventHandle
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.$", 0x0, false, 0x520baf1ec0d1d337 );                        
        SDK_FIXED_SIZE( signalsynchronizationobject2_t, 0x1d0 );                        
    };                                                                 
};
#include "magic/signalsynchronizationobject2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobject2_t::u0_fence_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobject2_t, 0x1d0 );
