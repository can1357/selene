#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logsense_t.start.hpp"
namespace stor::port
{
    // [struct _LOGSENSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logsense_t                                   
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                sp_bit;               //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SPBit
        _m02 uint1_t                ppc_bit;              //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .PPCBit
        _m03 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 uint6_t                page_code;            //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .PageCode
        _m05 uint2_t                pc_bit;               //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .PCBit
        _m06 uint8_t                sub_page_code;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SubPageCode
        _m07 sdk::array<uint8_t, 2> parameter_pointer;    //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .ParameterPointer
        _m08 sdk::array<uint8_t, 2> allocation_length;    //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m09 uint8_t                control;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_LOGSENSE.$", 0xa, true, 0x76327f2939535314 );                    
        SDK_FIXED_SIZE( logsense_t, 0xa );                    
    };                                                  
};
#include "magic/logsense_t.end.hpp"
SDK_VERIFY( struct stor::port::logsense_t, 0xa );
