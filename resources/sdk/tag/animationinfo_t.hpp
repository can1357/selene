#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/animationinfo_t.start.hpp"
namespace tag
{
    // [struct tagANIMATIONINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct animationinfo_t          
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  i_min_animate;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iMinAnimate
                                    
        SDK_MAGIC_PROPERTIES( "tagANIMATIONINFO.$", 0x8, true, 0xe9932bd5641b04fb );              
        SDK_FIXED_SIZE( animationinfo_t, 0x8 );              
    };                              
};
#include "magic/animationinfo_t.end.hpp"
SDK_VERIFY( struct tag::animationinfo_t, 0x8 );
