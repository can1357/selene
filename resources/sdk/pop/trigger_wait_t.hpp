#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/trigger_wait_t.start.hpp"
namespace pop
{
    struct action_trigger_t;

    // [struct _POP_TRIGGER_WAIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trigger_wait_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 struct nt::kevent_t           event;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
        _m01 int32_t                       status;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
        _m02 nt::list_entry_t              link;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Link
        _m03 struct pop::action_trigger_t* trigger;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Trigger
                                                   
        SDK_MAGIC_PROPERTIES( "_POP_TRIGGER_WAIT.$", 0x38, true, 0xa69c73e39ac96b18 );        
        SDK_FIXED_SIZE( trigger_wait_t, 0x38 );        
    };                                             
};
#include "magic/trigger_wait_t.end.hpp"
SDK_VERIFY( struct pop::trigger_wait_t, 0x38 );
