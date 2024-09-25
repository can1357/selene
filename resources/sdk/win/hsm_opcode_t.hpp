#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hsm_opcode_t.start.hpp"
namespace win
{
    // [struct _HSM_OPCODE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hsm_opcode_t    
    {                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t tag;   //{ +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 uint32_t code;  //{ +0x0004    +0x0004    +0x0004    } | .Code
                           
        SDK_MAGIC_PROPERTIES( "_HSM_OPCODE.$", 0x8, true, 0x3a84b58b4ccd2644 );     
        SDK_FIXED_SIZE( hsm_opcode_t, 0x8 );     
    };                     
};
#include "magic/hsm_opcode_t.end.hpp"
SDK_VERIFY( struct win::hsm_opcode_t, 0x8 );
