#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktimer_table_state_t.start.hpp"
namespace nt
{
    // [struct _KTIMER_TABLE_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer_table_state_t                            
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 sdk::array<uint64_t, 2> last_timer_expiration;  //{ +0x0000    +0x0000    +0x0000    } | .LastTimerExpiration
        _m01 sdk::array<uint32_t, 2> last_timer_hand;        //{ +0x0010    +0x0010    +0x0010    } | .LastTimerHand
                                                           
        SDK_MAGIC_PROPERTIES( "_KTIMER_TABLE_STATE.$", 0x18, true, 0x9aa4be0602afcc5b );                      
        SDK_FIXED_SIZE( ktimer_table_state_t, 0x18 );                      
    };                                                     
};
#include "magic/ktimer_table_state_t.end.hpp"
SDK_VERIFY( struct nt::ktimer_table_state_t, 0x18 );
