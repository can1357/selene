#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_set_position_t.start.hpp"
namespace win
{
    // [struct _TAPE_SET_POSITION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_set_position_t  
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t method;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
        _m01 uint32_t partition;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Partition
        _m02 int64_t  offset;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
        _m03 uint8_t  immediate;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Immediate
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_SET_POSITION.$", 0x18, true, 0x8feb631960ab68a2 );          
        SDK_FIXED_SIZE( tape_set_position_t, 0x18 );          
    };                          
};
#include "magic/tape_set_position_t.end.hpp"
SDK_VERIFY( struct win::tape_set_position_t, 0x18 );
