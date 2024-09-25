#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_key_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_KEY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_key_t                                     
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ParameterListLength
        _m03 uint6_t                key_format;             //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .KeyFormat
        _m04 uint2_t                agid;                   //{ +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  } | .AGID
        _m05 uint8_t                control;                //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SEND_KEY.$", 0xc, true, 0x198052011b447172 );                      
        SDK_FIXED_SIZE( send_key_t, 0xc );                      
    };                                                    
};
#include "magic/send_key_t.end.hpp"
SDK_VERIFY( struct stor::port::send_key_t, 0xc );
