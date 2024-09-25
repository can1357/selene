#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/self_managed_io_machine_event_history_t.start.hpp"
namespace fx
{
    // [union FxSelfManagedIoMachineEventHistory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union self_managed_io_machine_event_history_t
    {                                            
        struct u0_e_t                            
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
            //                              
            _m00 int8_t event1;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Event1
            _m01 int8_t event2;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Event2
            _m02 int8_t event3;                    //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Event3
            _m03 int8_t event4;                    //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Event4
            _m04 int8_t event5;                    //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Event5
            _m05 int8_t event6;                    //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .Event6
            _m06 int8_t event7;                    //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .Event7
            _m07 int8_t event8;                    //{ +0x0004@24 +0x0004@24 +0x0004@24 +0x0004@24 } | .Event8
                                                 
            SDK_MAGIC_PROPERTIES( "FxSelfManagedIoMachineEventHistory.E.$", 0x8, true, 0xb591c7fbda75cf94 );               
            SDK_FIXED_SIZE( u0_e_t, 0x8 );               
        };                                       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m08 u0_e_t                 e;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .E
        _m09 sdk::array<uint8_t, 8> history;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .History
                                                 
        SDK_MAGIC_PROPERTIES( "FxSelfManagedIoMachineEventHistory.$", 0x8, true, 0xc81e0c7180bb1ca0 );        
        SDK_FIXED_SIZE( self_managed_io_machine_event_history_t, 0x8 );        
    };                                           
};
#include "magic/self_managed_io_machine_event_history_t.end.hpp"
SDK_VERIFY( struct fx::self_managed_io_machine_event_history_t::u0_e_t, 0x8 );
SDK_VERIFY( union fx::self_managed_io_machine_event_history_t, 0x8 );
