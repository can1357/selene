#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_stack_key32_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_STACK_KEY32]
    // => Windows 11
    //
    struct event_extended_item_stack_key32_t
    {                                       
        // Windows 11           
        //                      
        _m00 uint64_t match_id;               //{ +0x0000    } | .MatchId
        _m01 uint32_t stack_key;              //{ +0x0008    } | .StackKey
                                            
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_STACK_KEY32.$", 0x0, false, 0xd35e760b7b7506cb );          
        SDK_FIXED_SIZE( event_extended_item_stack_key32_t, 0x10 );          
    };                                      
};
#include "magic/event_extended_item_stack_key32_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_stack_key32_t, 0x10 );
