#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_encrypted_encode_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_ENCRYPTED_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_encrypted_encode_info_t                                            
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                         
        _m00 uint32_t                                 cb_size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_algorithm_identifier_t content_encryption_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContentEncryptionAlgorithm
        _m02 void*                                    pv_encryption_aux_info;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvEncryptionAuxInfo
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CMSG_ENCRYPTED_ENCODE_INFO.$", 0x28, true, 0x175a3f27b5ba33a7 );                             
        SDK_FIXED_SIZE( cmsg_encrypted_encode_info_t, 0x28 );                             
    };                                                                             
};
#include "magic/cmsg_encrypted_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_encrypted_encode_info_t, 0x28 );
