#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protocol_in_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_PROTOCOL_IN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct protocol_in_t                                       
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                operation_code;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint8_t                security_protocol;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .SecurityProtocol
        _m02 sdk::array<uint8_t, 2> security_protocol_specific;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SecurityProtocolSpecific
        _m03 uint1_t                inc_512;                     //{ +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  } | .INC_512
        _m04 sdk::array<uint8_t, 4> allocation_length;           //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .AllocationLength
        _m05 uint8_t                control;                     //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                               
        SDK_NONVOL_PROPERTIES( "_SECURITY_PROTOCOL_IN.$", 0xc, true, 0x904e1844d713a18 );                           
        SDK_FIXED_SIZE( protocol_in_t, 0xc );                           
    };                                                         
};
#include "magic/protocol_in_t.end.hpp"
SDK_VERIFY( struct sec::protocol_in_t, 0xc );
