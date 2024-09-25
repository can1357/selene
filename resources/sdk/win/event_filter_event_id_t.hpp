#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_filter_event_id_t.start.hpp"
namespace win
{
    // [struct _EVENT_FILTER_EVENT_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_filter_event_id_t             
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 uint8_t                 filter_in;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterIn
        _m01 uint16_t                count;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Count
        _m02 sdk::array<uint16_t, 1> events;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Events
                                               
        SDK_NONVOL_PROPERTIES( "_EVENT_FILTER_EVENT_ID.$", 0x6, true, 0xcac7cc6f852d4e8 );          
        SDK_FIXED_SIZE( event_filter_event_id_t, 0x6 );          
    };                                         
};
#include "magic/event_filter_event_id_t.end.hpp"
SDK_VERIFY( struct win::event_filter_event_id_t, 0x6 );
