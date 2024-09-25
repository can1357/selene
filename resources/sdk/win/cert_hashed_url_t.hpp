#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cert_hashed_url_t.start.hpp"
namespace win
{
    // [struct _CERT_HASHED_URL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_hashed_url_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 struct win::crypt_algorithm_identifier_t hash_algorithm;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgorithm
        _m01 struct win::cryptoapi_blob_t             hash;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Hash
        _m02 wchar_t*                                 pwsz_url;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pwszUrl
                                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_HASHED_URL.$", 0x30, true, 0xc19d7368d79bb545 );               
        SDK_FIXED_SIZE( cert_hashed_url_t, 0x30 );                   
    };                                                               
};
#include "magic/cert_hashed_url_t.end.hpp"
SDK_VERIFY( struct win::cert_hashed_url_t, 0x30 );
