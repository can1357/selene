#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/heap_tracing_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_HEAP_TRACING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_tracing_information_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 sdk::array<uint32_t, 1>        process_id;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessId
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_HEAP_TRACING_INFORMATION.$", 0x8, true, 0x29d8f18d414f8f40 );                              
        SDK_FIXED_SIZE( heap_tracing_information_t, 0x8 );                              
    };                                                                    
};
#include "magic/heap_tracing_information_t.end.hpp"
SDK_VERIFY( struct etwi::heap_tracing_information_t, 0x8 );
