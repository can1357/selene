#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/signalsynchronizationobjectfromgpu_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU]
    // => WDK 10 (NV)
    //
    struct signalsynchronizationobjectfromgpu_t          
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t        h_context;                    //{ +0x0000    } | .hContext
        _m01 uint32_t        object_count;                 //{ +0x0004    } | .ObjectCount
        _m02 const uint32_t* object_handle_array;          //{ +0x0008    } | .ObjectHandleArray
        _m03 const uint64_t* monitored_fence_value_array;  //{ +0x0010    } | .MonitoredFenceValueArray
                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU.$", 0x0, false, 0x344a78082d0b14e2 );                            
        SDK_FIXED_SIZE( signalsynchronizationobjectfromgpu_t, 0x50 );                            
    };                                                   
};
#include "magic/signalsynchronizationobjectfromgpu_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobjectfromgpu_t, 0x50 );
