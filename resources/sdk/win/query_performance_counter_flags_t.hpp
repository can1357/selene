#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_performance_counter_flags_t.start.hpp"
namespace win
{
    // [struct _QUERY_PERFORMANCE_COUNTER_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_performance_counter_flags_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint1_t  kernel_transition;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .KernelTransition
        _m01 uint32_t ul;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ul
                                            
        SDK_MAGIC_PROPERTIES( "_QUERY_PERFORMANCE_COUNTER_FLAGS.$", 0x4, true, 0x6e4e56534ef926cb );                  
        SDK_FIXED_SIZE( query_performance_counter_flags_t, 0x4 );                  
    };                                      
};
#include "magic/query_performance_counter_flags_t.end.hpp"
SDK_VERIFY( struct win::query_performance_counter_flags_t, 0x4 );
