#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_rc4_key_state_t.start.hpp"
namespace win
{
    // [struct _CRYPT_RC4_KEY_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_rc4_key_state_t            
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                  
        _m00 sdk::array<uint8_t, 16>  key;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 sdk::array<uint8_t, 256> s_box;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SBox
        _m02 uint8_t                  i;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .i
        _m03 uint8_t                  j;      //{ +0x0111    +0x0111    +0x0111    +0x0111    } | .j
                                            
        SDK_MAGIC_PROPERTIES( "_CRYPT_RC4_KEY_STATE.$", 0x112, true, 0x448750f9cdff74cf );      
        SDK_FIXED_SIZE( crypt_rc4_key_state_t, 0x112 );      
    };                                      
};
#include "magic/crypt_rc4_key_state_t.end.hpp"
SDK_VERIFY( struct win::crypt_rc4_key_state_t, 0x112 );
