#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_flag_extension_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_FLAG_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_flag_extension_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint8_t  length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Length
        _m02 uint8_t  flag;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Flag
                                  
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_FLAG_EXTENSION.$", 0x4, true, 0xc6808d86fd11ca88 );       
        SDK_FIXED_SIZE( enable_flag_extension_t, 0x4 );       
    };                            
};
#include "magic/enable_flag_extension_t.end.hpp"
SDK_VERIFY( struct trace::enable_flag_extension_t, 0x4 );
