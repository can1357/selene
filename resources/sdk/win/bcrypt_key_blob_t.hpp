#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_key_blob_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_KEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_key_blob_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t magic;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
                            
        SDK_MAGIC_PROPERTIES( "_BCRYPT_KEY_BLOB.$", 0x4, true, 0x22cbb5ef743627c0 );      
        SDK_FIXED_SIZE( bcrypt_key_blob_t, 0x4 );      
    };                      
};
#include "magic/bcrypt_key_blob_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_key_blob_t, 0x4 );
