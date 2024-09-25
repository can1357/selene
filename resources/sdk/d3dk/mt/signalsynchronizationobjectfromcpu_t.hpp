#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_signalflags_t.hpp"

#include "magic/signalsynchronizationobjectfromcpu_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU]
    // => WDK 10 (NV)
    //
    struct signalsynchronizationobjectfromcpu_t                    
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                          h_device;             //{ +0x0000    } | .hDevice
        _m01 uint32_t                          object_count;         //{ +0x0004    } | .ObjectCount
        _m02 const uint32_t*                   object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
        _m03 const uint64_t*                   fence_value_array;    //{ +0x0010    } | .FenceValueArray
        _m04 struct nt::d3dddicb_signalflags_t flags;                //{ +0x0018    } | .Flags
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.$", 0x0, false, 0x8625e2b9a33f5979 );                    
        SDK_FIXED_SIZE( signalsynchronizationobjectfromcpu_t, 0x20 );                    
    };                                                             
};
#include "magic/signalsynchronizationobjectfromcpu_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobjectfromcpu_t, 0x20 );
