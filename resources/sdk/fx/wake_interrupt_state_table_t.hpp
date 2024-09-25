#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_interrupt_states_t.hpp"

#include "magic/wake_interrupt_state_table_t.start.hpp"
namespace fx
{
    class wake_interrupt_machine_t;
    struct wake_interrupt_target_state_t;

    // [struct FxWakeInterruptStateTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_interrupt_state_table_t                                          
    {                                                                            
        using pfn_wake_interrupt_state_entry_function_t = sdk::function<enum fx::wake_interrupt_states_t(class fx::wake_interrupt_machine_t*)>*;                    
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                       
        _m00 pfn_wake_interrupt_state_entry_function_t       state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 const struct fx::wake_interrupt_target_state_t* target_states;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetStates
        _m02 uint32_t                                        target_states_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetStatesCount
                                                                                 
        SDK_MAGIC_PROPERTIES( "FxWakeInterruptStateTable.$", 0x18, true, 0xa4d68e3d110f9fbe );                    
        SDK_FIXED_SIZE( wake_interrupt_state_table_t, 0x18 );                    
    };                                                                           
};
#include "magic/wake_interrupt_state_table_t.end.hpp"
SDK_VERIFY( struct fx::wake_interrupt_state_table_t, 0x18 );
