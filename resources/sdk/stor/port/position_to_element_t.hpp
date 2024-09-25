#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/position_to_element_t.start.hpp"
namespace stor::port
{
    // [struct _POSITION_TO_ELEMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct position_to_element_t                                
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 uint8_t                operation_code;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;          //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 2> transport_element_address;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransportElementAddress
        _m03 sdk::array<uint8_t, 2> destination_element_address;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DestinationElementAddress
        _m04 uint1_t                flip;                         //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .Flip
        _m05 uint8_t                control;                      //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                                
        SDK_NONVOL_PROPERTIES( "_POSITION_TO_ELEMENT.$", 0xa, true, 0xbe333d522273b964 );                            
        SDK_FIXED_SIZE( position_to_element_t, 0xa );                            
    };                                                          
};
#include "magic/position_to_element_t.end.hpp"
SDK_VERIFY( struct stor::port::position_to_element_t, 0xa );
