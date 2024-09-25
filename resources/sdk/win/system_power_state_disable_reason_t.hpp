#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_power_state_disable_reason_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POWER_STATE_DISABLE_REASON]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_state_disable_reason_t          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 sdk::array<uint8_t, 8> affected_state;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AffectedState
        _m01 uint32_t               power_reason_code;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerReasonCode
        _m02 uint32_t               power_reason_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PowerReasonLength
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POWER_STATE_DISABLE_REASON.$", 0x10, true, 0x6da35852ce52477b );                    
        SDK_FIXED_SIZE( system_power_state_disable_reason_t, 0x10 );                    
    };                                                  
};
#include "magic/system_power_state_disable_reason_t.end.hpp"
SDK_VERIFY( struct win::system_power_state_disable_reason_t, 0x10 );
