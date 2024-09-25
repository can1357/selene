#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wddm_2_0_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WDDM_2_0_CAPS]
    // => WDK 10 (NV)
    //
    struct wddm_2_0_caps_t                        
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  support64_bit_atomics;        //{ +0x0000@0  } | .Support64BitAtomics
        _m01 uint1_t  gpu_mmu_supported;            //{ +0x0000@1  } | .GpuMmuSupported
        _m02 uint1_t  io_mmu_supported;             //{ +0x0000@2  } | .IoMmuSupported
        _m03 uint1_t  flip_overwrite_supported;     //{ +0x0000@3  } | .FlipOverwriteSupported
        _m04 uint1_t  support_contextless_present;  //{ +0x0000@4  } | .SupportContextlessPresent
        _m05 uint1_t  support_surprise_removal;     //{ +0x0000@5  } | .SupportSurpriseRemoval
        _m06 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WDDM_2_0_CAPS.$", 0x0, false, 0x649f007f5a9f8b46 );                            
        SDK_FIXED_SIZE( wddm_2_0_caps_t, 0x4 );                            
    };                                            
};
#include "magic/wddm_2_0_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::wddm_2_0_caps_t, 0x4 );
