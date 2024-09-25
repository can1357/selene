#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_stack_trace64_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_STACK_TRACE64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_stack_trace64_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint64_t                match_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MatchId
        _m01 sdk::array<uint64_t, 1> address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
                                              
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_STACK_TRACE64.$", 0x10, true, 0x4873b5cdb516825a );         
        SDK_FIXED_SIZE( event_extended_item_stack_trace64_t, 0x10 );         
    };                                        
};
#include "magic/event_extended_item_stack_trace64_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_stack_trace64_t, 0x10 );
