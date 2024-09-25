#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"
#include "../nt/kprofile_source_t.hpp"

#include "magic/profile_remove_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROFILE_REMOVE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_remove_information_t                                   
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 enum nt::kprofile_source_t     profile_source;                 //{ +0x0004    +0x0004    +0x0004    } | .ProfileSource
        _m02 sdk::array<uint32_t, 3>        cpu_info_hierarchy;             //{ +0x0008    +0x0008    +0x0008    } | .CpuInfoHierarchy
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_REMOVE_INFORMATION.$", 0x14, true, 0x10a574047f1265d6 );                              
        SDK_FIXED_SIZE( profile_remove_information_t, 0x14 );                              
    };                                                                    
};
#include "magic/profile_remove_information_t.end.hpp"
SDK_VERIFY( struct etwi::profile_remove_information_t, 0x14 );
