#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_volume_tag_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_VOLUME_TAG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_volume_tag_t                                 
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                   
        _m00 uint8_t                operation_code;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint4_t                element_type;              //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ElementType
        _m02 uint3_t                logical_unit_number;       //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 sdk::array<uint8_t, 2> starting_element_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingElementAddress
        _m04 uint5_t                action_code;               //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .ActionCode
        _m05 sdk::array<uint8_t, 2> parameter_list_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ParameterListLength
        _m06 uint8_t                control;                   //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                             
        SDK_NONVOL_PROPERTIES( "_SEND_VOLUME_TAG.$", 0xc, true, 0x840534eb2e472150 );                         
        SDK_FIXED_SIZE( send_volume_tag_t, 0xc );                         
    };                                                       
};
#include "magic/send_volume_tag_t.end.hpp"
SDK_VERIFY( struct stor::port::send_volume_tag_t, 0xc );
