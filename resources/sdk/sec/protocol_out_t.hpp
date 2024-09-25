#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protocol_out_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_PROTOCOL_OUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct protocol_out_t                                      
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                operation_code;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint8_t                security_protocol;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .SecurityProtocol
        _m02 sdk::array<uint8_t, 2> security_protocol_specific;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SecurityProtocolSpecific
        _m03 uint1_t                inc_512;                     //{ +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  } | .INC_512
        _m04 sdk::array<uint8_t, 4> allocation_length;           //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .AllocationLength
        _m05 uint8_t                control;                     //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                               
        SDK_NONVOL_PROPERTIES( "_SECURITY_PROTOCOL_OUT.$", 0xc, true, 0x7ce45f4d722880ee );                           
        SDK_FIXED_SIZE( protocol_out_t, 0xc );                           
    };                                                         
};
#include "magic/protocol_out_t.end.hpp"
SDK_VERIFY( struct sec::protocol_out_t, 0xc );
