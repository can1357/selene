#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_algorithm_identifier_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ALGORITHM_IDENTIFIER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_algorithm_identifier_t              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_ALGORITHM_IDENTIFIER.$", 0x18, true, 0xde40460a5b3589dd );           
        SDK_FIXED_SIZE( crypt_algorithm_identifier_t, 0x18 );           
    };                                               
};
#include "magic/crypt_algorithm_identifier_t.end.hpp"
SDK_VERIFY( struct win::crypt_algorithm_identifier_t, 0x18 );
