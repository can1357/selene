#pragma once
#include <sdkgen/support_library.hpp>
#include "pointfx_t.hpp"

#include "magic/ttpolygonheader_t.start.hpp"
namespace tag
{
    // [struct tagTTPOLYGONHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ttpolygonheader_t                 
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                   
        _m00 uint32_t              cb;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 uint32_t              dw_type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
        _m02 struct tag::pointfx_t pfx_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .pfxStart
                                             
        SDK_NONVOL_PROPERTIES( "tagTTPOLYGONHEADER.$", 0x10, true, 0xe43e28d49b1fb0f5 );          
        SDK_FIXED_SIZE( ttpolygonheader_t, 0x10 );          
    };                                       
};
#include "magic/ttpolygonheader_t.end.hpp"
SDK_VERIFY( struct tag::ttpolygonheader_t, 0x10 );
