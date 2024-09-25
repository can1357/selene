#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "filetime_t.hpp"
#include "crypt_bit_blob_t.hpp"

#include "magic/cmsg_recipient_encrypted_key_encode_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_type_value_t;

    // [struct _CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_recipient_encrypted_key_encode_info_t                       
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m00 uint32_t                                  cb_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_bit_blob_t              recipient_public_key;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecipientPublicKey
        _m02 struct win::cert_id_t                     recipient_id;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RecipientId
        _m03 struct win::filetime_t                    date;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Date
        _m04 struct win::crypt_attribute_type_value_t* p_other_attr;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pOtherAttr
                                                                            
        SDK_MAGIC_PROPERTIES( "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.$", 0x58, true, 0xfc8601b66d258411 );                     
        SDK_FIXED_SIZE( cmsg_recipient_encrypted_key_encode_info_t, 0x58 );                     
    };                                                                      
};
#include "magic/cmsg_recipient_encrypted_key_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_recipient_encrypted_key_encode_info_t, 0x58 );
