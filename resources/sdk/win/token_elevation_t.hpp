#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_elevation_t.start.hpp"
namespace win
{
    // [struct _TOKEN_ELEVATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_elevation_t            
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t token_is_elevated;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenIsElevated
                                        
        SDK_NONVOL_PROPERTIES( "_TOKEN_ELEVATION.$", 0x4, true, 0x2e77f49763cb1a29 );                  
        SDK_FIXED_SIZE( token_elevation_t, 0x4 );                  
    };                                  
};
#include "magic/token_elevation_t.end.hpp"
SDK_VERIFY( struct win::token_elevation_t, 0x4 );
