#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforsynchronizationobjectfromgpu_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU]
    // => WDK 10 (NV)
    //
    struct waitforsynchronizationobjectfromgpu_t         
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t        h_context;                    //{ +0x0000    } | .hContext
        _m01 uint32_t        object_count;                 //{ +0x0004    } | .ObjectCount
        _m02 const uint32_t* object_handle_array;          //{ +0x0008    } | .ObjectHandleArray
        _m03 const uint64_t* monitored_fence_value_array;  //{ +0x0010    } | .MonitoredFenceValueArray
        _m04 uint64_t        fence_value;                  //{ +0x0010    } | .FenceValue
                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.$", 0x0, false, 0x12333f3b44f0563e );                            
        SDK_FIXED_SIZE( waitforsynchronizationobjectfromgpu_t, 0x50 );                            
    };                                                   
};
#include "magic/waitforsynchronizationobjectfromgpu_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforsynchronizationobjectfromgpu_t, 0x50 );
