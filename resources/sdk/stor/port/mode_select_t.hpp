#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_select_t.start.hpp"
namespace stor::port
{
    // [struct _MODE_SELECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mode_select_t                   
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint8_t operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t sp_bit;                 //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SPBit
        _m02 uint1_t pf_bit;                 //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .PFBit
        _m03 uint3_t logical_unit_number;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 uint8_t parameter_list_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ParameterListLength
        _m05 uint8_t control;                //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                           
        SDK_NONVOL_PROPERTIES( "_MODE_SELECT.$", 0x6, true, 0xe7f8a6e651ebaa96 );                      
        SDK_FIXED_SIZE( mode_select_t, 0x6 );                      
    };                                     
};
#include "magic/mode_select_t.end.hpp"
SDK_VERIFY( struct stor::port::mode_select_t, 0x6 );
