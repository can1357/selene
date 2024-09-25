#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"

#include "magic/graphicspower_register_output_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GRAPHICSPOWER_REGISTER_OUTPUT]
    // => WDK 10 (NV)
    //
    struct graphicspower_register_output_t                                                 
    {                                                                                      
        using pdxgk_set_shared_power_component_state_t = sdk::function<int32_t(void*, void*, uint32_t, uint8_t)>*;                                    
                                                                                           
        // WDK 10                                                                          
        //                                                                                 
        _m00 void*                                     device_handle;                        //{ +0x0000    } | .DeviceHandle
        _m01 enum nt::device_power_state_t             initial_grfx_power_state;             //{ +0x0008    } | .InitialGrfxPowerState
        _m02 pdxgk_set_shared_power_component_state_t  set_shared_power_component_state_cb;  //{ +0x0010    } | .SetSharedPowerComponentStateCb
        _m03 sdk::function<int32_t(void*, void*)>*     unregister_cb;                        //{ +0x0018    } | .UnregisterCb
                                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_GRAPHICSPOWER_REGISTER_OUTPUT.$", 0x0, false, 0x987bf8b43c1e2fb4 );                                    
        SDK_FIXED_SIZE( graphicspower_register_output_t, 0x20 );                                    
    };                                                                                     
};
#include "magic/graphicspower_register_output_t.end.hpp"
SDK_VERIFY( struct dxgk::graphicspower_register_output_t, 0x20 );
