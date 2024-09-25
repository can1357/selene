#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_cipher_padding_info_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_CIPHER_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_cipher_padding_info_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint8_t* pb_iv;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbIV
        _m03 uint32_t cb_iv;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbIV
        _m04 uint8_t* pb_other_info;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pbOtherInfo
        _m05 uint32_t cb_other_info;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbOtherInfo
                                       
        SDK_MAGIC_PROPERTIES( "_NCRYPT_CIPHER_PADDING_INFO.$", 0x28, true, 0x1226b3c1276b5a15 );              
        SDK_FIXED_SIZE( ncrypt_cipher_padding_info_t, 0x28 );              
    };                                 
};
#include "magic/ncrypt_cipher_padding_info_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_cipher_padding_info_t, 0x28 );
