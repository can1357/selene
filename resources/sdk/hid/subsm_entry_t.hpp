#pragma once
#include <sdkgen/support_library.hpp>
#include "state_t.hpp"
#include "subsm_flags_t.hpp"

#include "magic/subsm_entry_t.start.hpp"
namespace hid
{
    // [struct _SUBSM_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsm_entry_t                                 
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 union hid::subsm_flags_t sub_sm_flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubSmFlags
        _m01 union hid::state_t       sub_sm_start_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SubSmStartState
                                                         
        SDK_MAGIC_PROPERTIES( "_SUBSM_ENTRY.$", 0x8, true, 0xfb3bfeef489f2c6c );                   
        SDK_FIXED_SIZE( subsm_entry_t, 0x8 );                   
    };                                                   
};
#include "magic/subsm_entry_t.end.hpp"
SDK_VERIFY( struct hid::subsm_entry_t, 0x8 );
