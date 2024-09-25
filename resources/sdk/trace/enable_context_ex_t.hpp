#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_context_ex_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_CONTEXT_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_context_ex_t          
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t logger_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m01 uint8_t  level;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Level
        _m02 uint8_t  internal_flag;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .InternalFlag
        _m03 uint32_t enable_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnableFlags
        _m04 uint32_t enable_flags_high;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnableFlagsHigh
                                        
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_CONTEXT_EX.$", 0x10, true, 0xa3f5b14b00e2ddfd );                  
        SDK_FIXED_SIZE( enable_context_ex_t, 0x10 );                  
    };                                  
};
#include "magic/enable_context_ex_t.end.hpp"
SDK_VERIFY( struct trace::enable_context_ex_t, 0x10 );
