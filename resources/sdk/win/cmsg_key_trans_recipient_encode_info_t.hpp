#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "crypt_bit_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_key_trans_recipient_encode_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_key_trans_recipient_encode_info_t                                
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                       
        _m00 uint32_t                                 cb_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_algorithm_identifier_t key_encryption_algorithm;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m02 void*                                    pv_key_encryption_aux_info;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvKeyEncryptionAuxInfo
        _m03 uint64_t                                 h_crypt_prov;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hCryptProv
        _m04 struct win::crypt_bit_blob_t             recipient_public_key;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RecipientPublicKey
        _m05 struct win::cert_id_t                    recipient_id;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RecipientId
                                                                                 
        SDK_MAGIC_PROPERTIES( "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.$", 0x70, true, 0xeb53d4e150550a79 );                           
        SDK_FIXED_SIZE( cmsg_key_trans_recipient_encode_info_t, 0x70 );                           
    };                                                                           
};
#include "magic/cmsg_key_trans_recipient_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_key_trans_recipient_encode_info_t, 0x70 );
