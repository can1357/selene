#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/store_key_t.start.hpp"
namespace mm
{
    // [union _MM_STORE_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union store_key_t            
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint60_t key_low;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .KeyLow
        _m01 uint4_t  key_high;    //{ +0x0000@60 +0x0000@60 +0x0000@60 +0x0000@60 } | .KeyHigh
        _m02 uint64_t entire_key;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntireKey
                                 
        SDK_MAGIC_PROPERTIES( "_MM_STORE_KEY.$", 0x8, true, 0x5b0b6dacff132748 );           
        SDK_FIXED_SIZE( store_key_t, 0x8 );           
    };                           
};
#include "magic/store_key_t.end.hpp"
SDK_VERIFY( union mm::store_key_t, 0x8 );
