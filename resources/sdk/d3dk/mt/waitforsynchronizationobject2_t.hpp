#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforsynchronizationobject2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2]
    // => WDK 10 (NV)
    //
    struct waitforsynchronizationobject2_t                
    {                                                     
        struct u0_fence_t                                 
        {                                                 
            // WDK 10                                     
            //                                            
            _m03 uint64_t fence_value;                      //{ +0x0000    } | .FenceValue
                                                          
            SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.Fence.$", 0x0, false, 0x8c10dd3e1803b704 );                                
            SDK_FIXED_SIZE( u0_fence_t, 0x8 );                                
        };                                                
                                                          
        // WDK 10                                         
        //                                                
        _m00 uint32_t                 h_context;            //{ +0x0000    } | .hContext
        _m01 uint32_t                 object_count;         //{ +0x0004    } | .ObjectCount
        _m02 sdk::array<uint32_t, 32> object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
        _m04 u0_fence_t               fence;                //{ +0x0088    } | .Fence
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.$", 0x0, false, 0x26524b1b97c18e38 );                    
        SDK_FIXED_SIZE( waitforsynchronizationobject2_t, 0xc8 );                    
    };                                                    
};
#include "magic/waitforsynchronizationobject2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforsynchronizationobject2_t::u0_fence_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::waitforsynchronizationobject2_t, 0xc8 );
