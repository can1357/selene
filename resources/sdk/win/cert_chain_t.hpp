#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_key_prov_info_t.hpp"

#include "magic/cert_chain_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CERT_CHAIN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_t                                         
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 uint32_t                          c_certs;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCerts
        _m01 struct win::cryptoapi_blob_t*     certs;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .certs
        _m02 struct win::crypt_key_prov_info_t key_locator_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .keyLocatorInfo
                                                                
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN.$", 0x40, true, 0x4fde42fa581aa843 );                 
        SDK_FIXED_SIZE( cert_chain_t, 0x40 );                   
    };                                                          
};
#include "magic/cert_chain_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_t, 0x40 );
