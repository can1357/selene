#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pelarray_t.start.hpp"
namespace tag
{
    // [struct tagPELARRAY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pelarray_t           
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 int32_t pa_x_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .paXCount
        _m01 int32_t pa_y_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .paYCount
        _m02 int32_t pa_x_ext;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .paXExt
        _m03 int32_t pa_y_ext;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .paYExt
        _m04 uint8_t pa_rg_bs;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .paRGBs
                                
        SDK_NONVOL_PROPERTIES( "tagPELARRAY.$", 0x14, true, 0xadb06be11a2580a2 );           
        SDK_FIXED_SIZE( pelarray_t, 0x14 );           
    };                          
};
#include "magic/pelarray_t.end.hpp"
SDK_VERIFY( struct tag::pelarray_t, 0x14 );
