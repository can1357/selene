#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/synchronize_cache10_t.start.hpp"
namespace stor::port
{
    // [struct _SYNCHRONIZE_CACHE10]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct synchronize_cache10_t                          
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                rel_addr;               //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RelAddr
        _m02 uint1_t                immediate;              //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Immediate
        _m03 uint3_t                lun;                    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m04 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockAddress
        _m05 sdk::array<uint8_t, 2> block_count;            //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .BlockCount
        _m06 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SYNCHRONIZE_CACHE10.$", 0xa, true, 0xee282dca051f7c15 );                      
        SDK_FIXED_SIZE( synchronize_cache10_t, 0xa );                      
    };                                                    
};
#include "magic/synchronize_cache10_t.end.hpp"
SDK_VERIFY( struct stor::port::synchronize_cache10_t, 0xa );
