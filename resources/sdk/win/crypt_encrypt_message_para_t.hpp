#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_encrypt_message_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ENCRYPT_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_encrypt_message_para_t                                            
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                         
        _m00 uint32_t                                 cb_size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                 dw_msg_encoding_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgEncodingType
        _m02 uint64_t                                 h_crypt_prov;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m03 struct win::crypt_algorithm_identifier_t content_encryption_algorithm;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContentEncryptionAlgorithm
        _m04 void*                                    pv_encryption_aux_info;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvEncryptionAuxInfo
        _m05 uint32_t                                 dw_flags;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwFlags
        _m06 uint32_t                                 dw_inner_content_type;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwInnerContentType
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_ENCRYPT_MESSAGE_PARA.$", 0x38, true, 0xfab5cec6faf962a4 );                             
        SDK_FIXED_SIZE( crypt_encrypt_message_para_t, 0x38 );                             
    };                                                                             
};
#include "magic/crypt_encrypt_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_encrypt_message_para_t, 0x38 );
