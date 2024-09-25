#pragma once
#include <sdkgen/support_library.hpp>
#include "encapsulation_format_t.hpp"

#include "magic/task_offload_header_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TASK_OFFLOAD_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_offload_header_t                                      
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 uint32_t                            version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                            size;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                            offset_first_task;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OffsetFirstTask
        _m03 struct ndis::encapsulation_format_t encapsulation_format;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EncapsulationFormat
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_TASK_OFFLOAD_HEADER.$", 0x1c, true, 0x2cc3faa179389336 );                     
        SDK_FIXED_SIZE( task_offload_header_t, 0x1c );                     
    };                                                                
};
#include "magic/task_offload_header_t.end.hpp"
SDK_VERIFY( struct ndis::task_offload_header_t, 0x1c );
