#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/profile_counter_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROFILE_COUNTER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_counter_information_t                                  
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 sdk::array<uint32_t, 1>        profile_source;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProfileSource
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_COUNTER_INFORMATION.$", 0x18, true, 0xd54e77b3f80983fc );                              
        SDK_FIXED_SIZE( profile_counter_information_t, 0x18 );                              
    };                                                                    
};
#include "magic/profile_counter_information_t.end.hpp"
SDK_VERIFY( struct etwi::profile_counter_information_t, 0x18 );
