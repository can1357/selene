#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sanitize_t.start.hpp"
namespace stor::port
{
    // [struct _SANITIZE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sanitize_t                                     
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 uint1_t                ause;                   //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .AUSE
        _m03 uint1_t                immediate;              //{ +0x0001@7  +0x0001@7  +0x0001@7  +0x0001@7  +0x0001@7  } | .Immediate
        _m04 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .ParameterListLength
        _m05 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SANITIZE.$", 0xa, true, 0x6c17cbcfda9ff322 );                      
        SDK_FIXED_SIZE( sanitize_t, 0xa );                      
    };                                                    
};
#include "magic/sanitize_t.end.hpp"
SDK_VERIFY( struct stor::port::sanitize_t, 0xa );
