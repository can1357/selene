#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_trans_encrypt_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_KEY_TRANS_ENCRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_trans_encrypt_info_t                                       
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 uint32_t                                 cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                 dw_recipient_index;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRecipientIndex
        _m02 struct win::crypt_algorithm_identifier_t key_encryption_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m03 struct win::cryptoapi_blob_t             encrypted_key;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EncryptedKey
        _m04 uint32_t                                 dw_flags;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwFlags
                                                                               
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_TRANS_ENCRYPT_INFO.$", 0x38, true, 0x29d551042958552 );                         
        SDK_FIXED_SIZE( cmsg_key_trans_encrypt_info_t, 0x38 );                         
    };                                                                         
};
#include "magic/cmsg_key_trans_encrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_trans_encrypt_info_t, 0x38 );
