#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_key_t.start.hpp"
namespace stor::port
{
    // [struct _REPORT_KEY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct report_key_t                                   
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockAddress
        _m03 sdk::array<uint8_t, 2> allocation_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationLength
        _m04 uint6_t                key_format;             //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .KeyFormat
        _m05 uint2_t                agid;                   //{ +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  } | .AGID
        _m06 uint8_t                control;                //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_REPORT_KEY.$", 0xc, true, 0x96c7428e5a63778f );                      
        SDK_FIXED_SIZE( report_key_t, 0xc );                      
    };                                                    
};
#include "magic/report_key_t.end.hpp"
SDK_VERIFY( struct stor::port::report_key_t, 0xc );
