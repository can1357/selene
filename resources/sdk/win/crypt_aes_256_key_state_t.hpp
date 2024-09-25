#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_aes_256_key_state_t.start.hpp"
namespace win
{
    // [struct _CRYPT_AES_256_KEY_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_aes_256_key_state_t                                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                            
        _m00 sdk::array<uint8_t, 32>                 key;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 sdk::array<uint8_t, 16>                 iv;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IV
        _m02 sdk::array<sdk::array<uint8_t, 16>, 15> encryption_state;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EncryptionState
        _m03 sdk::array<sdk::array<uint8_t, 16>, 15> decryption_state;  //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .DecryptionState
        _m04 sdk::array<uint8_t, 16>                 feedback;          //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .Feedback
                                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_AES_256_KEY_STATE.$", 0x220, true, 0xa925f63dcc05b951 );                 
        SDK_FIXED_SIZE( crypt_aes_256_key_state_t, 0x220 );                 
    };                                                                
};
#include "magic/crypt_aes_256_key_state_t.end.hpp"
SDK_VERIFY( struct win::crypt_aes_256_key_state_t, 0x220 );
