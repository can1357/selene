#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_3des_key_state_t.start.hpp"
namespace win
{
    // [struct _CRYPT_3DES_KEY_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_3des_key_state_t             
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 sdk::array<uint8_t, 24> key;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 sdk::array<uint8_t, 8>  iv;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IV
        _m02 sdk::array<uint8_t, 8>  feedback;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Feedback
                                              
        SDK_MAGIC_PROPERTIES( "_CRYPT_3DES_KEY_STATE.$", 0x28, true, 0x7b30e5b93b2b28cf );         
        SDK_FIXED_SIZE( crypt_3des_key_state_t, 0x28 );         
    };                                        
};
#include "magic/crypt_3des_key_state_t.end.hpp"
SDK_VERIFY( struct win::crypt_3des_key_state_t, 0x28 );
