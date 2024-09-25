#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_event_key_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_EVENT_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_event_key_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                
        _m00 uint64_t key;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_EVENT_KEY.$", 0x8, true, 0x1b0bd7419b61725c );    
        SDK_FIXED_SIZE( event_extended_item_event_key_t, 0x8 );    
    };                                    
};
#include "magic/event_extended_item_event_key_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_event_key_t, 0x8 );
