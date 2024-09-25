#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_luns_t.start.hpp"
namespace stor::port
{
    // [struct _REPORT_LUNS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct report_luns_t                              
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 sdk::array<uint8_t, 4> allocation_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .AllocationLength
        _m02 uint8_t                control;            //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_REPORT_LUNS.$", 0xc, true, 0x31243b9659196899 );                  
        SDK_FIXED_SIZE( report_luns_t, 0xc );                  
    };                                                
};
#include "magic/report_luns_t.end.hpp"
SDK_VERIFY( struct stor::port::report_luns_t, 0xc );
