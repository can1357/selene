#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_set_power_action_ret_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SET_POWER_ACTION_RET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_set_power_action_ret_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 void*   trigger;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Trigger
        _m01 int32_t status;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SET_POWER_ACTION_RET.$", 0x10, true, 0x63fcea6bb58a8d1b );        
        SDK_FIXED_SIZE( perfinfo_set_power_action_ret_t, 0x10 );        
    };                                    
};
#include "magic/perfinfo_set_power_action_ret_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_set_power_action_ret_t, 0x10 );
