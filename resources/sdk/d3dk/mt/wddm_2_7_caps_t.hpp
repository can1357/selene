#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wddm_2_7_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WDDM_2_7_CAPS]
    // => WDK 10 (NV)
    //
    struct wddm_2_7_caps_t                              
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint1_t  hw_sch_supported;                   //{ +0x0000@0  } | .HwSchSupported
        _m01 uint1_t  hw_sch_enabled;                     //{ +0x0000@1  } | .HwSchEnabled
        _m02 uint1_t  hw_sch_enabled_by_default;          //{ +0x0000@2  } | .HwSchEnabledByDefault
        _m03 uint1_t  independent_vid_pn_v_sync_control;  //{ +0x0000@3  } | .IndependentVidPnVSyncControl
        _m04 uint32_t value;                              //{ +0x0000    } | .Value
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WDDM_2_7_CAPS.$", 0x0, false, 0xe7c161ae20dcb9a9 );                                  
        SDK_FIXED_SIZE( wddm_2_7_caps_t, 0x4 );                                  
    };                                                  
};
#include "magic/wddm_2_7_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::wddm_2_7_caps_t, 0x4 );
