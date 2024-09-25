#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_process_start_key_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_PROCESS_START_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_process_start_key_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t process_start_key;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessStartKey
                                                  
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_PROCESS_START_KEY.$", 0x8, true, 0xc330981de457b82 );                  
        SDK_FIXED_SIZE( event_extended_item_process_start_key_t, 0x8 );                  
    };                                            
};
#include "magic/event_extended_item_process_start_key_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_process_start_key_t, 0x8 );
