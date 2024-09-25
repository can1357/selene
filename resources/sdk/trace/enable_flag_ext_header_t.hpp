#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_flag_ext_header_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_FLAG_EXT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_flag_ext_header_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t length;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t items;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Items
                                   
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_FLAG_EXT_HEADER.$", 0x4, true, 0x2cb2362db0f399d6 );       
        SDK_FIXED_SIZE( enable_flag_ext_header_t, 0x4 );       
    };                             
};
#include "magic/enable_flag_ext_header_t.end.hpp"
SDK_VERIFY( struct trace::enable_flag_ext_header_t, 0x4 );
