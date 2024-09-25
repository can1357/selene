#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_ecc_signature_t.start.hpp"
namespace win
{
    // [struct _CERT_ECC_SIGNATURE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_ecc_signature_t             
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                  
        _m00 struct win::cryptoapi_blob_t r;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .r
        _m01 struct win::cryptoapi_blob_t s;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .s
                                            
        SDK_MAGIC_PROPERTIES( "_CERT_ECC_SIGNATURE.$", 0x20, true, 0x850b3b384055fb94 );  
        SDK_FIXED_SIZE( cert_ecc_signature_t, 0x20 );  
    };                                      
};
#include "magic/cert_ecc_signature_t.end.hpp"
SDK_VERIFY( struct win::cert_ecc_signature_t, 0x20 );
