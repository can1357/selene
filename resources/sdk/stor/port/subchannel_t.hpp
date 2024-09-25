#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/subchannel_t.start.hpp"
namespace stor::port
{
    // [struct _SUBCHANNEL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct subchannel_t                                 
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                msf;                  //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Msf
        _m02 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint1_t                sub_q;                //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .SubQ
        _m04 uint8_t                format;               //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Format
        _m05 uint8_t                track_number;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TrackNumber
        _m06 sdk::array<uint8_t, 2> allocation_length;    //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m07 uint8_t                control;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_SUBCHANNEL.$", 0xa, true, 0xd8a19a73b4fdb997 );                    
        SDK_FIXED_SIZE( subchannel_t, 0xa );                    
    };                                                  
};
#include "magic/subchannel_t.end.hpp"
SDK_VERIFY( struct stor::port::subchannel_t, 0xa );
