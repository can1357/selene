#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"
#include "../nt/perfinfo_groupmask_t.hpp"

#include "magic/groupmask_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_GROUPMASK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct groupmask_information_t                                         
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                 
        _m00 enum etwi::information_class_t  event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                        trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 struct nt::perfinfo_groupmask_t event_trace_group_masks;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EventTraceGroupMasks
                                                                           
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_GROUPMASK_INFORMATION.$", 0x30, true, 0xeb270a323e3b135f );                              
        SDK_FIXED_SIZE( groupmask_information_t, 0x30 );                              
    };                                                                     
};
#include "magic/groupmask_information_t.end.hpp"
SDK_VERIFY( struct etwi::groupmask_information_t, 0x30 );
