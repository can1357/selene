#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ldouble_val_t.start.hpp"
namespace win
{
    // [union _ldouble_val]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ldouble_val_t                  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                               
        _m00 sdk::array<uint16_t, 4> sh;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Sh
        _m01 double                  val;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Val
                                         
        SDK_MAGIC_PROPERTIES( "_ldouble_val.$", 0x8, true, 0x72cdca78af6b3ba0 );    
        SDK_FIXED_SIZE( ldouble_val_t, 0x8 );    
    };                                   
};
#include "magic/ldouble_val_t.end.hpp"
SDK_VERIFY( union win::ldouble_val_t, 0x8 );
