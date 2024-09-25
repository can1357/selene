#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_signalflags_t.hpp"

#include "magic/submitsignalsyncobjectstohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitsignalsyncobjectstohwqueue_t                           
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct nt::d3dddicb_signalflags_t flags;                     //{ +0x0000    } | .Flags
        _m01 uint32_t                          broadcast_hw_queue_count;  //{ +0x0004    } | .BroadcastHwQueueCount
        _m02 const uint32_t*                   broadcast_hw_queue_array;  //{ +0x0008    } | .BroadcastHwQueueArray
        _m03 uint32_t                          object_count;              //{ +0x0010    } | .ObjectCount
        _m04 const uint32_t*                   object_handle_array;       //{ +0x0018    } | .ObjectHandleArray
        _m05 const uint64_t*                   fence_value_array;         //{ +0x0020    } | .FenceValueArray
                                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE.$", 0x0, false, 0xd2ef9368df4083ee );                         
        SDK_FIXED_SIZE( submitsignalsyncobjectstohwqueue_t, 0x28 );                         
    };                                                                  
};
#include "magic/submitsignalsyncobjectstohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitsignalsyncobjectstohwqueue_t, 0x28 );
