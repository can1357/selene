#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gradient_triangle_t.start.hpp"
namespace win
{
    // [struct _GRADIENT_TRIANGLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gradient_triangle_t
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t vertex1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Vertex1
        _m01 uint32_t vertex2;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vertex2
        _m02 uint32_t vertex3;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Vertex3
                              
        SDK_NONVOL_PROPERTIES( "_GRADIENT_TRIANGLE.$", 0xc, true, 0xbc500b33f0434391 );        
        SDK_FIXED_SIZE( gradient_triangle_t, 0xc );        
    };                        
};
#include "magic/gradient_triangle_t.end.hpp"
SDK_VERIFY( struct win::gradient_triangle_t, 0xc );
