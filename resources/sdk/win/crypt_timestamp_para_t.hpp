#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_timestamp_para_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CRYPT_TIMESTAMP_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_para_t                            
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 const char*                   psz_tsa_policy_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszTSAPolicyId
        _m01 int32_t                       f_request_certs;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fRequestCerts
        _m02 struct win::cryptoapi_blob_t  nonce;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Nonce
        _m03 uint32_t                      c_extension;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cExtension
        _m04 struct win::cert_extension_t* rg_extension;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgExtension
                                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_PARA.$", 0x30, true, 0x1386548ba9f8c175 );                  
        SDK_FIXED_SIZE( crypt_timestamp_para_t, 0x30 );                  
    };                                                       
};
#include "magic/crypt_timestamp_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_para_t, 0x30 );
