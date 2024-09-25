#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_verify_cert_sign_weak_hash_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_verify_cert_sign_weak_hash_info_t 
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                         
        _m00 uint32_t        c_cng_hash_algid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCNGHashAlgid
        _m01 const wchar_t** rgpwsz_cng_hash_algid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpwszCNGHashAlgid
        _m02 uint32_t        dw_weak_index;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwWeakIndex
                                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO.$", 0x18, true, 0xe1fc61b31b922bf4 );                      
        SDK_FIXED_SIZE( crypt_verify_cert_sign_weak_hash_info_t, 0x18 );                      
    };                                             
};
#include "magic/crypt_verify_cert_sign_weak_hash_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_verify_cert_sign_weak_hash_info_t, 0x18 );
