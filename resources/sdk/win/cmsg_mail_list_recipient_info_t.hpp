#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_mail_list_recipient_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_type_value_t;

    // [struct _CMSG_MAIL_LIST_RECIPIENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_mail_list_recipient_info_t                                      
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 uint32_t                                  dw_version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cryptoapi_blob_t              key_id;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyId
        _m02 struct win::crypt_algorithm_identifier_t  key_encryption_algorithm;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyEncryptionAlgorithm
        _m03 struct win::cryptoapi_blob_t              encrypted_key;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EncryptedKey
        _m04 struct win::filetime_t                    date;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Date
        _m05 struct win::crypt_attribute_type_value_t* p_other_attr;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pOtherAttr
                                                                                
        SDK_MAGIC_PROPERTIES( "_CMSG_MAIL_LIST_RECIPIENT_INFO.$", 0x50, true, 0x33b9d73d5896fb80 );                         
        SDK_FIXED_SIZE( cmsg_mail_list_recipient_info_t, 0x50 );                         
    };                                                                          
};
#include "magic/cmsg_mail_list_recipient_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_mail_list_recipient_info_t, 0x50 );
