#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/longdouble_t.start.hpp"
namespace win
{
    // [struct _LONGDOUBLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct longdouble_t
    {                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //            
        _m00 double x;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .x
                       
        SDK_MAGIC_PROPERTIES( "_LONGDOUBLE.$", 0x8, true, 0xb213a1f552c3558f );  
        SDK_FIXED_SIZE( longdouble_t, 0x8 );  
    };                 
};
#include "magic/longdouble_t.end.hpp"
SDK_VERIFY( struct win::longdouble_t, 0x8 );
