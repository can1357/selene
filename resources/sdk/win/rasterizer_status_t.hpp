#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rasterizer_status_t.start.hpp"
namespace win
{
    // [struct _RASTERIZER_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rasterizer_status_t     
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 int16_t n_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .nSize
        _m01 int16_t w_flags;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .wFlags
        _m02 int16_t n_language_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .nLanguageID
                                   
        SDK_NONVOL_PROPERTIES( "_RASTERIZER_STATUS.$", 0x6, true, 0x1dab17ac0da02610 );              
        SDK_FIXED_SIZE( rasterizer_status_t, 0x6 );              
    };                             
};
#include "magic/rasterizer_status_t.end.hpp"
SDK_VERIFY( struct win::rasterizer_status_t, 0x6 );
