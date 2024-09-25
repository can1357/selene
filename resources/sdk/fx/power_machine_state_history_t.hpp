#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_machine_state_history_t.start.hpp"
namespace fx
{
    // [union FxPowerMachineStateHistory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union power_machine_state_history_t      
    {                                        
        struct u0_s_t                        
        {                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
            //                               
            _m00 int16_t state1;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .State1
            _m01 int16_t state2;               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .State2
            _m02 int16_t state3;               //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .State3
            _m03 int16_t state4;               //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .State4
            _m04 int16_t state5;               //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .State5
            _m05 int16_t state6;               //{ +0x0008@16 +0x0008@16 +0x0008@16 +0x0008@16 } | .State6
            _m06 int16_t state7;               //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .State7
            _m07 int16_t state8;               //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .State8
                                             
            SDK_MAGIC_PROPERTIES( "FxPowerMachineStateHistory.S.$", 0x10, true, 0x9ab95f0ed0e647a8 );               
            SDK_FIXED_SIZE( u0_s_t, 0x10 );               
        };                                   
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m08 u0_s_t                  s;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .S
        _m09 sdk::array<uint16_t, 8> history;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .History
                                             
        SDK_MAGIC_PROPERTIES( "FxPowerMachineStateHistory.$", 0x10, true, 0x1e29628ef413c90c );        
        SDK_FIXED_SIZE( power_machine_state_history_t, 0x10 );        
    };                                       
};
#include "magic/power_machine_state_history_t.end.hpp"
SDK_VERIFY( struct fx::power_machine_state_history_t::u0_s_t, 0x10 );
SDK_VERIFY( union fx::power_machine_state_history_t, 0x10 );
