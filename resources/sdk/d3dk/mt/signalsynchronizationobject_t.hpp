#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_signalflags_t.hpp"

#include "magic/signalsynchronizationobject_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT]
    // => WDK 10 (NV)
    //
    struct signalsynchronizationobject_t                           
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                          h_context;            //{ +0x0000    } | .hContext
        _m01 uint32_t                          object_count;         //{ +0x0004    } | .ObjectCount
        _m02 sdk::array<uint32_t, 32>          object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
        _m03 struct nt::d3dddicb_signalflags_t flags;                //{ +0x0088    } | .Flags
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT.$", 0x0, false, 0x1819dfd76d254156 );                    
        SDK_FIXED_SIZE( signalsynchronizationobject_t, 0x8c );                    
    };                                                             
};
#include "magic/signalsynchronizationobject_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::signalsynchronizationobject_t, 0x8c );
