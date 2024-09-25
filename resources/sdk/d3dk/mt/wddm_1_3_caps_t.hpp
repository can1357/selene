#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wddm_1_3_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WDDM_1_3_CAPS]
    // => WDK 10 (NV)
    //
    struct wddm_1_3_caps_t                              
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint1_t  support_miracast;                   //{ +0x0000@0  } | .SupportMiracast
        _m01 uint1_t  is_hybrid_integrated_gpu;           //{ +0x0000@1  } | .IsHybridIntegratedGPU
        _m02 uint1_t  is_hybrid_discrete_gpu;             //{ +0x0000@2  } | .IsHybridDiscreteGPU
        _m03 uint1_t  support_power_management_p_states;  //{ +0x0000@3  } | .SupportPowerManagementPStates
        _m04 uint1_t  support_virtual_modes;              //{ +0x0000@4  } | .SupportVirtualModes
        _m05 uint1_t  support_cross_adapter_resource;     //{ +0x0000@5  } | .SupportCrossAdapterResource
        _m06 uint32_t value;                              //{ +0x0000    } | .Value
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WDDM_1_3_CAPS.$", 0x0, false, 0xfc2c069fd66a5222 );                                  
        SDK_FIXED_SIZE( wddm_1_3_caps_t, 0x4 );                                  
    };                                                  
};
#include "magic/wddm_1_3_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::wddm_1_3_caps_t, 0x4 );
