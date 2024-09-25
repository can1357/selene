#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_key_attest_padding_info_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_KEY_ATTEST_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_key_attest_padding_info_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t magic;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint8_t* pb_key_blob;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbKeyBlob
        _m02 uint32_t cb_key_blob;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbKeyBlob
        _m03 uint8_t* pb_key_auth;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pbKeyAuth
        _m04 uint32_t cb_key_auth;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbKeyAuth
                                           
        SDK_MAGIC_PROPERTIES( "_NCRYPT_KEY_ATTEST_PADDING_INFO.$", 0x28, true, 0xe3ec977d1f0098e0 );            
        SDK_FIXED_SIZE( ncrypt_key_attest_padding_info_t, 0x28 );            
    };                                     
};
#include "magic/ncrypt_key_attest_padding_info_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_key_attest_padding_info_t, 0x28 );
