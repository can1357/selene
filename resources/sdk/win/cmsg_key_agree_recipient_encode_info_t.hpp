#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_agree_recipient_encode_info_t.start.hpp"
namespace win
{
    struct cert_id_t;
    struct cmsg_recipient_encrypted_key_encode_info_t;

    // [struct _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_agree_recipient_encode_info_t                                   
    {                                                                               
        using rgp_recipient_encrypted_keys_t = struct win::cmsg_recipient_encrypted_key_encode_info_t**;                             
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                          
        _m00 uint32_t                                  cb_size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_algorithm_identifier_t  key_encryption_algorithm;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m02 void*                                     pv_key_encryption_aux_info;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvKeyEncryptionAuxInfo
        _m03 struct win::crypt_algorithm_identifier_t  key_wrap_algorithm;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KeyWrapAlgorithm
        _m04 void*                                     pv_key_wrap_aux_info;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pvKeyWrapAuxInfo
        _m05 uint64_t                                  h_crypt_prov;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .hCryptProv
        _m06 uint32_t                                  dw_key_spec;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .dwKeySpec
        _m07 uint32_t                                  dw_key_choice;                 //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .dwKeyChoice
        _m08 struct win::crypt_algorithm_identifier_t* p_ephemeral_algorithm;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pEphemeralAlgorithm
        _m09 struct win::cert_id_t*                    p_sender_id;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pSenderId
        _m10 struct win::cryptoapi_blob_t              user_keying_material;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UserKeyingMaterial
        _m11 uint32_t                                  c_recipient_encrypted_keys;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .cRecipientEncryptedKeys
        _m12 rgp_recipient_encrypted_keys_t            rgp_recipient_encrypted_keys;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .rgpRecipientEncryptedKeys
                                                                                    
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.$", 0x80, true, 0x651ae816e069c5e2 );                             
        SDK_FIXED_SIZE( cmsg_key_agree_recipient_encode_info_t, 0x80 );                             
    };                                                                              
};
#include "magic/cmsg_key_agree_recipient_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_agree_recipient_encode_info_t, 0x80 );
