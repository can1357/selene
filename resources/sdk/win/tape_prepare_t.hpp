#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_prepare_t.start.hpp"
namespace win
{
    // [struct _TAPE_PREPARE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_prepare_t       
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t operation;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Operation
        _m01 uint8_t  immediate;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Immediate
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_PREPARE.$", 0x8, true, 0x1f68b47028b90137 );          
        SDK_FIXED_SIZE( tape_prepare_t, 0x8 );          
    };                          
};
#include "magic/tape_prepare_t.end.hpp"
SDK_VERIFY( struct win::tape_prepare_t, 0x8 );
