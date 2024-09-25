#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/float_val_t.start.hpp"
namespace win
{
    // [union _float_val]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union float_val_t                    
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                               
        _m00 sdk::array<uint16_t, 2> sh;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Sh
        _m01 float                   val;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Val
                                         
        SDK_MAGIC_PROPERTIES( "_float_val.$", 0x4, true, 0x771889312fab8b1a );    
        SDK_FIXED_SIZE( float_val_t, 0x4 );    
    };                                   
};
#include "magic/float_val_t.end.hpp"
SDK_VERIFY( union win::float_val_t, 0x4 );
