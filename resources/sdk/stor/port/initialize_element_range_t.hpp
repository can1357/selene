#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/initialize_element_range_t.start.hpp"
namespace stor::port
{
    // [struct _INITIALIZE_ELEMENT_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct initialize_element_range_t                     
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                range;                  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Range
        _m02 uint3_t                logical_unit_nubmer;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNubmer
        _m03 sdk::array<uint8_t, 2> first_element_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .FirstElementAddress
        _m04 sdk::array<uint8_t, 2> number_of_elements;     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberOfElements
        _m05 uint1_t                no_bar_code;            //{ +0x0009@7  +0x0009@7  +0x0009@7  +0x0009@7  +0x0009@7  } | .NoBarCode
                                                          
        SDK_NONVOL_PROPERTIES( "_INITIALIZE_ELEMENT_RANGE.$", 0xa, true, 0x128951e437cb1a8c );                      
        SDK_FIXED_SIZE( initialize_element_range_t, 0xa );                      
    };                                                    
};
#include "magic/initialize_element_range_t.end.hpp"
SDK_VERIFY( struct stor::port::initialize_element_range_t, 0xa );
