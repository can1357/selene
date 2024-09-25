#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/hash_table_t.hpp"

#include "magic/filter_event_name_data_t.start.hpp"
namespace etw
{
    // [struct _ETW_FILTER_EVENT_NAME_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_event_name_data_t                     
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 uint8_t                  filter_in;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterIn
        _m01 uint8_t                  level;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Level
        _m02 uint64_t                 match_any_keyword;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MatchAnyKeyword
        _m03 uint64_t                 match_all_keyword;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MatchAllKeyword
        _m04 struct rtl::hash_table_t name_table;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NameTable
                                                        
        SDK_MAGIC_PROPERTIES( "_ETW_FILTER_EVENT_NAME_DATA.$", 0x28, true, 0xfab2e72cb81ca498 );                  
        SDK_FIXED_SIZE( filter_event_name_data_t, 0x28 );                  
    };                                                  
};
#include "magic/filter_event_name_data_t.end.hpp"
SDK_VERIFY( struct etw::filter_event_name_data_t, 0x28 );
