#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stylestruct_t.start.hpp"
namespace tag
{
    // [struct tagSTYLESTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stylestruct_t        
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t style_old;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .styleOld
        _m01 uint32_t style_new;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .styleNew
                                
        SDK_MAGIC_PROPERTIES( "tagSTYLESTRUCT.$", 0x8, true, 0x335b76852ad5c80f );          
        SDK_FIXED_SIZE( stylestruct_t, 0x8 );          
    };                          
};
#include "magic/stylestruct_t.end.hpp"
SDK_VERIFY( struct tag::stylestruct_t, 0x8 );
