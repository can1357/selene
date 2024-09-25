#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_trans_recipient_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_KEY_TRANS_RECIPIENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_trans_recipient_info_t                                     
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 uint32_t                                 dw_version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cert_id_t                    recipient_id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecipientId
        _m02 struct win::crypt_algorithm_identifier_t key_encryption_algorithm;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .KeyEncryptionAlgorithm
        _m03 struct win::cryptoapi_blob_t             encrypted_key;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EncryptedKey
                                                                               
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_TRANS_RECIPIENT_INFO.$", 0x58, true, 0x71a0001d15688da4 );                         
        SDK_FIXED_SIZE( cmsg_key_trans_recipient_info_t, 0x58 );                         
    };                                                                         
};
#include "magic/cmsg_key_trans_recipient_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_trans_recipient_info_t, 0x58 );
