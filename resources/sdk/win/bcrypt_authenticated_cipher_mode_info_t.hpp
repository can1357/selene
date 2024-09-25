#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_authenticated_cipher_mode_info_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_authenticated_cipher_mode_info_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t cb_size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_info_version;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwInfoVersion
        _m02 uint8_t* pb_nonce;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbNonce
        _m03 uint32_t cb_nonce;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbNonce
        _m04 uint8_t* pb_auth_data;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pbAuthData
        _m05 uint32_t cb_auth_data;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbAuthData
        _m06 uint8_t* pb_tag;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pbTag
        _m07 uint32_t cb_tag;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cbTag
        _m08 uint8_t* pb_mac_context;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pbMacContext
        _m09 uint32_t cb_mac_context;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cbMacContext
        _m10 uint32_t cb_aad;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .cbAAD
        _m11 uint64_t cb_data;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .cbData
        _m12 uint32_t dw_flags;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .dwFlags
                                                  
        SDK_MAGIC_PROPERTIES( "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.$", 0x58, true, 0x8c5b9d78441f4fef );                
        SDK_FIXED_SIZE( bcrypt_authenticated_cipher_mode_info_t, 0x58 );                
    };                                            
};
#include "magic/bcrypt_authenticated_cipher_mode_info_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_authenticated_cipher_mode_info_t, 0x58 );
