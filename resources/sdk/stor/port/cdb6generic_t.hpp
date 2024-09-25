#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6generic_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6GENERIC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6generic_t                                 
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint8_t                operation_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;             //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint4_t                command_unique_bits;   //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .CommandUniqueBits
        _m03 uint3_t                logical_unit_number;   //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 sdk::array<uint8_t, 3> command_unique_bytes;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .CommandUniqueBytes
        _m05 uint1_t                link;                  //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .Link
        _m06 uint1_t                flag;                  //{ +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  } | .Flag
        _m07 uint2_t                vendor_unique;         //{ +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  } | .VendorUnique
                                                         
        SDK_NONVOL_PROPERTIES( "_CDB6GENERIC.$", 0x6, true, 0xfd4f189fa43f551a );                     
        SDK_FIXED_SIZE( cdb6generic_t, 0x6 );                     
    };                                                   
};
#include "magic/cdb6generic_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6generic_t, 0x6 );
