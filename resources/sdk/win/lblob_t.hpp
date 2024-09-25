#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lblob_t.start.hpp"
namespace win
{
    // [struct _LBLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lblob_t                   
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t maximum_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumLength
        _m02 uint8_t* buffer;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                     
        SDK_MAGIC_PROPERTIES( "_LBLOB.$", 0x18, true, 0x487ce858474e10a0 );               
        SDK_FIXED_SIZE( lblob_t, 0x18 );               
    };                               
};
#include "magic/lblob_t.end.hpp"
SDK_VERIFY( struct win::lblob_t, 0x18 );
