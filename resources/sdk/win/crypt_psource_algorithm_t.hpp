#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_psource_algorithm_t.start.hpp"
namespace win
{
    // [struct _CRYPT_PSOURCE_ALGORITHM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_psource_algorithm_t                          
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 char*                        psz_obj_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t encoding_parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EncodingParameters
                                                              
        SDK_MAGIC_PROPERTIES( "_CRYPT_PSOURCE_ALGORITHM.$", 0x18, true, 0xd19d92274dae2f3d );                    
        SDK_FIXED_SIZE( crypt_psource_algorithm_t, 0x18 );                    
    };                                                        
};
#include "magic/crypt_psource_algorithm_t.end.hpp"
SDK_VERIFY( struct win::crypt_psource_algorithm_t, 0x18 );
