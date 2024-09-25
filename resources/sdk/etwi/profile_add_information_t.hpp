#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"
#include "profile_add_information_v2_t.hpp"

#include "magic/profile_add_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROFILE_ADD_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_add_information_t                                                 
    {                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                           
        _m00 enum etwi::information_class_t            event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint8_t                                   version;                        //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 struct etwi::profile_add_information_v2_t v2;                             //{ +0x0008    +0x0008    +0x0008    } | .V2
        _m03 sdk::array<uint32_t, 3>                   cpu_info_hierarchy;             //{ +0x0010    +0x0010    +0x0010    } | .CpuInfoHierarchy
        _m04 uint32_t                                  initial_interval;               //{ +0x001c    +0x001c    +0x001c    } | .InitialInterval
        _m05 uint8_t                                   persist;                        //{ +0x0020    +0x0020    +0x0020    } | .Persist
        _m06 sdk::array<wchar_t, 1>                    profile_source_description;     //{ +0x0022    +0x0022    +0x0022    } | .ProfileSourceDescription
                                                                                     
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_ADD_INFORMATION.$", 0x24, true, 0xf715dfff7a089678 );                              
        SDK_FIXED_SIZE( profile_add_information_t, 0x24 );                              
    };                                                                               
};
#include "magic/profile_add_information_t.end.hpp"
SDK_VERIFY( struct etwi::profile_add_information_t, 0x24 );
