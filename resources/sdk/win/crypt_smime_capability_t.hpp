#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_smime_capability_t.start.hpp"
namespace win
{
    // [struct _CRYPT_SMIME_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_smime_capability_t                  
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_SMIME_CAPABILITY.$", 0x18, true, 0xaf83f5e007994073 );           
        SDK_FIXED_SIZE( crypt_smime_capability_t, 0x18 );           
    };                                               
};
#include "magic/crypt_smime_capability_t.end.hpp"
SDK_VERIFY( struct win::crypt_smime_capability_t, 0x18 );
