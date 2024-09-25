#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/print_t.start.hpp"
namespace stor::port
{
    // [struct _PRINT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct print_t                                      
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 3> transfer_length;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransferLength
        _m03 uint8_t                control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_PRINT.$", 0x6, true, 0x8fc044c7825f3b82 );                    
        SDK_FIXED_SIZE( print_t, 0x6 );                    
    };                                                  
};
#include "magic/print_t.end.hpp"
SDK_VERIFY( struct stor::port::print_t, 0x6 );
