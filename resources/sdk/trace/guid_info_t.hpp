#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/guid_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_GUID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guid_info_t               
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t instance_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InstanceCount
                                     
        SDK_MAGIC_PROPERTIES( "_TRACE_GUID_INFO.$", 0x8, true, 0x1610f9aff26a489e );               
        SDK_FIXED_SIZE( guid_info_t, 0x8 );               
    };                               
};
#include "magic/guid_info_t.end.hpp"
SDK_VERIFY( struct trace::guid_info_t, 0x8 );
