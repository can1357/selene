#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_mask_gen_algorithm_t.start.hpp"
namespace win
{
    // [struct _CRYPT_MASK_GEN_ALGORITHM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_mask_gen_algorithm_t                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 char*                                    psz_obj_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::crypt_algorithm_identifier_t hash_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashAlgorithm
                                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_MASK_GEN_ALGORITHM.$", 0x20, true, 0xfc7fc7854b12c2d5 );               
        SDK_FIXED_SIZE( crypt_mask_gen_algorithm_t, 0x20 );               
    };                                                               
};
#include "magic/crypt_mask_gen_algorithm_t.end.hpp"
SDK_VERIFY( struct win::crypt_mask_gen_algorithm_t, 0x20 );
