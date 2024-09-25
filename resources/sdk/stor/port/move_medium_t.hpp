#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/move_medium_t.start.hpp"
namespace stor::port
{
    // [struct _MOVE_MEDIUM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct move_medium_t                                        
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 uint8_t                operation_code;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;          //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 2> transport_element_address;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransportElementAddress
        _m03 sdk::array<uint8_t, 2> source_element_address;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SourceElementAddress
        _m04 sdk::array<uint8_t, 2> destination_element_address;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .DestinationElementAddress
        _m05 uint1_t                flip;                         //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .Flip
        _m06 uint8_t                control;                      //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                                
        SDK_NONVOL_PROPERTIES( "_MOVE_MEDIUM.$", 0xc, true, 0x806306d630c00788 );                            
        SDK_FIXED_SIZE( move_medium_t, 0xc );                            
    };                                                          
};
#include "magic/move_medium_t.end.hpp"
SDK_VERIFY( struct stor::port::move_medium_t, 0xc );
