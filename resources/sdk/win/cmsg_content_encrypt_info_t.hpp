#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_content_encrypt_info_t.start.hpp"
namespace win
{
    struct cmsg_recipient_encode_info_t;

    // [struct _CMSG_CONTENT_ENCRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_content_encrypt_info_t                                                   
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                               
        _m00 uint32_t                                  cb_size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t                                  h_crypt_prov;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 struct win::crypt_algorithm_identifier_t  content_encryption_algorithm;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContentEncryptionAlgorithm
        _m03 void*                                     pv_encryption_aux_info;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvEncryptionAuxInfo
        _m04 uint32_t                                  c_recipients;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cRecipients
        _m05 struct win::cmsg_recipient_encode_info_t* rg_cms_recipients;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgCmsRecipients
        _m06 sdk::function<void*(uint64_t)>*           pfn_alloc;                          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pfnAlloc
        _m07 sdk::function<void(void*)>*               pfn_free;                           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pfnFree
        _m08 uint32_t                                  dw_encrypt_flags;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .dwEncryptFlags
        _m09 uint64_t                                  h_content_encrypt_key;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .hContentEncryptKey
        _m10 void*                                     h_cng_content_encrypt_key;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .hCNGContentEncryptKey
        _m11 uint32_t                                  dw_flags;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .dwFlags
        _m12 int32_t                                   f_cng;                              //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .fCNG
        _m13 uint8_t*                                  pb_cng_content_encrypt_key_object;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pbCNGContentEncryptKeyObject
        _m14 uint8_t*                                  pb_content_encrypt_key;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pbContentEncryptKey
        _m15 uint32_t                                  cb_content_encrypt_key;             //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .cbContentEncryptKey
                                                                                         
        SDK_MAGIC_PROPERTIES( "_CMSG_CONTENT_ENCRYPT_INFO.$", 0x80, true, 0x7a0a1ae4ffc418ff );                                  
        SDK_FIXED_SIZE( cmsg_content_encrypt_info_t, 0x80 );                                  
    };                                                                                   
};
#include "magic/cmsg_content_encrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_content_encrypt_info_t, 0x80 );
