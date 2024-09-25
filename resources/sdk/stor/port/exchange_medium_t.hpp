#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exchange_medium_t.start.hpp"
namespace stor::port
{
    // [struct _EXCHANGE_MEDIUM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exchange_medium_t                                     
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 uint8_t                operation_code;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;           //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 2> transport_element_address;     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransportElementAddress
        _m03 sdk::array<uint8_t, 2> source_element_address;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SourceElementAddress
        _m04 sdk::array<uint8_t, 2> destination1_element_address;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Destination1ElementAddress
        _m05 sdk::array<uint8_t, 2> destination2_element_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Destination2ElementAddress
        _m06 uint1_t                flip1;                         //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .Flip1
        _m07 uint1_t                flip2;                         //{ +0x000a@1  +0x000a@1  +0x000a@1  +0x000a@1  +0x000a@1  } | .Flip2
        _m08 uint8_t                control;                       //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                                 
        SDK_NONVOL_PROPERTIES( "_EXCHANGE_MEDIUM.$", 0xc, true, 0xf7f2c4866e5f9e4d );                             
        SDK_FIXED_SIZE( exchange_medium_t, 0xc );                             
    };                                                           
};
#include "magic/exchange_medium_t.end.hpp"
SDK_VERIFY( struct stor::port::exchange_medium_t, 0xc );
