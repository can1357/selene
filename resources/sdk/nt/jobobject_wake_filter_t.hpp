#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_wake_filter_t.start.hpp"
namespace nt
{
    // [struct _JOBOBJECT_WAKE_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_wake_filter_t     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t high_edge_filter;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HighEdgeFilter
        _m01 uint32_t low_edge_filter;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LowEdgeFilter
                                       
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_WAKE_FILTER.$", 0x8, true, 0x84f7fa1f8a49233 );                 
        SDK_FIXED_SIZE( jobobject_wake_filter_t, 0x8 );                 
    };                                 
};
#include "magic/jobobject_wake_filter_t.end.hpp"
SDK_VERIFY( struct nt::jobobject_wake_filter_t, 0x8 );
