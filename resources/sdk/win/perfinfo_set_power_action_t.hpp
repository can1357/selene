#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_set_power_action_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SET_POWER_ACTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_set_power_action_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    trigger;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Trigger
        _m01 uint32_t power_action;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerAction
        _m02 uint32_t lightest_state;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LightestState
                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SET_POWER_ACTION.$", 0x10, true, 0xeca26aa78cc71460 );               
        SDK_FIXED_SIZE( perfinfo_set_power_action_t, 0x10 );               
    };                                
};
#include "magic/perfinfo_set_power_action_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_set_power_action_t, 0x10 );
