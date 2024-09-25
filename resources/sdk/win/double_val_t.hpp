#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/double_val_t.start.hpp"
namespace win
{
    // [union _double_val]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union double_val_t                   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                               
        _m00 sdk::array<uint16_t, 4> sh;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Sh
        _m01 double                  val;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Val
                                         
        SDK_MAGIC_PROPERTIES( "_double_val.$", 0x8, true, 0x2413429ec17507bc );    
        SDK_FIXED_SIZE( double_val_t, 0x8 );    
    };                                   
};
#include "magic/double_val_t.end.hpp"
SDK_VERIFY( union win::double_val_t, 0x8 );
