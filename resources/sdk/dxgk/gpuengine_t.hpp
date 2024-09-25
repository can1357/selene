#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpuengine_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUENGINE]
    // => WDK 10 (NV)
    //
    struct gpuengine_t                                           
    {                                                            
        enum class u0_engine_type_t : int32_t                    
        {                                                        
            type_other =            0x0,                           // WDK 10
            type_3d =               0x1,                           // WDK 10
            type_video_decode =     0x2,                           // WDK 10
            type_video_encode =     0x3,                           // WDK 10
            type_video_processing = 0x4,                           // WDK 10
            type_scene_assembly =   0x5,                           // WDK 10
            type_copy =             0x6,                           // WDK 10
            type_overlay =          0x7,                           // WDK 10
            type_crypto =           0x8,                           // WDK 10
            type_max =              0x9,                           // WDK 10
        };                                                       
                                                                 
        // WDK 10                                                
        //                                                       
        _m00 u0_engine_type_t                engine_type;          //{ +0x0000    } | .EngineType
        _m01 sdk::array<wchar_t, 32>         name;                 //{ +0x0004    } | .Name
        _m02 uint32_t                        num_partition_units;  //{ +0x0044    } | .NumPartitionUnits
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUENGINE.$", 0x0, false, 0x9428c9cfdb5ad50d );                    
        SDK_FIXED_SIZE( gpuengine_t, 0x48 );                     
    };                                                           
};
#include "magic/gpuengine_t.end.hpp"
SDK_VERIFY( struct dxgk::gpuengine_t, 0x48 );
