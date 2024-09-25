#pragma once
#include <sdkgen/support_library.hpp>
#include "state_flags_t.hpp"
#include "state_transition_t.hpp"

namespace sm { struct context_t; }

#include "magic/state_entry_t.start.hpp"
namespace hid
{
    struct subsm_entry_t;

    // [struct _STATE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_entry_t                                                    
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                  
        _m00 uint32_t                                        etw_name;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EtwName
        _m01 sdk::function<uint32_t(struct sm::context_t*)>* entry_func;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EntryFunc
        _m02 enum hid::state_flags_t                         state_flags;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StateFlags
        _m03 struct hid::subsm_entry_t*                      sub_sm_entries;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SubSmEntries
        _m04 sdk::array<struct hid::state_transition_t>      transitions;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Transitions
                                                                            
        SDK_MAGIC_PROPERTIES( "_STATE_ENTRY.$", 0x20, true, 0x1b8642a77e14e587 );               
        SDK_FIXED_SIZE( state_entry_t, 0x20 );                              
    };                                                                      
};
#include "magic/state_entry_t.end.hpp"
SDK_VERIFY( struct hid::state_entry_t, 0x20 );
