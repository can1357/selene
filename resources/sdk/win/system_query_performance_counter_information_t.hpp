#pragma once
#include <sdkgen/support_library.hpp>
#include "query_performance_counter_flags_t.hpp"

#include "magic/system_query_performance_counter_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_QUERY_PERFORMANCE_COUNTER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_query_performance_counter_information_t              
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                             
        _m00 uint32_t                                      version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct win::query_performance_counter_flags_t flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct win::query_performance_counter_flags_t valid_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ValidFlags
                                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_QUERY_PERFORMANCE_COUNTER_INFORMATION.$", 0xc, true, 0xf339e81040c0795c );            
        SDK_FIXED_SIZE( system_query_performance_counter_information_t, 0xc );            
    };                                                                 
};
#include "magic/system_query_performance_counter_information_t.end.hpp"
SDK_VERIFY( struct win::system_query_performance_counter_information_t, 0xc );
