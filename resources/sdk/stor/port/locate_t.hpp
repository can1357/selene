#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/locate_t.start.hpp"
namespace stor::port
{
    // [struct _LOCATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct locate_t                                       
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;              //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint1_t                cp_bit;                 //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .CPBit
        _m03 uint1_t                bt_bit;                 //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .BTBit
        _m04 uint3_t                logical_unit_number;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m05 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .LogicalBlockAddress
        _m06 uint8_t                partition;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Partition
        _m07 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_LOCATE.$", 0xa, true, 0xbdf1a4b5a2dc4dbd );                      
        SDK_FIXED_SIZE( locate_t, 0xa );                      
    };                                                    
};
#include "magic/locate_t.end.hpp"
SDK_VERIFY( struct stor::port::locate_t, 0xa );
