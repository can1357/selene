#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/provider_instance_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_PROVIDER_INSTANCE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_instance_info_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t next_offset;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextOffset
        _m01 uint32_t enable_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnableCount
        _m02 uint32_t pid;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pid
        _m03 uint32_t flags;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                   
        SDK_MAGIC_PROPERTIES( "_TRACE_PROVIDER_INSTANCE_INFO.$", 0x10, true, 0x4d79585e45c21e12 );             
        SDK_FIXED_SIZE( provider_instance_info_t, 0x10 );             
    };                             
};
#include "magic/provider_instance_info_t.end.hpp"
SDK_VERIFY( struct trace::provider_instance_info_t, 0x10 );
