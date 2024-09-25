#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_key_sign_message_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_KEY_SIGN_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_key_sign_message_para_t                                            
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                          
        _m00 uint32_t                                 cb_size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                 dw_msg_and_cert_encoding_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgAndCertEncodingType
        _m02 uint64_t                                 h_crypt_prov;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m03 uint64_t                                 h_n_crypt_key;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hNCryptKey
        _m04 uint32_t                                 dw_key_spec;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwKeySpec
        _m05 struct win::crypt_algorithm_identifier_t hash_algorithm;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HashAlgorithm
        _m06 void*                                    pv_hash_aux_info;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pvHashAuxInfo
        _m07 struct win::crypt_algorithm_identifier_t pub_key_algorithm;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PubKeyAlgorithm
                                                                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_KEY_SIGN_MESSAGE_PARA.$", 0x50, true, 0x3cee0cc5fadfc581 );                              
        SDK_FIXED_SIZE( crypt_key_sign_message_para_t, 0x50 );                              
    };                                                                              
};
#include "magic/crypt_key_sign_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_key_sign_message_para_t, 0x50 );
