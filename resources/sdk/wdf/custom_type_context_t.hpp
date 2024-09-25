#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_type_context_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CUSTOM_TYPE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custom_type_context_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint64_t data;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                
        SDK_MAGIC_PROPERTIES( "_WDF_CUSTOM_TYPE_CONTEXT.$", 0x10, true, 0x9e48c85cccd5b1d9 );     
        SDK_FIXED_SIZE( custom_type_context_t, 0x10 );     
    };                          
};
#include "magic/custom_type_context_t.end.hpp"
SDK_VERIFY( struct wdf::custom_type_context_t, 0x10 );
