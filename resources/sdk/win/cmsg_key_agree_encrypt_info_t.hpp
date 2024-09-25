#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "cert_public_key_info_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_agree_encrypt_info_t.start.hpp"
namespace win
{
    struct cmsg_key_agree_key_encrypt_info_t;

    // [struct _CMSG_KEY_AGREE_ENCRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_agree_encrypt_info_t                                                    
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                  
        _m00 uint32_t                                        cb_size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                        dw_recipient_index;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRecipientIndex
        _m02 struct win::crypt_algorithm_identifier_t        key_encryption_algorithm;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m03 struct win::cryptoapi_blob_t                    user_keying_material;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UserKeyingMaterial
        _m04 uint32_t                                        dw_originator_choice;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwOriginatorChoice
        _m05 struct win::cert_id_t                           originator_cert_id;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OriginatorCertId
        _m06 struct win::cert_public_key_info_t              originator_public_key_info;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OriginatorPublicKeyInfo
        _m07 uint32_t                                        c_key_agree_key_encrypt_info;    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .cKeyAgreeKeyEncryptInfo
        _m08 struct win::cmsg_key_agree_key_encrypt_info_t** rgp_key_agree_key_encrypt_info;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .rgpKeyAgreeKeyEncryptInfo
        _m09 uint32_t                                        dw_flags;                        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .dwFlags
                                                                                            
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_AGREE_ENCRYPT_INFO.$", 0x80, true, 0x5aa77e63e59660d5 );                               
        SDK_FIXED_SIZE( cmsg_key_agree_encrypt_info_t, 0x80 );                               
    };                                                                                      
};
#include "magic/cmsg_key_agree_encrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_agree_encrypt_info_t, 0x80 );
