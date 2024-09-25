#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_sense_t.start.hpp"
namespace stor::port
{
    // [struct _MODE_SENSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mode_sense_t                
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint8_t operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t dbd;                //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .Dbd
        _m02 uint6_t page_code;          //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .PageCode
        _m03 uint2_t pc;                 //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .Pc
        _m04 uint8_t sub_page_code;      //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SubPageCode
        _m05 uint8_t allocation_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationLength
        _m06 uint8_t control;            //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                       
        SDK_NONVOL_PROPERTIES( "_MODE_SENSE.$", 0x6, true, 0x3ca3ea0a4a738118 );                  
        SDK_FIXED_SIZE( mode_sense_t, 0x6 );                  
    };                                 
};
#include "magic/mode_sense_t.end.hpp"
SDK_VERIFY( struct stor::port::mode_sense_t, 0x6 );
