#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/seek_t.start.hpp"
namespace stor::port
{
    // [struct _SEEK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct seek_t                                         
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockAddress
        _m03 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SEEK.$", 0xa, true, 0x5327948922a1fc53 );                      
        SDK_FIXED_SIZE( seek_t, 0xa );                      
    };                                                    
};
#include "magic/seek_t.end.hpp"
SDK_VERIFY( struct stor::port::seek_t, 0xa );
