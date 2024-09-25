#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logselect_t.start.hpp"
namespace stor::port
{
    // [struct _LOGSELECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logselect_t                                    
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                sp_bit;                 //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SPBit
        _m02 uint1_t                pcr_bit;                //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .PCRBit
        _m03 uint3_t                logical_unit_number;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 uint2_t                pc_bit;                 //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .PCBit
        _m05 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .ParameterListLength
        _m06 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_LOGSELECT.$", 0xa, true, 0x829e87ff2a301ea9 );                      
        SDK_FIXED_SIZE( logselect_t, 0xa );                      
    };                                                    
};
#include "magic/logselect_t.end.hpp"
SDK_VERIFY( struct stor::port::logselect_t, 0xa );
