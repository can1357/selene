#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protection_t.start.hpp"
namespace ps
{
    // [struct _PS_PROTECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct protection_t     
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 uint8_t level;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m01 uint3_t type;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Type
        _m02 uint1_t audit;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Audit
        _m03 uint4_t signer;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Signer
                            
        SDK_NONVOL_PROPERTIES( "_PS_PROTECTION.$", 0x1, true, 0xc7644c236eb6c0b0 );       
        SDK_FIXED_SIZE( protection_t, 0x1 );       
    };                      
};
#include "magic/protection_t.end.hpp"
SDK_VERIFY( struct ps::protection_t, 0x1 );
