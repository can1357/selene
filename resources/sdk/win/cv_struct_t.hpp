#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cv_struct_t.start.hpp"
namespace win
{
    // [struct CVStruct]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cv_struct_t     
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int16_t major;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Major
        _m01 int16_t minor;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Minor
        _m02 int16_t sub;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Sub
        _m03 int16_t build;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Build
                           
        SDK_MAGIC_PROPERTIES( "CVStruct.$", 0x8, true, 0x69322003e4762685 );      
        SDK_FIXED_SIZE( cv_struct_t, 0x8 );      
    };                     
};
#include "magic/cv_struct_t.end.hpp"
SDK_VERIFY( struct win::cv_struct_t, 0x8 );
