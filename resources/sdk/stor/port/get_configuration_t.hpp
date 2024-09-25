#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_configuration_t.start.hpp"
namespace stor::port
{
    // [struct _GET_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_configuration_t                        
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint2_t                request_type;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RequestType
        _m02 sdk::array<uint8_t, 2> starting_feature;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingFeature
        _m03 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m04 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_GET_CONFIGURATION.$", 0xa, true, 0x42427f3fc8c21edb );                  
        SDK_FIXED_SIZE( get_configuration_t, 0xa );                  
    };                                                
};
#include "magic/get_configuration_t.end.hpp"
SDK_VERIFY( struct stor::port::get_configuration_t, 0xa );
