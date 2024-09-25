#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_pkcs8_export_params_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;
    struct crypt_algorithm_identifier_t;

    // [struct _CRYPT_PKCS8_EXPORT_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_pkcs8_export_params_t                                     
    {                                                                      
        using pcrypt_encrypt_private_key_func_t = sdk::function<int32_t(struct win::crypt_algorithm_identifier_t*, struct win::cryptoapi_blob_t*, uint8_t*, uint32_t*, void*)>*;                           
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m00 uint64_t                           h_crypt_prov;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hCryptProv
        _m01 uint32_t                           dw_key_spec;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwKeySpec
        _m02 char*                              psz_private_key_obj_id;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszPrivateKeyObjId
        _m03 pcrypt_encrypt_private_key_func_t  p_encrypt_private_key_func;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pEncryptPrivateKeyFunc
        _m04 void*                              p_void_encrypt_func;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pVoidEncryptFunc
                                                                           
        SDK_MAGIC_PROPERTIES( "_CRYPT_PKCS8_EXPORT_PARAMS.$", 0x28, true, 0xd182544eccc18852 );                           
        SDK_FIXED_SIZE( crypt_pkcs8_export_params_t, 0x28 );                           
    };                                                                     
};
#include "magic/crypt_pkcs8_export_params_t.end.hpp"
SDK_VERIFY( struct win::crypt_pkcs8_export_params_t, 0x28 );
