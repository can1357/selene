#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trackedworkload_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_TRACKEDWORKLOAD_SUPPORT]
    // => WDK 10 (NV)
    //
    struct trackedworkload_support_t                                
    {                                                               
        enum class u0_engine_type_t : int32_t                       
        {                                                           
            type_other =            0x0,                              // WDK 10
            type_3d =               0x1,                              // WDK 10
            type_video_decode =     0x2,                              // WDK 10
            type_video_encode =     0x3,                              // WDK 10
            type_video_processing = 0x4,                              // WDK 10
            type_scene_assembly =   0x5,                              // WDK 10
            type_copy =             0x6,                              // WDK 10
            type_overlay =          0x7,                              // WDK 10
            type_crypto =           0x8,                              // WDK 10
            type_max =              0x9,                              // WDK 10
        };                                                          
                                                                    
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                        physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 u0_engine_type_t                engine_type;             //{ +0x0004    } | .EngineType
        _m02 int32_t                         support;                 //{ +0x0008    } | .Support
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_TRACKEDWORKLOAD_SUPPORT.$", 0x0, false, 0x2239e8e6720acc96 );                       
        SDK_FIXED_SIZE( trackedworkload_support_t, 0xc );                       
    };                                                              
};
#include "magic/trackedworkload_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::trackedworkload_support_t, 0xc );
