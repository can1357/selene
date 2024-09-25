#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/switch_context_data_t.start.hpp"
namespace tag
{
    // [struct tagSWITCH_CONTEXT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_context_data_t                                        
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                              
        _m00 uint64_t                         ull_os_max_version_tested;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullOsMaxVersionTested
        _m01 uint32_t                         ul_target_platform;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulTargetPlatform
        _m02 uint64_t                         ull_context_minimum;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullContextMinimum
        _m03 struct nt::guid_t                gu_platform;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .guPlatform
        _m04 struct nt::guid_t                gu_min_platform;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .guMinPlatform
        _m05 uint32_t                         ul_context_source;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ulContextSource
        _m06 uint32_t                         ul_element_count;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ulElementCount
        _m07 sdk::array<struct nt::guid_t, 1> gu_elements;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .guElements
                                                                        
        SDK_MAGIC_PROPERTIES( "tagSWITCH_CONTEXT_DATA.$", 0x340, true, 0x2fcb6d7772198307 );                          
        SDK_DYNAMIC_SIZE( switch_context_data_t );                          
    };                                                                  
};
#include "magic/switch_context_data_t.end.hpp"
