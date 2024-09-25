#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_sign_message_para_t.start.hpp"
namespace win
{
    struct crl_context_t;
    struct cert_context_t;
    struct crypt_attribute_t;

    // [struct _CRYPT_SIGN_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_sign_message_para_t                                        
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                  
        _m00 uint32_t                                 cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                 dw_msg_encoding_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgEncodingType
        _m02 const struct win::cert_context_t*        p_signing_cert;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSigningCert
        _m03 struct win::crypt_algorithm_identifier_t hash_algorithm;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashAlgorithm
        _m04 void*                                    pv_hash_aux_info;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvHashAuxInfo
        _m05 uint32_t                                 c_msg_cert;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cMsgCert
        _m06 const struct win::cert_context_t**       rgp_msg_cert;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgpMsgCert
        _m07 uint32_t                                 c_msg_crl;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cMsgCrl
        _m08 const struct win::crl_context_t**        rgp_msg_crl;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .rgpMsgCrl
        _m09 uint32_t                                 c_auth_attr;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .cAuthAttr
        _m10 struct win::crypt_attribute_t*           rg_auth_attr;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .rgAuthAttr
        _m11 uint32_t                                 c_unauth_attr;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .cUnauthAttr
        _m12 struct win::crypt_attribute_t*           rg_unauth_attr;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .rgUnauthAttr
        _m13 uint32_t                                 dw_flags;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .dwFlags
        _m14 uint32_t                                 dw_inner_content_type;  //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .dwInnerContentType
                                                                            
        SDK_MAGIC_PROPERTIES( "_CRYPT_SIGN_MESSAGE_PARA.$", 0x78, true, 0xcaa8865d3c44a0c3 );                      
        SDK_FIXED_SIZE( crypt_sign_message_para_t, 0x78 );                      
    };                                                                      
};
#include "magic/crypt_sign_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_sign_message_para_t, 0x78 );
