#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/abortpath_t.start.hpp"
namespace tag
{
    // [struct tagABORTPATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct abortpath_t             
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                         
        _m00 struct tag::emr_t emr;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
                                   
        SDK_NONVOL_PROPERTIES( "tagABORTPATH.$", 0x8, true, 0x7d4ea77d99eeae8b );    
        SDK_FIXED_SIZE( abortpath_t, 0x8 );    
    };                             
};
#include "magic/abortpath_t.end.hpp"
SDK_VERIFY( struct tag::abortpath_t, 0x8 );
