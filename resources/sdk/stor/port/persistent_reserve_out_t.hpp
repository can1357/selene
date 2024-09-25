#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/persistent_reserve_out_t.start.hpp"
namespace stor::port
{
    // [struct _PERSISTENT_RESERVE_OUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct persistent_reserve_out_t                       
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 uint4_t                type;                   //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Type
        _m03 uint4_t                scope;                  //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .Scope
        _m04 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .ParameterListLength
        _m05 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_PERSISTENT_RESERVE_OUT.$", 0xa, true, 0xe6a0240a47ff623a );                      
        SDK_FIXED_SIZE( persistent_reserve_out_t, 0xa );                      
    };                                                    
};
#include "magic/persistent_reserve_out_t.end.hpp"
SDK_VERIFY( struct stor::port::persistent_reserve_out_t, 0xa );
