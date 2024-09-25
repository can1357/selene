#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace nt { struct event_filter_descriptor_t; }

#include "magic/enable_trace_parameters_v1_t.start.hpp"
namespace win
{
    // [struct _ENABLE_TRACE_PARAMETERS_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_trace_parameters_v1_t                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                            
        _m00 uint32_t                              version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                              enable_property;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnableProperty
        _m02 uint32_t                              control_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlFlags
        _m03 struct nt::guid_t                     source_id;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SourceId
        _m04 struct nt::event_filter_descriptor_t* enable_filter_desc;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EnableFilterDesc
                                                                      
        SDK_MAGIC_PROPERTIES( "_ENABLE_TRACE_PARAMETERS_V1.$", 0x28, true, 0x4ae42461c871b86a );                   
        SDK_FIXED_SIZE( enable_trace_parameters_v1_t, 0x28 );                   
    };                                                                
};
#include "magic/enable_trace_parameters_v1_t.end.hpp"
SDK_VERIFY( struct win::enable_trace_parameters_v1_t, 0x28 );
