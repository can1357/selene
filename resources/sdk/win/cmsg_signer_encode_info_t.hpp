#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_signer_encode_info_t.start.hpp"
namespace win
{
    struct cert_info_t;
    struct crypt_attribute_t;

    // [struct _CMSG_SIGNER_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_signer_encode_info_t                                   
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 uint32_t                                 cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cert_info_t*                 p_cert_info;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCertInfo
        _m02 uint64_t                                 h_crypt_prov;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hCryptProv
        _m03 uint64_t                                 h_n_crypt_key;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hNCryptKey
        _m04 uint32_t                                 dw_key_spec;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwKeySpec
        _m05 struct win::crypt_algorithm_identifier_t hash_algorithm;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HashAlgorithm
        _m06 void*                                    pv_hash_aux_info;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pvHashAuxInfo
        _m07 uint32_t                                 c_auth_attr;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cAuthAttr
        _m08 struct win::crypt_attribute_t*           rg_auth_attr;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .rgAuthAttr
        _m09 uint32_t                                 c_unauth_attr;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .cUnauthAttr
        _m10 struct win::crypt_attribute_t*           rg_unauth_attr;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .rgUnauthAttr
                                                                       
        SDK_MAGIC_PROPERTIES( "_CMSG_SIGNER_ENCODE_INFO.$", 0x60, true, 0x486f4b02c3b4afe );                 
        SDK_FIXED_SIZE( cmsg_signer_encode_info_t, 0x60 );                 
    };                                                                 
};
#include "magic/cmsg_signer_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_signer_encode_info_t, 0x60 );
