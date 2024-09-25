#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/persistent_reserve_in_t.start.hpp"
namespace stor::port
{
    // [struct _PERSISTENT_RESERVE_IN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct persistent_reserve_in_t                    
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_PERSISTENT_RESERVE_IN.$", 0xa, true, 0x1170547bc9125248 );                  
        SDK_FIXED_SIZE( persistent_reserve_in_t, 0xa );                  
    };                                                
};
#include "magic/persistent_reserve_in_t.end.hpp"
SDK_VERIFY( struct stor::port::persistent_reserve_in_t, 0xa );
