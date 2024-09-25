#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct event_filter_header_t;   }
namespace nt { struct event_filter_level_kw_t; }

#include "magic/filter_header_t.start.hpp"
namespace etw
{
    struct filter_pid_t;
    struct payload_filter_t;
    struct filter_string_token_t;
    struct perfect_hash_function_t;
    struct filter_event_name_data_t;

    // [struct _ETW_FILTER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_header_t                                                    
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                    
        _m00 int32_t                               filter_flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterFlags
        _m01 struct etw::filter_pid_t*             pid_filter;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PidFilter
        _m02 struct etw::filter_string_token_t*    exe_filter;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExeFilter
        _m03 struct etw::filter_string_token_t*    pkg_id_filter;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PkgIdFilter
        _m04 struct etw::filter_string_token_t*    pkg_app_id_filter;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PkgAppIdFilter
        _m05 struct etw::perfect_hash_function_t*  event_id_filter;             //{ +0x0030    +0x0048    +0x0048    +0x0048    } | .EventIdFilter
        _m06 struct etw::payload_filter_t*         payload_filter;              //{ +0x0038    +0x0050    +0x0050    +0x0050    } | .PayloadFilter
        _m07 struct nt::event_filter_header_t*     provider_side_filter;        //{ +0x0040    +0x0058    +0x0058    +0x0058    } | .ProviderSideFilter
        _m08 struct etw::filter_event_name_data_t* event_name_filter;           //{ +0x0048    +0x0060    +0x0060    +0x0060    } | .EventNameFilter
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                    
        _m09 struct etw::filter_string_token_t*    container_filter;            //{ +0x0028    +0x0028    +0x0028    } | .ContainerFilter
        _m10 struct etw::perfect_hash_function_t*  stack_walk_id_filter;        //{ +0x0030    +0x0030    +0x0030    } | .StackWalkIdFilter
        _m11 struct etw::filter_event_name_data_t* stack_walk_name_filter;      //{ +0x0038    +0x0038    +0x0038    } | .StackWalkNameFilter
        _m12 struct nt::event_filter_level_kw_t*   stack_walk_level_kw_filter;  //{ +0x0040    +0x0040    +0x0040    } | .StackWalkLevelKwFilter
                                                                              
        // Windows 10 v1607                                                   
        //                                                                    
        _m13 struct etw::perfect_hash_function_t*  stack_walk_filter;           //{ +0x0028    } | .StackWalkFilter
                                                                              
        SDK_MAGIC_PROPERTIES( "_ETW_FILTER_HEADER.$", 0x68, true, 0x3c901dcc65f6b3fc );                           
        SDK_DYNAMIC_SIZE( filter_header_t );                                  
    };                                                                        
};
#include "magic/filter_header_t.end.hpp"
