#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_stream_param_t.start.hpp"
namespace rtl
{
    // [struct _RTL_MEMORY_STREAM_PARAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_stream_param_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t param_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParamId
        _m01 uint32_t size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                                
        SDK_MAGIC_PROPERTIES( "_RTL_MEMORY_STREAM_PARAM.$", 0x8, true, 0x7bbf01feab355230 );         
        SDK_FIXED_SIZE( memory_stream_param_t, 0x8 );         
    };                          
};
#include "magic/memory_stream_param_t.end.hpp"
SDK_VERIFY( struct rtl::memory_stream_param_t, 0x8 );
