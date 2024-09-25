#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read12_t.start.hpp"
namespace stor::port
{
    // [struct _READ12]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read12_t                                     
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                relative_address;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RelativeAddress
        _m02 uint1_t                force_unit_access;    //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .ForceUnitAccess
        _m03 uint1_t                disable_page_out;     //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .DisablePageOut
        _m04 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m05 sdk::array<uint8_t, 4> logical_block;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlock
        _m06 sdk::array<uint8_t, 4> transfer_length;      //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .TransferLength
        _m07 uint1_t                streaming;            //{ +0x000a@7  +0x000a@7  +0x000a@7  +0x000a@7  +0x000a@7  } | .Streaming
        _m08 uint8_t                control;              //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_READ12.$", 0xc, true, 0x40819a3eeca9919a );                    
        SDK_FIXED_SIZE( read12_t, 0xc );                    
    };                                                  
};
#include "magic/read12_t.end.hpp"
SDK_VERIFY( struct stor::port::read12_t, 0xc );
