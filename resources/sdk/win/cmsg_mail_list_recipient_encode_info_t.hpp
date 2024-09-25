#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_mail_list_recipient_encode_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_type_value_t;

    // [struct _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_mail_list_recipient_encode_info_t                                 
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                        
        _m00 uint32_t                                  cb_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::crypt_algorithm_identifier_t  key_encryption_algorithm;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyEncryptionAlgorithm
        _m02 void*                                     pv_key_encryption_aux_info;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvKeyEncryptionAuxInfo
        _m03 uint64_t                                  h_crypt_prov;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hCryptProv
        _m04 uint32_t                                  dw_key_choice;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwKeyChoice
        _m05 uint64_t                                  h_key_encryption_key;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .hKeyEncryptionKey
        _m06 void*                                     pv_key_encryption_key;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pvKeyEncryptionKey
        _m07 struct win::cryptoapi_blob_t              key_id;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .KeyId
        _m08 struct win::filetime_t                    date;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Date
        _m09 struct win::crypt_attribute_type_value_t* p_other_attr;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pOtherAttr
                                                                                  
        SDK_MAGIC_PROPERTIES( "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.$", 0x60, true, 0xd5a8ae8d319dc99d );                           
        SDK_FIXED_SIZE( cmsg_mail_list_recipient_encode_info_t, 0x60 );                           
    };                                                                            
};
#include "magic/cmsg_mail_list_recipient_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_mail_list_recipient_encode_info_t, 0x60 );
