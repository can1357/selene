#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_header_t.start.hpp"
namespace stor::port
{
    // [struct _READ_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_header_t                                  
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                msf;                    //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Msf
        _m02 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m03 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockAddress
        _m04 sdk::array<uint8_t, 2> allocation_length;      //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m05 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_READ_HEADER.$", 0xa, true, 0xffd1b43adfc04766 );                      
        SDK_FIXED_SIZE( read_header_t, 0xa );                      
    };                                                    
};
#include "magic/read_header_t.end.hpp"
SDK_VERIFY( struct stor::port::read_header_t, 0xa );
