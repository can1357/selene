#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/synchronize_cache16_t.start.hpp"
namespace stor::port
{
    // [struct _SYNCHRONIZE_CACHE16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct synchronize_cache16_t                   
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;       //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Immediate
        _m02 sdk::array<uint8_t, 8> logical_block;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlock
        _m03 sdk::array<uint8_t, 4> block_count;     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .BlockCount
        _m04 uint8_t                control;         //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                   
        SDK_NONVOL_PROPERTIES( "_SYNCHRONIZE_CACHE16.$", 0x10, true, 0x8ec8f3578a1e9946 );               
        SDK_FIXED_SIZE( synchronize_cache16_t, 0x10 );               
    };                                             
};
#include "magic/synchronize_cache16_t.end.hpp"
SDK_VERIFY( struct stor::port::synchronize_cache16_t, 0x10 );
