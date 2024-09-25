#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_ts_id_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_TS_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_ts_id_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t session_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
                                      
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_TS_ID.$", 0x4, true, 0x19663a021df72e80 );           
        SDK_FIXED_SIZE( event_extended_item_ts_id_t, 0x4 );           
    };                                
};
#include "magic/event_extended_item_ts_id_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_ts_id_t, 0x4 );
