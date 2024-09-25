#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentsizeinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SEGMENTSIZEINFO]
    // => WDK 10 (NV)
    //
    struct segmentsizeinfo_t                       
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint64_t dedicated_video_memory_size;   //{ +0x0000    } | .DedicatedVideoMemorySize
        _m01 uint64_t dedicated_system_memory_size;  //{ +0x0008    } | .DedicatedSystemMemorySize
        _m02 uint64_t shared_system_memory_size;     //{ +0x0010    } | .SharedSystemMemorySize
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SEGMENTSIZEINFO.$", 0x0, false, 0x361d490deb07772b );                             
        SDK_FIXED_SIZE( segmentsizeinfo_t, 0x18 );                             
    };                                             
};
#include "magic/segmentsizeinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::segmentsizeinfo_t, 0x18 );
