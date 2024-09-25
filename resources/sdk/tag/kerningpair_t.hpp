#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kerningpair_t.start.hpp"
namespace tag
{
    // [struct tagKERNINGPAIR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kerningpair_t            
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t w_first;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .wFirst
        _m01 uint16_t w_second;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .wSecond
        _m02 int32_t  i_kern_amount;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .iKernAmount
                                    
        SDK_NONVOL_PROPERTIES( "tagKERNINGPAIR.$", 0x8, true, 0x46efd1793db114f );              
        SDK_FIXED_SIZE( kerningpair_t, 0x8 );              
    };                              
};
#include "magic/kerningpair_t.end.hpp"
SDK_VERIFY( struct tag::kerningpair_t, 0x8 );
