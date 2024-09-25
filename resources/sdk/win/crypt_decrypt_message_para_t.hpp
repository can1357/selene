#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_decrypt_message_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_DECRYPT_MESSAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_decrypt_message_para_t             
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t cb_size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_msg_and_cert_encoding_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgAndCertEncodingType
        _m02 uint32_t c_cert_store;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cCertStore
        _m03 void**   rgh_cert_store;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rghCertStore
                                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_DECRYPT_MESSAGE_PARA.$", 0x18, true, 0x294c6979f5ea1ed2 );                              
        SDK_FIXED_SIZE( crypt_decrypt_message_para_t, 0x18 );                              
    };                                              
};
#include "magic/crypt_decrypt_message_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_decrypt_message_para_t, 0x18 );
