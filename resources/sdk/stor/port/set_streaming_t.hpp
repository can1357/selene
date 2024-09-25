#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_streaming_t.start.hpp"
namespace stor::port
{
    // [struct _SET_STREAMING]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_streaming_t                                
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .ParameterListLength
        _m02 uint8_t                control;                //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SET_STREAMING.$", 0xc, true, 0x3a9718b7cdcf49e1 );                      
        SDK_FIXED_SIZE( set_streaming_t, 0xc );                      
    };                                                    
};
#include "magic/set_streaming_t.end.hpp"
SDK_VERIFY( struct stor::port::set_streaming_t, 0xc );
