#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submitwaitforsyncobjectstohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitwaitforsyncobjectstohwqueue_t   
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t        h_hw_queue;           //{ +0x0000    } | .hHwQueue
        _m01 uint32_t        object_count;         //{ +0x0004    } | .ObjectCount
        _m02 const uint32_t* object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
        _m03 const uint64_t* fence_value_array;    //{ +0x0010    } | .FenceValueArray
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE.$", 0x0, false, 0xd8c1ee51169afa73 );                    
        SDK_FIXED_SIZE( submitwaitforsyncobjectstohwqueue_t, 0x18 );                    
    };                                           
};
#include "magic/submitwaitforsyncobjectstohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitwaitforsyncobjectstohwqueue_t, 0x18 );
