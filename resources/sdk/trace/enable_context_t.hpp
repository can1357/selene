#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_context_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_context_t         
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t logger_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m01 uint8_t  level;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Level
        _m02 uint8_t  internal_flag;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .InternalFlag
        _m03 uint32_t enable_flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnableFlags
                                    
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_CONTEXT.$", 0x8, true, 0x2839e8b339d1e207 );              
        SDK_FIXED_SIZE( enable_context_t, 0x8 );              
    };                              
};
#include "magic/enable_context_t.end.hpp"
SDK_VERIFY( struct trace::enable_context_t, 0x8 );
