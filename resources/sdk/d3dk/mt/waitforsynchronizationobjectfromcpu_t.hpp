#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/waitforsynchronizationobjectfromcpu_flags_t.hpp"

#include "magic/waitforsynchronizationobjectfromcpu_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU]
    // => WDK 10 (NV)
    //
    struct waitforsynchronizationobjectfromcpu_t 
    {                                            
        using flags_t = struct d3d::ddi::waitforsynchronizationobjectfromcpu_flags_t;                    
                                                 
        // WDK 10                                
        //                                       
        _m00 uint32_t        h_device;             //{ +0x0000    } | .hDevice
        _m01 uint32_t        object_count;         //{ +0x0004    } | .ObjectCount
        _m02 const uint32_t* object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
        _m03 const uint64_t* fence_value_array;    //{ +0x0010    } | .FenceValueArray
        _m04 void*           h_async_event;        //{ +0x0018    } | .hAsyncEvent
        _m05 flags_t         flags;                //{ +0x0020    } | .Flags
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.$", 0x0, false, 0xe35d41d60f82c1a8 );                    
        SDK_FIXED_SIZE( waitforsynchronizationobjectfromcpu_t, 0x28 );                    
    };                                           
};
#include "magic/waitforsynchronizationobjectfromcpu_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforsynchronizationobjectfromcpu_t, 0x28 );
