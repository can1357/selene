#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_sense10_t.start.hpp"
namespace stor::port
{
    // [struct _MODE_SENSE10]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mode_sense10_t                             
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                dbd;                //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .Dbd
        _m02 uint1_t                long_lba_accepted;  //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .LongLBAAccepted
        _m03 uint6_t                page_code;          //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .PageCode
        _m04 uint2_t                pc;                 //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .Pc
        _m05 uint8_t                sub_page_code;      //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SubPageCode
        _m06 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m07 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_MODE_SENSE10.$", 0xa, true, 0x1f04b08ea3cebf0c );                  
        SDK_FIXED_SIZE( mode_sense10_t, 0xa );                  
    };                                                
};
#include "magic/mode_sense10_t.end.hpp"
SDK_VERIFY( struct stor::port::mode_sense10_t, 0xa );
