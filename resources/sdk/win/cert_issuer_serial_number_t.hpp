#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_issuer_serial_number_t.start.hpp"
namespace win
{
    // [struct _CERT_ISSUER_SERIAL_NUMBER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_issuer_serial_number_t                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct win::cryptoapi_blob_t issuer;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Issuer
        _m01 struct win::cryptoapi_blob_t serial_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SerialNumber
                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_ISSUER_SERIAL_NUMBER.$", 0x20, true, 0x9fb58a3b26c06a3f );              
        SDK_FIXED_SIZE( cert_issuer_serial_number_t, 0x20 );              
    };                                                  
};
#include "magic/cert_issuer_serial_number_t.end.hpp"
SDK_VERIFY( struct win::cert_issuer_serial_number_t, 0x20 );
