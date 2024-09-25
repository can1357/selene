#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/policy_device_type_t.hpp"

#include "magic/action_trigger_t.start.hpp"
namespace pop
{
    struct trigger_wait_t;

    // [struct _POP_ACTION_TRIGGER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct action_trigger_t                           
    {                                                 
        struct u0_battery_t                           
        {                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                        
            _m03 uint32_t percent_level;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PercentLevel
                                                      
            SDK_MAGIC_PROPERTIES( "_POP_ACTION_TRIGGER.Battery.$", 0x4, true, 0xb3be31e631f3fb32 );                      
            SDK_FIXED_SIZE( u0_battery_t, 0x4 );                      
        };                                            
                                                      
        struct u4_button_t                            
        {                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
            //                                        
            _m05 uint32_t type;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
                                                      
            SDK_MAGIC_PROPERTIES( "_POP_ACTION_TRIGGER.Button.$", 0x4, true, 0x745ef81f9e90b76b );             
            SDK_FIXED_SIZE( u4_button_t, 0x4 );             
        };                                            
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                            
        _m00 enum power::policy_device_type_t type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct pop::trigger_wait_t*      wait;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Wait
        _m04 u0_battery_t                     battery;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Battery
        _m06 u4_button_t                      button;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Button
                                                      
        SDK_MAGIC_PROPERTIES( "_POP_ACTION_TRIGGER.$", 0x18, true, 0x450dbc1b5794e6ae );        
        SDK_FIXED_SIZE( action_trigger_t, 0x18 );        
    };                                                
};
#include "magic/action_trigger_t.end.hpp"
SDK_VERIFY( struct pop::action_trigger_t::u0_battery_t, 0x4 );
SDK_VERIFY( struct pop::action_trigger_t::u4_button_t, 0x4 );
SDK_VERIFY( struct pop::action_trigger_t, 0x18 );
