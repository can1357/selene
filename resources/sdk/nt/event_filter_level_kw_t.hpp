#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_filter_level_kw_t.start.hpp"
namespace nt
{
    // [struct _EVENT_FILTER_LEVEL_KW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_filter_level_kw_t      
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t match_any_keyword;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MatchAnyKeyword
        _m01 uint64_t match_all_keyword;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MatchAllKeyword
        _m02 uint8_t  level;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Level
        _m03 uint8_t  filter_in;          //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .FilterIn
                                        
        SDK_NONVOL_PROPERTIES( "_EVENT_FILTER_LEVEL_KW.$", 0x18, true, 0x3509bb66b5c6a694 );                  
        SDK_FIXED_SIZE( event_filter_level_kw_t, 0x18 );                  
    };                                  
};
#include "magic/event_filter_level_kw_t.end.hpp"
SDK_VERIFY( struct nt::event_filter_level_kw_t, 0x18 );
