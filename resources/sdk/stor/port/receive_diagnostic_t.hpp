#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/receive_diagnostic_t.start.hpp"
namespace stor::port
{
    // [struct _RECEIVE_DIAGNOSTIC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct receive_diagnostic_t                       
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                page_code_valid;    //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .PageCodeValid
        _m02 uint8_t                page_code;          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PageCode
        _m03 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .AllocationLength
        _m04 uint8_t                control;            //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_RECEIVE_DIAGNOSTIC.$", 0x6, true, 0x9b09771adc170e55 );                  
        SDK_FIXED_SIZE( receive_diagnostic_t, 0x6 );                  
    };                                                
};
#include "magic/receive_diagnostic_t.end.hpp"
SDK_VERIFY( struct stor::port::receive_diagnostic_t, 0x6 );
