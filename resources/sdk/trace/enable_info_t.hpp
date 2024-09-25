#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_info_t                
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t is_enabled;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IsEnabled
        _m01 uint8_t  level;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Level
        _m02 uint16_t logger_id;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LoggerId
        _m03 uint32_t enable_property;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnableProperty
        _m04 uint64_t match_any_keyword;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MatchAnyKeyword
        _m05 uint64_t match_all_keyword;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MatchAllKeyword
                                        
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_INFO.$", 0x20, true, 0xe14335049d61cd7a );                  
        SDK_FIXED_SIZE( enable_info_t, 0x20 );                  
    };                                  
};
#include "magic/enable_info_t.end.hpp"
SDK_VERIFY( struct trace::enable_info_t, 0x20 );
