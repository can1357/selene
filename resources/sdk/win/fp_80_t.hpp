#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fp_80_t.start.hpp"
namespace win
{
    // [struct _FP_80]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_80_t                     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                             
        _m00 sdk::array<uint32_t, 3> w;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .W
                                       
        SDK_MAGIC_PROPERTIES( "_FP_80.$", 0xc, true, 0x460c6d742afa5cf5 );  
        SDK_FIXED_SIZE( fp_80_t, 0xc );  
    };                                 
};
#include "magic/fp_80_t.end.hpp"
SDK_VERIFY( struct win::fp_80_t, 0xc );
