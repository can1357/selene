#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sequence_t.start.hpp"
namespace power
{
    // [struct _POWER_SEQUENCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sequence_t             
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t sequence_d1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SequenceD1
        _m01 uint32_t sequence_d2;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SequenceD2
        _m02 uint32_t sequence_d3;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SequenceD3
                                  
        SDK_NONVOL_PROPERTIES( "_POWER_SEQUENCE.$", 0xc, true, 0xfa71dfc6e9065bb8 );            
        SDK_FIXED_SIZE( sequence_t, 0xc );            
    };                            
};
#include "magic/sequence_t.end.hpp"
SDK_VERIFY( struct power::sequence_t, 0xc );
