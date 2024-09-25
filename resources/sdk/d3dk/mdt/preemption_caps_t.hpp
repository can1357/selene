#pragma once
#include <sdkgen/support_library.hpp>
#include "compute_preemption_granularity_t.hpp"
#include "graphics_preemption_granularity_t.hpp"

#include "magic/preemption_caps_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_PREEMPTION_CAPS]
    // => WDK 10 (NV)
    //
    struct preemption_caps_t                                                                  
    {                                                                                         
        using d3dkmdt_graphics_preemption_granularity_t = enum d3dk::mdt::graphics_preemption_granularity_t;                                
                                                                                              
        // WDK 10                                                                             
        //                                                                                    
        _m00 d3dkmdt_graphics_preemption_granularity_t        graphics_preemption_granularity;  //{ +0x0000    } | .GraphicsPreemptionGranularity
        _m01 enum d3dk::mdt::compute_preemption_granularity_t compute_preemption_granularity;   //{ +0x0004    } | .ComputePreemptionGranularity
                                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_PREEMPTION_CAPS.$", 0x0, false, 0x647e2b50fa96341a );                                
        SDK_FIXED_SIZE( preemption_caps_t, 0x8 );                                             
    };                                                                                        
};
#include "magic/preemption_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::preemption_caps_t, 0x8 );
