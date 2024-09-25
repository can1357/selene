#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct resource_descriptor_t; }

#include "magic/resource_conflict_trace_context_t.start.hpp"
namespace pnp
{
    // [struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_conflict_trace_context_t                     
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 uint8_t                           resource_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceType
        _m01 uint32_t                          alternative_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AlternativeCount
        _m02 struct io::resource_descriptor_t* resource_requests;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceRequests
        _m03 void*                             arbiter_instance;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ArbiterInstance
                                                                 
        SDK_MAGIC_PROPERTIES( "_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.$", 0x18, true, 0xcae41651228424fe );                  
        SDK_FIXED_SIZE( resource_conflict_trace_context_t, 0x18 );                  
    };                                                           
};
#include "magic/resource_conflict_trace_context_t.end.hpp"
SDK_VERIFY( struct pnp::resource_conflict_trace_context_t, 0x18 );
