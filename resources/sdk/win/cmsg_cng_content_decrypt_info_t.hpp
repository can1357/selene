#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_cng_content_decrypt_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_CNG_CONTENT_DECRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_cng_content_decrypt_info_t                                              
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                              
        _m00 uint32_t                                 cb_size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_algorithm_identifier_t content_encryption_algorithm;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContentEncryptionAlgorithm
        _m02 sdk::function<void*(uint64_t)>*          pfn_alloc;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pfnAlloc
        _m03 sdk::function<void(void*)>*              pfn_free;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pfnFree
        _m04 uint64_t                                 h_n_crypt_key;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hNCryptKey
        _m05 uint8_t*                                 pb_content_encrypt_key;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pbContentEncryptKey
        _m06 uint32_t                                 cb_content_encrypt_key;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cbContentEncryptKey
        _m07 void*                                    h_cng_content_encrypt_key;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .hCNGContentEncryptKey
        _m08 uint8_t*                                 pb_cng_content_encrypt_key_object;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pbCNGContentEncryptKeyObject
                                                                                        
        SDK_MAGIC_PROPERTIES( "_CMSG_CNG_CONTENT_DECRYPT_INFO.$", 0x58, true, 0x2b75bc89bd346464 );                                  
        SDK_FIXED_SIZE( cmsg_cng_content_decrypt_info_t, 0x58 );                                  
    };                                                                                  
};
#include "magic/cmsg_cng_content_decrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_cng_content_decrypt_info_t, 0x58 );
