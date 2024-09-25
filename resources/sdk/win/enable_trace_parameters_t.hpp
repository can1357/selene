#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace nt { struct event_filter_descriptor_t; }

#include "magic/enable_trace_parameters_t.start.hpp"
namespace win
{
    // [struct _ENABLE_TRACE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_trace_parameters_t                                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                            
        _m00 uint32_t                              version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                              enable_property;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnableProperty
        _m02 uint32_t                              control_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlFlags
        _m03 struct nt::guid_t                     source_id;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SourceId
        _m04 struct nt::event_filter_descriptor_t* enable_filter_desc;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EnableFilterDesc
        _m05 uint32_t                              filter_desc_count;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FilterDescCount
                                                                      
        SDK_MAGIC_PROPERTIES( "_ENABLE_TRACE_PARAMETERS.$", 0x30, true, 0x998437b5e177518e );                   
        SDK_FIXED_SIZE( enable_trace_parameters_t, 0x30 );                   
    };                                                                
};
#include "magic/enable_trace_parameters_t.end.hpp"
SDK_VERIFY( struct win::enable_trace_parameters_t, 0x30 );
