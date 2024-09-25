#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "cert_public_key_info_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_agree_recipient_info_t.start.hpp"
namespace win
{
    struct cmsg_recipient_encrypted_key_info_t;

    // [struct _CMSG_KEY_AGREE_RECIPIENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_agree_recipient_info_t                                         
    {                                                                              
        using rgp_recipient_encrypted_keys_t = struct win::cmsg_recipient_encrypted_key_info_t**;                             
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                         
        _m00 uint32_t                                 dw_version;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t                                 dw_originator_choice;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwOriginatorChoice
        _m02 struct win::cert_id_t                    originator_cert_id;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OriginatorCertId
        _m03 struct win::cert_public_key_info_t       originator_public_key_info;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OriginatorPublicKeyInfo
        _m04 struct win::cryptoapi_blob_t             user_keying_material;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UserKeyingMaterial
        _m05 struct win::crypt_algorithm_identifier_t key_encryption_algorithm;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .KeyEncryptionAlgorithm
        _m06 uint32_t                                 c_recipient_encrypted_keys;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .cRecipientEncryptedKeys
        _m07 rgp_recipient_encrypted_keys_t           rgp_recipient_encrypted_keys;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .rgpRecipientEncryptedKeys
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_AGREE_RECIPIENT_INFO.$", 0x70, true, 0x62c29b13b672ca1f );                             
        SDK_FIXED_SIZE( cmsg_key_agree_recipient_info_t, 0x70 );                             
    };                                                                             
};
#include "magic/cmsg_key_agree_recipient_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_agree_recipient_info_t, 0x70 );
