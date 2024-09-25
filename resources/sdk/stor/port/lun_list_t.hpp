#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lun_list_t.start.hpp"
namespace stor::port
{
    // [struct _LUN_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lun_list_t                                           
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                      
        _m00 sdk::array<uint8_t, 4>             lun_list_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LunListLength
        _m01 sdk::array<sdk::array<uint8_t, 8>> lun;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lun
                                                                
        SDK_NONVOL_PROPERTIES( "_LUN_LIST.$", 0x8, true, 0xd8e18d154f102385 );                
        SDK_FIXED_SIZE( lun_list_t, 0x8 );                      
    };                                                          
};
#include "magic/lun_list_t.end.hpp"
SDK_VERIFY( struct stor::port::lun_list_t, 0x8 );
