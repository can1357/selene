#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/cmsg_recipient_encrypted_key_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_type_value_t;

    // [struct _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_recipient_encrypted_key_info_t                       
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                           
        _m00 struct win::cert_id_t                     recipient_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RecipientId
        _m01 struct win::cryptoapi_blob_t              encrypted_key;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EncryptedKey
        _m02 struct win::filetime_t                    date;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Date
        _m03 struct win::crypt_attribute_type_value_t* p_other_attr;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pOtherAttr
                                                                     
        SDK_MAGIC_PROPERTIES( "_CMSG_RECIPIENT_ENCRYPTED_KEY_INFO.$", 0x48, true, 0xc5b2841c778d5b94 );              
        SDK_FIXED_SIZE( cmsg_recipient_encrypted_key_info_t, 0x48 );              
    };                                                               
};
#include "magic/cmsg_recipient_encrypted_key_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_recipient_encrypted_key_info_t, 0x48 );
