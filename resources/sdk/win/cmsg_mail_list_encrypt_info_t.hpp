#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_mail_list_encrypt_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_MAIL_LIST_ENCRYPT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_mail_list_encrypt_info_t                                       
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 uint32_t                                 cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                 dw_recipient_index;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRecipientIndex
        _m02 struct win::crypt_algorithm_identifier_t key_encryption_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m03 struct win::cryptoapi_blob_t             encrypted_key;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EncryptedKey
        _m04 uint32_t                                 dw_flags;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwFlags
                                                                               
        SDK_MAGIC_PROPERTIES( "_CMSG_MAIL_LIST_ENCRYPT_INFO.$", 0x38, true, 0x4e93d2548b2d2f2d );                         
        SDK_FIXED_SIZE( cmsg_mail_list_encrypt_info_t, 0x38 );                         
    };                                                                         
};
#include "magic/cmsg_mail_list_encrypt_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_mail_list_encrypt_info_t, 0x38 );
