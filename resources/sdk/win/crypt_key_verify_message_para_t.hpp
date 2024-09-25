#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_key_verify_message_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_KEY_VERIFY_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_key_verify_message_para_t 
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t cb_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_msg_encoding_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgEncodingType
        _m02 uint64_t h_crypt_prov;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
                                           
        SDK_MAGIC_PROPERTIES( "_CRYPT_KEY_VERIFY_MESSAGE_PARA.$", 0x10, true, 0x6e84fd9dc827e7be );                     
        SDK_FIXED_SIZE( crypt_key_verify_message_para_t, 0x10 );                     
    };                                     
};
#include "magic/crypt_key_verify_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_key_verify_message_para_t, 0x10 );
