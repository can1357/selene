#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_dh_parameters_t.start.hpp"
namespace win
{
    // [struct _CERT_DH_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_dh_parameters_t             
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                  
        _m00 struct win::cryptoapi_blob_t p;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .p
        _m01 struct win::cryptoapi_blob_t g;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .g
                                            
        SDK_MAGIC_PROPERTIES( "_CERT_DH_PARAMETERS.$", 0x20, true, 0xe15c834d9f2c80d9 );  
        SDK_FIXED_SIZE( cert_dh_parameters_t, 0x20 );  
    };                                      
};
#include "magic/cert_dh_parameters_t.end.hpp"
SDK_VERIFY( struct win::cert_dh_parameters_t, 0x20 );
