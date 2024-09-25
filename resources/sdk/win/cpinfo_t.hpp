#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpinfo_t.start.hpp"
namespace win
{
    // [struct _cpinfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpinfo_t                                
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint32_t                max_char_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxCharSize
        _m01 sdk::array<uint8_t, 2>  default_char;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DefaultChar
        _m02 sdk::array<uint8_t, 12> lead_byte;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LeadByte
                                                   
        SDK_MAGIC_PROPERTIES( "_cpinfo.$", 0x14, true, 0x5b404a125b6d4b1b );              
        SDK_FIXED_SIZE( cpinfo_t, 0x14 );              
    };                                             
};
#include "magic/cpinfo_t.end.hpp"
SDK_VERIFY( struct win::cpinfo_t, 0x14 );
