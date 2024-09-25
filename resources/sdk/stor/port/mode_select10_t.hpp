#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_select10_t.start.hpp"
namespace stor::port
{
    // [struct _MODE_SELECT10]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mode_select10_t                                
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                sp_bit;                 //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SPBit
        _m02 uint1_t                pf_bit;                 //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .PFBit
        _m03 uint3_t                logical_unit_number;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .ParameterListLength
        _m05 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_MODE_SELECT10.$", 0xa, true, 0x731692bc382dfeee );                      
        SDK_FIXED_SIZE( mode_select10_t, 0xa );                      
    };                                                    
};
#include "magic/mode_select10_t.end.hpp"
SDK_VERIFY( struct stor::port::mode_select10_t, 0xa );
