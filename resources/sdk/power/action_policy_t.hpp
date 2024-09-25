#pragma once
#include <sdkgen/support_library.hpp>
#include "action_t.hpp"

#include "magic/action_policy_t.start.hpp"
namespace power
{
    // [struct POWER_ACTION_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct action_policy_t                   
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 enum power::action_t action;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint32_t             flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t             event_code;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventCode
                                             
        SDK_MAGIC_PROPERTIES( "POWER_ACTION_POLICY.$", 0xc, true, 0x65f63d6e23b9f2b8 );           
        SDK_FIXED_SIZE( action_policy_t, 0xc );           
    };                                       
};
#include "magic/action_policy_t.end.hpp"
SDK_VERIFY( struct power::action_policy_t, 0xc );
