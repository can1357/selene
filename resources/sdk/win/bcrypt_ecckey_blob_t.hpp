#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_ecckey_blob_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_ECCKEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_ecckey_blob_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_magic;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMagic
        _m01 uint32_t cb_key;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbKey
                               
        SDK_MAGIC_PROPERTIES( "_BCRYPT_ECCKEY_BLOB.$", 0x8, true, 0x25628f979501d78e );         
        SDK_FIXED_SIZE( bcrypt_ecckey_blob_t, 0x8 );         
    };                         
};
#include "magic/bcrypt_ecckey_blob_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_ecckey_blob_t, 0x8 );
