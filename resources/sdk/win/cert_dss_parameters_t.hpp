#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_dss_parameters_t.start.hpp"
namespace win
{
    // [struct _CERT_DSS_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_dss_parameters_t            
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                  
        _m00 struct win::cryptoapi_blob_t p;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .p
        _m01 struct win::cryptoapi_blob_t q;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .q
        _m02 struct win::cryptoapi_blob_t g;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .g
                                            
        SDK_MAGIC_PROPERTIES( "_CERT_DSS_PARAMETERS.$", 0x30, true, 0x54b92be289014f7e );  
        SDK_FIXED_SIZE( cert_dss_parameters_t, 0x30 );  
    };                                      
};
#include "magic/cert_dss_parameters_t.end.hpp"
SDK_VERIFY( struct win::cert_dss_parameters_t, 0x30 );
