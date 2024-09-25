#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_dsa_key_blob_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_DSA_KEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_dsa_key_blob_t              
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                dw_magic;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMagic
        _m01 uint32_t                cb_key;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbKey
        _m02 sdk::array<uint8_t, 4>  count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Count
        _m03 sdk::array<uint8_t, 20> seed;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Seed
        _m04 sdk::array<uint8_t, 20> q;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .q
                                              
        SDK_MAGIC_PROPERTIES( "_BCRYPT_DSA_KEY_BLOB.$", 0x34, true, 0x50bbf620ee18c504 );         
        SDK_FIXED_SIZE( bcrypt_dsa_key_blob_t, 0x34 );         
    };                                        
};
#include "magic/bcrypt_dsa_key_blob_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_dsa_key_blob_t, 0x34 );
