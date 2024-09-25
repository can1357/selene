#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fp_128_t.start.hpp"
namespace win
{
    // [struct _FP_128]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_128_t                    
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                             
        _m00 sdk::array<uint32_t, 4> w;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .W
                                       
        SDK_MAGIC_PROPERTIES( "_FP_128.$", 0x10, true, 0xc703072ff7e159a0 );  
        SDK_FIXED_SIZE( fp_128_t, 0x10 );  
    };                                 
};
#include "magic/fp_128_t.end.hpp"
SDK_VERIFY( struct win::fp_128_t, 0x10 );
