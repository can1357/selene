#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_erase_t.start.hpp"
namespace win
{
    // [struct _TAPE_ERASE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_erase_t         
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  immediate;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Immediate
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_ERASE.$", 0x8, true, 0x4ee97a54959fb596 );          
        SDK_FIXED_SIZE( tape_erase_t, 0x8 );          
    };                          
};
#include "magic/tape_erase_t.end.hpp"
SDK_VERIFY( struct win::tape_erase_t, 0x8 );
