#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_get_position_t.start.hpp"
namespace win
{
    // [struct _TAPE_GET_POSITION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_get_position_t  
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t partition;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Partition
        _m02 int64_t  offset;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_GET_POSITION.$", 0x10, true, 0x1af873b124904c95 );          
        SDK_FIXED_SIZE( tape_get_position_t, 0x10 );          
    };                          
};
#include "magic/tape_get_position_t.end.hpp"
SDK_VERIFY( struct win::tape_get_position_t, 0x10 );
