#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_context_type_info_v1_0_t.start.hpp"
namespace wdf
{
    // [struct _WDF_OBJECT_CONTEXT_TYPE_INFO_V1_0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_context_type_info_v1_0_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 char*    context_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextName
        _m02 uint64_t context_size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContextSize
                                          
        SDK_MAGIC_PROPERTIES( "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_0.$", 0x18, true, 0xfcf3741b74352346 );             
        SDK_FIXED_SIZE( object_context_type_info_v1_0_t, 0x18 );             
    };                                    
};
#include "magic/object_context_type_info_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::object_context_type_info_v1_0_t, 0x18 );
