#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/publickeystruc_t.start.hpp"
namespace win
{
    // [struct _PUBLICKEYSTRUC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct publickeystruc_t      
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint8_t  b_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bType
        _m01 uint8_t  b_version;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bVersion
        _m02 uint32_t ai_key_alg;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .aiKeyAlg
                                 
        SDK_MAGIC_PROPERTIES( "_PUBLICKEYSTRUC.$", 0x8, true, 0x26bb2adc03e940d );           
        SDK_FIXED_SIZE( publickeystruc_t, 0x8 );           
    };                           
};
#include "magic/publickeystruc_t.end.hpp"
SDK_VERIFY( struct win::publickeystruc_t, 0x8 );
