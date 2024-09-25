#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dconst_t.start.hpp"
namespace win
{
    // [union _Dconst]
    // => Windows 10 v1607
    //
    union dconst_t                               
    {                                            
        // Windows 10 v1607                      
        //                                       
        _m00 sdk::array<uint16_t, 8> word;         //{ +0x0000    } | ._Word
        _m01 float                   _float;       //{ +0x0000    } | ._Float
        _m02 double                  _double;      //{ +0x0000    } | ._Double
        _m03 double                  long_double;  //{ +0x0000    } | ._Long_double
                                                 
        SDK_MAGIC_PROPERTIES( "_Dconst.$", 0x0, false, 0x266eb856a7c0c118 );            
        SDK_FIXED_SIZE( dconst_t, 0x10 );            
    };                                           
};
#include "magic/dconst_t.end.hpp"
SDK_VERIFY( union win::dconst_t, 0x10 );
