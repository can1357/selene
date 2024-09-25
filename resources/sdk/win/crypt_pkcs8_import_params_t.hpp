#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_pkcs8_import_params_t.start.hpp"
namespace win
{
    struct crypt_private_key_info_t;
    struct crypt_algorithm_identifier_t;

    // [struct _CRYPT_PKCS8_IMPORT_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_pkcs8_import_params_t                                     
    {                                                                      
        using pcrypt_resolve_hcryptprov_func_t =  sdk::function<int32_t(struct win::crypt_private_key_info_t*, uint64_t*, void*)>*;                           
        using pcrypt_decrypt_private_key_func_t = sdk::function<int32_t(struct win::crypt_algorithm_identifier_t, struct win::cryptoapi_blob_t, uint8_t*, uint32_t*, void*)>*;                           
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m00 struct win::cryptoapi_blob_t       private_key;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivateKey
        _m01 pcrypt_resolve_hcryptprov_func_t   p_resolveh_crypt_prov_func;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pResolvehCryptProvFunc
        _m02 void*                              p_void_resolve_func;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pVoidResolveFunc
        _m03 pcrypt_decrypt_private_key_func_t  p_decrypt_private_key_func;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pDecryptPrivateKeyFunc
        _m04 void*                              p_void_decrypt_func;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pVoidDecryptFunc
                                                                           
        SDK_MAGIC_PROPERTIES( "_CRYPT_PKCS8_IMPORT_PARAMS.$", 0x30, true, 0xa3ab460be3ebe54a );                           
        SDK_FIXED_SIZE( crypt_pkcs8_import_params_t, 0x30 );                           
    };                                                                     
};
#include "magic/crypt_pkcs8_import_params_t.end.hpp"
SDK_VERIFY( struct win::crypt_pkcs8_import_params_t, 0x30 );
