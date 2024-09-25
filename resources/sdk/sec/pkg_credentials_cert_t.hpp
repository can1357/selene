#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_credentials_cert_t.start.hpp"
namespace sec
{
    // [struct _SecPkgCredentials_Cert]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_credentials_cert_t       
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t encoded_cert_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EncodedCertSize
        _m01 uint8_t* encoded_cert;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EncodedCert
                                        
        SDK_NONVOL_PROPERTIES( "_SecPkgCredentials_Cert.$", 0x10, true, 0xc0950a26c8568cd8 );                  
        SDK_FIXED_SIZE( pkg_credentials_cert_t, 0x10 );                  
    };                                  
};
#include "magic/pkg_credentials_cert_t.end.hpp"
SDK_VERIFY( struct sec::pkg_credentials_cert_t, 0x10 );
