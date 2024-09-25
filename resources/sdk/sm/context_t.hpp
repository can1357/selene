#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../hid/event_t.hpp"
#include "../hid/state_t.hpp"
#include "../hid/state_log_t.hpp"
#include "../hid/event_queue_t.hpp"

namespace hid { struct state_entry_t; }
namespace io  { struct workitem_t;    }

#include "magic/context_t.start.hpp"
namespace sm
{
    // [struct _SM_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_t                                                                 
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                           
        _m00 sdk::array<struct hid::state_log_t, 64> state_history;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateHistory
        _m01 sdk::array<union hid::event_t, 16>      event_history;                    //{ +0x0300    +0x0300    +0x0300    +0x0300    } | .EventHistory
        _m02 uint8_t                                 state_history_index;              //{ +0x0340    +0x0340    +0x0340    +0x0340    } | .StateHistoryIndex
        _m03 uint8_t                                 event_history_index;              //{ +0x0341    +0x0341    +0x0341    +0x0341    } | .EventHistoryIndex
        _m04 uint64_t                                state_machine_lock;               //{ +0x0348    +0x0348    +0x0348    +0x0348    } | .StateMachineLock
        _m05 uint8_t                                 state_machine_running;            //{ +0x0350    +0x0350    +0x0350    +0x0350    } | .StateMachineRunning
        _m06 sdk::array<union hid::state_t, 7>       current_state;                    //{ +0x0354    +0x0354    +0x0354    +0x0354    } | .CurrentState
        _m07 uint32_t                                current_state_depth;              //{ +0x0370    +0x0370    +0x0370    +0x0370    } | .CurrentStateDepth
        _m08 struct hid::event_queue_t               event_queue;                      //{ +0x0374    +0x0374    +0x0374    +0x0374    } | .EventQueue
        _m09 uint32_t                                sub_sm_flags;                     //{ +0x03b8    +0x03b8    +0x03b8    +0x03b8    } | .SubSmFlags
        _m10 void*                                   parent_context;                   //{ +0x03c0    +0x03c0    +0x03c0    +0x03c0    } | .ParentContext
        _m11 struct hid::state_entry_t**             state_table;                      //{ +0x03c8    +0x03c8    +0x03c8    +0x03c8    } | .StateTable
        _m12 uint32_t                                start_index;                      //{ +0x03d0    +0x03d0    +0x03d0    +0x03d0    } | .StartIndex
        _m13 struct io::workitem_t*                  work_item;                        //{ +0x03d8    +0x03d8    +0x03d8    +0x03d8    } | .WorkItem
        _m14 struct nt::guid_t                       current_activity_id;              //{ +0x03e0    +0x03e0    +0x03e0    +0x03e0    } | .CurrentActivityId
        _m15 uint8_t                                 debug_break_on_state_transition;  //{ +0x03f0    +0x03f0    +0x03f0    +0x03f0    } | .DebugBreakOnStateTransition
                                                                                     
        SDK_MAGIC_PROPERTIES( "_SM_CONTEXT.$", 0x3f8, true, 0x91f2edd455b49f7c );                                
        SDK_FIXED_SIZE( context_t, 0x3f8 );                                          
    };                                                                               
};
#include "magic/context_t.end.hpp"
SDK_VERIFY( struct sm::context_t, 0x3f8 );
