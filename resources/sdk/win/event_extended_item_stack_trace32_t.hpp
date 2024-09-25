#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_stack_trace32_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_STACK_TRACE32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_stack_trace32_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint64_t                match_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MatchId
        _m01 sdk::array<uint32_t, 1> address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
                                              
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_STACK_TRACE32.$", 0x10, true, 0xb79fe2feca4f7f1a );         
        SDK_FIXED_SIZE( event_extended_item_stack_trace32_t, 0x10 );         
    };                                        
};
#include "magic/event_extended_item_stack_trace32_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_stack_trace32_t, 0x10 );
