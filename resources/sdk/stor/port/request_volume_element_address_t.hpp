#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_volume_element_address_t.start.hpp"
namespace stor::port
{
    // [struct _REQUEST_VOLUME_ELEMENT_ADDRESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_volume_element_address_t                  
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                   
        _m00 uint8_t                operation_code;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint4_t                element_type;              //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ElementType
        _m02 uint1_t                vol_tag;                   //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .VolTag
        _m03 uint3_t                logical_unit_number;       //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 sdk::array<uint8_t, 2> starting_element_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingElementAddress
        _m05 sdk::array<uint8_t, 2> number_elements;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberElements
        _m06 sdk::array<uint8_t, 3> allocation_length;         //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m07 uint8_t                control;                   //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                             
        SDK_NONVOL_PROPERTIES( "_REQUEST_VOLUME_ELEMENT_ADDRESS.$", 0xc, true, 0x95186beccd2f58c4 );                         
        SDK_FIXED_SIZE( request_volume_element_address_t, 0xc );                         
    };                                                       
};
#include "magic/request_volume_element_address_t.end.hpp"
SDK_VERIFY( struct stor::port::request_volume_element_address_t, 0xc );
