#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_verify_message_para_t.start.hpp"
namespace win
{
    struct cert_info_t;
    struct cert_context_t;

    // [struct _CRYPT_VERIFY_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_verify_message_para_t                                         
    {                                                                          
        using pfn_crypt_get_signer_certificate_t = sdk::function<const struct win::cert_context_t*(void*, uint32_t, struct win::cert_info_t*, void*)>*;                              
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                     
        _m00 uint32_t                            cb_size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                            dw_msg_and_cert_encoding_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgAndCertEncodingType
        _m02 uint64_t                            h_crypt_prov;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m03 pfn_crypt_get_signer_certificate_t  pfn_get_signer_certificate;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnGetSignerCertificate
        _m04 void*                               pv_get_arg;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvGetArg
                                                                               
        SDK_MAGIC_PROPERTIES( "_CRYPT_VERIFY_MESSAGE_PARA.$", 0x20, true, 0x9855af77c09a6092 );                              
        SDK_FIXED_SIZE( crypt_verify_message_para_t, 0x20 );                              
    };                                                                         
};
#include "magic/crypt_verify_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_verify_message_para_t, 0x20 );
