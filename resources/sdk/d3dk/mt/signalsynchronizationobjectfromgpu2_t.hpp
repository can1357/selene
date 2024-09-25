#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_signalflags_t.hpp"

#include "magic/signalsynchronizationobjectfromgpu2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2]
    // => WDK 10 (NV)
    //
    struct signalsynchronizationobjectfromgpu2_t                           
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                          object_count;                 //{ +0x0000    } | .ObjectCount
        _m01 const uint32_t*                   object_handle_array;          //{ +0x0008    } | .ObjectHandleArray
        _m02 struct nt::d3dddicb_signalflags_t flags;                        //{ +0x0010    } | .Flags
        _m03 uint32_t                          broadcast_context_count;      //{ +0x0014    } | .BroadcastContextCount
        _m04 const uint32_t*                   broadcast_context_array;      //{ +0x0018    } | .BroadcastContextArray
        _m05 uint64_t                          fence_value;                  //{ +0x0020    } | .FenceValue
        _m06 void*                             cpu_event_handle;             //{ +0x0020    } | .CpuEventHandle
        _m07 const uint64_t*                   monitored_fence_value_array;  //{ +0x0020    } | .MonitoredFenceValueArray
                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.$", 0x0, false, 0x1303fe9a73b9a99 );                            
        SDK_FIXED_SIZE( signalsynchronizationobjectfromgpu2_t, 0x60 );                            
    };                                                                     
};
#include "magic/signalsynchronizationobjectfromgpu2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobjectfromgpu2_t, 0x60 );
