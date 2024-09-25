#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_tape_marks_t.start.hpp"
namespace stor::port
{
    // [struct _WRITE_TAPE_MARKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct write_tape_marks_t                           
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;            //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint1_t                write_set_marks;      //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .WriteSetMarks
        _m03 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 sdk::array<uint8_t, 3> transfer_length;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransferLength
        _m05 uint8_t                control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_WRITE_TAPE_MARKS.$", 0x6, true, 0x1ac1f912cbce3a70 );                    
        SDK_FIXED_SIZE( write_tape_marks_t, 0x6 );                    
    };                                                  
};
#include "magic/write_tape_marks_t.end.hpp"
SDK_VERIFY( struct stor::port::write_tape_marks_t, 0x6 );
