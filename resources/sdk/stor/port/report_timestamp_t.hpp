#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_timestamp_t.start.hpp"
namespace stor::port
{
    // [struct _REPORT_TIMESTAMP]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct report_timestamp_t                         
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 4> allocation_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_REPORT_TIMESTAMP.$", 0xc, true, 0x8e6abc502e046733 );                  
        SDK_FIXED_SIZE( report_timestamp_t, 0xc );                  
    };                                                
};
#include "magic/report_timestamp_t.end.hpp"
SDK_VERIFY( struct stor::port::report_timestamp_t, 0xc );
