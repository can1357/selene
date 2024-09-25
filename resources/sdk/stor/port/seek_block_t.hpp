#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/seek_block_t.start.hpp"
namespace stor::port
{
    // [struct _SEEK_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct seek_block_t                            
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 sdk::array<uint8_t, 3> block_address;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .BlockAddress
        _m03 uint1_t                link;            //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .Link
        _m04 uint1_t                flag;            //{ +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  } | .Flag
        _m05 uint2_t                vendor_unique;   //{ +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  } | .VendorUnique
                                                   
        SDK_NONVOL_PROPERTIES( "_SEEK_BLOCK.$", 0x6, true, 0x93330fbccac74327 );               
        SDK_FIXED_SIZE( seek_block_t, 0x6 );               
    };                                             
};
#include "magic/seek_block_t.end.hpp"
SDK_VERIFY( struct stor::port::seek_block_t, 0x6 );
