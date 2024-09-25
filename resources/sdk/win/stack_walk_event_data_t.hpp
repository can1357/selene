#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_walk_event_data_t.start.hpp"
namespace win
{
    // [struct _STACK_WALK_EVENT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_walk_event_data_t           
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 uint64_t             time_stamp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeStamp
        _m01 uint32_t             process_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m02 uint32_t             thread_id;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ThreadId
        _m03 sdk::array<void*, 1> addresses;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Addresses
                                             
        SDK_MAGIC_PROPERTIES( "_STACK_WALK_EVENT_DATA.$", 0x18, true, 0xc95aca10fc59ec92 );           
        SDK_FIXED_SIZE( stack_walk_event_data_t, 0x18 );           
    };                                       
};
#include "magic/stack_walk_event_data_t.end.hpp"
SDK_VERIFY( struct win::stack_walk_event_data_t, 0x18 );
