#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_pwr_requirement_machine_state_history_t.start.hpp"
namespace fx
{
    // [union FxDevicePwrRequirementMachineStateHistory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union device_pwr_requirement_machine_state_history_t
    {                                                   
        struct u0_s_t                                   
        {                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
            //                              
            _m00 int8_t state1;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .State1
            _m01 int8_t state2;                           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .State2
            _m02 int8_t state3;                           //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .State3
            _m03 int8_t state4;                           //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .State4
            _m04 int8_t state5;                           //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .State5
            _m05 int8_t state6;                           //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .State6
            _m06 int8_t state7;                           //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .State7
            _m07 int8_t state8;                           //{ +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 } | .State8
                                                        
            SDK_MAGIC_PROPERTIES( "FxDevicePwrRequirementMachineStateHistory.S.$", 0x8, true, 0xe7c0cdca9d1f19f4 );               
            SDK_FIXED_SIZE( u0_s_t, 0x8 );               
        };                                              
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m08 u0_s_t                 s;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .S
        _m09 sdk::array<uint8_t, 8> history;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .History
                                                        
        SDK_MAGIC_PROPERTIES( "FxDevicePwrRequirementMachineStateHistory.$", 0x8, true, 0x861d3502613a33e4 );        
        SDK_FIXED_SIZE( device_pwr_requirement_machine_state_history_t, 0x8 );        
    };                                                  
};
#include "magic/device_pwr_requirement_machine_state_history_t.end.hpp"
SDK_VERIFY( struct fx::device_pwr_requirement_machine_state_history_t::u0_s_t, 0x8 );
SDK_VERIFY( union fx::device_pwr_requirement_machine_state_history_t, 0x8 );
