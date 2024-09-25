#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/non_sta_state_t.start.hpp"
namespace win
{
    // [class NonSTAState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class non_sta_state_t              
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t oid_waiter_count;  //{ +0x0010    +0x0010    +0x0010    } | ._oidWaiterCount
        _m01 bool     registering_oids;  //{ +0x0014    +0x0014    +0x0014    } | ._registeringOids
                                       
        SDK_MAGIC_PROPERTIES( "NonSTAState.$", 0x18, true, 0x23a3142ea1bec2b7 );                 
        SDK_FIXED_SIZE( non_sta_state_t, 0x18 );                 
    };                                 
};
#include "magic/non_sta_state_t.end.hpp"
SDK_VERIFY( class win::non_sta_state_t, 0x18 );
