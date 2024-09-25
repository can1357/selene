#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_filter_event_name_t.start.hpp"
namespace win
{
    // [struct _EVENT_FILTER_EVENT_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_filter_event_name_t                  
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint64_t               match_any_keyword;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MatchAnyKeyword
        _m01 uint64_t               match_all_keyword;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MatchAllKeyword
        _m02 uint8_t                level;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Level
        _m03 uint8_t                filter_in;          //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .FilterIn
        _m04 uint16_t               name_count;         //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .NameCount
        _m05 sdk::array<uint8_t, 1> names;              //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Names
                                                      
        SDK_NONVOL_PROPERTIES( "_EVENT_FILTER_EVENT_NAME.$", 0x18, true, 0xf1b8508198ee50c0 );                  
        SDK_FIXED_SIZE( event_filter_event_name_t, 0x18 );                  
    };                                                
};
#include "magic/event_filter_event_name_t.end.hpp"
SDK_VERIFY( struct win::event_filter_event_name_t, 0x18 );
