#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cmsg_key_agree_key_encrypt_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_agree_key_encrypt_info_t            
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 uint32_t                     cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cryptoapi_blob_t encrypted_key;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EncryptedKey
                                                        
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_AGREE_KEY_ENCRYPT_INFO.$", 0x18, true, 0x8c49e2566b0f0e09 );              
        SDK_FIXED_SIZE( cmsg_key_agree_key_encrypt_info_t, 0x18 );              
    };                                                  
};
#include "magic/cmsg_key_agree_key_encrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_agree_key_encrypt_info_t, 0x18 );
