#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fp_64_t.start.hpp"
namespace win
{
    // [struct _FP_64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_64_t                     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                             
        _m00 sdk::array<uint32_t, 2> w;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .W
                                       
        SDK_MAGIC_PROPERTIES( "_FP_64.$", 0x8, true, 0x9d5dad3c3d4061fb );  
        SDK_FIXED_SIZE( fp_64_t, 0x8 );  
    };                                 
};
#include "magic/fp_64_t.end.hpp"
SDK_VERIFY( struct win::fp_64_t, 0x8 );
