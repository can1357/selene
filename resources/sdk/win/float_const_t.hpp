#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/float_const_t.start.hpp"
namespace win
{
    // [union _float_const]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union float_const_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 sdk::array<uint16_t, 4> word;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Word
        _m01 float                   _float;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Float
        _m02 double                  _double;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Double
        _m03 double                  long_double;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Long_double
                                                 
        SDK_MAGIC_PROPERTIES( "_float_const.$", 0x8, true, 0xc0cedfca6cf43758 );            
        SDK_FIXED_SIZE( float_const_t, 0x8 );            
    };                                           
};
#include "magic/float_const_t.end.hpp"
SDK_VERIFY( union win::float_const_t, 0x8 );
