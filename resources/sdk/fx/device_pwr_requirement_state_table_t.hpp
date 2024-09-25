#pragma once
#include <sdkgen/support_library.hpp>
#include "device_pwr_requirement_states_t.hpp"

#include "magic/device_pwr_requirement_state_table_t.start.hpp"
namespace fx
{
    class device_pwr_requirement_machine_t;
    struct device_pwr_requirement_target_state_t;

    // [struct FxDevicePwrRequirementStateTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_pwr_requirement_state_table_t   
    {                                             
        using pfn_device_power_requirement_state_entry_function_t = sdk::function<enum fx::device_pwr_requirement_states_t(class fx::device_pwr_requirement_machine_t*)>*;                    
        using state_func_t =                                        pfn_device_power_requirement_state_entry_function_t ;                    
        using target_states_t =                                     const struct fx::device_pwr_requirement_target_state_t*;                    
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                        
        _m00 state_func_t     state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 target_states_t  target_states;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetStates
        _m02 uint32_t         target_states_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetStatesCount
                                                  
        SDK_MAGIC_PROPERTIES( "FxDevicePwrRequirementStateTable.$", 0x18, true, 0xebb85afe22937761 );                    
        SDK_FIXED_SIZE( device_pwr_requirement_state_table_t, 0x18 );                    
    };                                            
};
#include "magic/device_pwr_requirement_state_table_t.end.hpp"
SDK_VERIFY( struct fx::device_pwr_requirement_state_table_t, 0x18 );
