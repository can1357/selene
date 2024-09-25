#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cps_urls_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;
    struct crypt_algorithm_identifier_t;

    // [struct _CPS_URLS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cps_urls_t                                              
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                         
        _m00 wchar_t*                                  psz_url;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszURL
        _m01 struct win::crypt_algorithm_identifier_t* p_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAlgorithm
        _m02 struct win::cryptoapi_blob_t*             p_digest;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pDigest
                                                                   
        SDK_MAGIC_PROPERTIES( "_CPS_URLS.$", 0x18, true, 0xcff55be413d8434a );            
        SDK_FIXED_SIZE( cps_urls_t, 0x18 );                        
    };                                                             
};
#include "magic/cps_urls_t.end.hpp"
SDK_VERIFY( struct win::cps_urls_t, 0x18 );
