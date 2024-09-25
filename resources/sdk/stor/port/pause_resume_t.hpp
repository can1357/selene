#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pause_resume_t.start.hpp"
namespace stor::port
{
    // [struct _PAUSE_RESUME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pause_resume_t                
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 uint8_t action;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Action
        _m03 uint8_t control;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_PAUSE_RESUME.$", 0xa, true, 0x380e008f57e29ef9 );                    
        SDK_FIXED_SIZE( pause_resume_t, 0xa );                    
    };                                   
};
#include "magic/pause_resume_t.end.hpp"
SDK_VERIFY( struct stor::port::pause_resume_t, 0xa );
