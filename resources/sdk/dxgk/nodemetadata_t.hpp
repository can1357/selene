#pragma once
#include <sdkgen/support_library.hpp>
#include "nodemetadata_flags_t.hpp"

#include "magic/nodemetadata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_NODEMETADATA]
    // => WDK 10 (NV)
    //
    struct nodemetadata_t                                        
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
        _m00 u0_engine_type_t                  engine_type;        //{ +0x0000    } | .EngineType
        _m01 sdk::array<wchar_t, 32>           friendly_name;      //{ +0x0004    } | .FriendlyName
        _m02 struct dxgk::nodemetadata_flags_t flags;              //{ +0x0044    } | .Flags
        _m03 uint8_t                           gpu_mmu_supported;  //{ +0x0048    } | .GpuMmuSupported
        _m04 uint8_t                           io_mmu_supported;   //{ +0x0049    } | .IoMmuSupported
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_NODEMETADATA.$", 0x0, false, 0x962e087f8d13570d );                  
        SDK_FIXED_SIZE( nodemetadata_t, 0x4a );                  
    };                                                           
};
#include "magic/nodemetadata_t.end.hpp"
SDK_VERIFY( struct dxgk::nodemetadata_t, 0x4a );
