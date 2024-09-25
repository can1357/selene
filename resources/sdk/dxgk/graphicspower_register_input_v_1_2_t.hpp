#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"

namespace nt { struct guid_t; }

#include "magic/graphicspower_register_input_v_1_2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2]
    // => WDK 10 (NV)
    //
    struct graphicspower_register_input_v_1_2_t                            
    {                                                                      
        using pdxgk_power_notification_t =      sdk::function<void(void*, enum nt::device_power_state_t, uint8_t, void*)>*;                           
        using pdxgk_fstate_notification_t =     sdk::function<void(void*, uint32_t, uint32_t, uint8_t, void*)>*;                           
        using pdxgk_initial_component_state_t = sdk::function<void(void*, void*, uint32_t, uint8_t, uint32_t, struct nt::guid_t, uint32_t)>*;                           
                                                                           
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                           version;                     //{ +0x0000    } | .Version
        _m01 void*                              private_handle;              //{ +0x0008    } | .PrivateHandle
        _m02 pdxgk_power_notification_t         power_notification_cb;       //{ +0x0010    } | .PowerNotificationCb
        _m03 sdk::function<void(void*, void*)>* removal_notification_cb;     //{ +0x0018    } | .RemovalNotificationCb
        _m04 pdxgk_fstate_notification_t        f_state_notification_cb;     //{ +0x0020    } | .FStateNotificationCb
        _m05 pdxgk_initial_component_state_t    initial_component_state_cb;  //{ +0x0028    } | .InitialComponentStateCb
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2.$", 0x0, false, 0x9501da7d07e0f21c );                           
        SDK_FIXED_SIZE( graphicspower_register_input_v_1_2_t, 0x30 );                           
    };                                                                     
};
#include "magic/graphicspower_register_input_v_1_2_t.end.hpp"
SDK_VERIFY( struct dxgk::graphicspower_register_input_v_1_2_t, 0x30 );
