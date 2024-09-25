#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6verify_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6VERIFY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6verify_t                                 
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                fixed;                //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Fixed
        _m02 uint1_t                byte_compare;         //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .ByteCompare
        _m03 uint1_t                immediate;            //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .Immediate
        _m04 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m05 sdk::array<uint8_t, 3> verification_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .VerificationLength
        _m06 uint8_t                control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_CDB6VERIFY.$", 0x6, true, 0x9cb5dba802af837e );                    
        SDK_FIXED_SIZE( cdb6verify_t, 0x6 );                    
    };                                                  
};
#include "magic/cdb6verify_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6verify_t, 0x6 );
