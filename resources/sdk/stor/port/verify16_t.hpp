#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verify16_t.start.hpp"
namespace stor::port
{
    // [struct _VERIFY16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct verify16_t                                   
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                byte_check;           //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .ByteCheck
        _m02 uint1_t                block_verify;         //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .BlockVerify
        _m03 uint1_t                disable_page_out;     //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .DisablePageOut
        _m04 uint3_t                verify_protect;       //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .VerifyProtect
        _m05 sdk::array<uint8_t, 8> logical_block;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlock
        _m06 sdk::array<uint8_t, 4> verification_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .VerificationLength
        _m07 uint1_t                streaming;            //{ +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  } | .Streaming
        _m08 uint8_t                control;              //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                        
        SDK_NONVOL_PROPERTIES( "_VERIFY16.$", 0x10, true, 0x6acf509d9a6de323 );                    
        SDK_FIXED_SIZE( verify16_t, 0x10 );                    
    };                                                  
};
#include "magic/verify16_t.end.hpp"
SDK_VERIFY( struct stor::port::verify16_t, 0x10 );
