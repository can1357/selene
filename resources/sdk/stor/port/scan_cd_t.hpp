#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scan_cd_t.start.hpp"
namespace stor::port
{
    // [struct _SCAN_CD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scan_cd_t                                 
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint8_t                operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                relative_address;  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RelativeAddress
        _m02 uint1_t                direct;            //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .Direct
        _m03 uint3_t                lun;               //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m04 sdk::array<uint8_t, 4> starting_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingAddress
        _m05 uint2_t                type;              //{ +0x0009@6  +0x0009@6  +0x0009@6  +0x0009@6  +0x0009@6  } | .Type
        _m06 uint8_t                control;           //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                     
        SDK_NONVOL_PROPERTIES( "_SCAN_CD.$", 0xc, true, 0xaeb9c050558a038f );                 
        SDK_FIXED_SIZE( scan_cd_t, 0xc );                 
    };                                               
};
#include "magic/scan_cd_t.end.hpp"
SDK_VERIFY( struct stor::port::scan_cd_t, 0xc );
