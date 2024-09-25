#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fp_32_t.start.hpp"
namespace win
{
    // [struct _FP_32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_32_t                     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                             
        _m00 sdk::array<uint32_t, 1> w;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .W
                                       
        SDK_MAGIC_PROPERTIES( "_FP_32.$", 0x4, true, 0x39f091a4aec247f4 );  
        SDK_FIXED_SIZE( fp_32_t, 0x4 );  
    };                                 
};
#include "magic/fp_32_t.end.hpp"
SDK_VERIFY( struct win::fp_32_t, 0x4 );
