#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"

#include "magic/cmsg_ctrl_key_agree_decrypt_para_t.start.hpp"
namespace win
{
    struct cmsg_key_agree_recipient_info_t;

    // [struct _CMSG_CTRL_KEY_AGREE_DECRYPT_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_ctrl_key_agree_decrypt_para_t                                              
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                 
        _m00 uint32_t                                     cb_size;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t                                     h_crypt_prov;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 uint64_t                                     h_n_crypt_key;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hNCryptKey
        _m03 uint32_t                                     dw_key_spec;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwKeySpec
        _m04 struct win::cmsg_key_agree_recipient_info_t* p_key_agree;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pKeyAgree
        _m05 uint32_t                                     dw_recipient_index;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwRecipientIndex
        _m06 uint32_t                                     dw_recipient_encrypted_key_index;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwRecipientEncryptedKeyIndex
        _m07 struct win::crypt_bit_blob_t                 originator_public_key;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OriginatorPublicKey
                                                                                           
        SDK_MAGIC_PROPERTIES( "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.$", 0x40, true, 0xb7f3a12ef0b3ecc );                                 
        SDK_FIXED_SIZE( cmsg_ctrl_key_agree_decrypt_para_t, 0x40 );                                 
    };                                                                                     
};
#include "magic/cmsg_ctrl_key_agree_decrypt_para_t.end.hpp"
SDK_VERIFY( struct win::cmsg_ctrl_key_agree_decrypt_para_t, 0x40 );
