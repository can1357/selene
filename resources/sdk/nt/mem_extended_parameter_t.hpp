#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mem_extended_parameter_t.start.hpp"
namespace nt
{
    // [struct MEM_EXTENDED_PARAMETER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mem_extended_parameter_t
    {                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint8_t  type;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Type
        _m01 uint64_t u_long64;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ULong64
        _m02 void*    pointer;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pointer
        _m03 uint64_t size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m04 void*    handle;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handle
        _m05 uint32_t u_long;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ULong
                                   
        SDK_NONVOL_PROPERTIES( "MEM_EXTENDED_PARAMETER.$", 0x10, true, 0xcee39910bca33b3 );         
        SDK_FIXED_SIZE( mem_extended_parameter_t, 0x10 );         
    };                             
};
#include "magic/mem_extended_parameter_t.end.hpp"
SDK_VERIFY( struct nt::mem_extended_parameter_t, 0x10 );
