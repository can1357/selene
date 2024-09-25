#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_rsakey_blob_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_RSAKEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_rsakey_blob_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t magic;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t bit_length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BitLength
        _m02 uint32_t cb_public_exp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbPublicExp
        _m03 uint32_t cb_modulus;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbModulus
        _m04 uint32_t cb_prime1;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbPrime1
        _m05 uint32_t cb_prime2;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbPrime2
                                    
        SDK_MAGIC_PROPERTIES( "_BCRYPT_RSAKEY_BLOB.$", 0x18, true, 0xa8eaac3cdcb975db );              
        SDK_FIXED_SIZE( bcrypt_rsakey_blob_t, 0x18 );              
    };                              
};
#include "magic/bcrypt_rsakey_blob_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_rsakey_blob_t, 0x18 );
