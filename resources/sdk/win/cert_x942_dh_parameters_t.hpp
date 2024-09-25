#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_x942_dh_parameters_t.start.hpp"
namespace win
{
    struct cert_x942_dh_validation_params_t;

    // [struct _CERT_X942_DH_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_x942_dh_parameters_t                                           
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                     
        _m00 struct win::cryptoapi_blob_t                  p;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .p
        _m01 struct win::cryptoapi_blob_t                  g;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .g
        _m02 struct win::cryptoapi_blob_t                  q;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .q
        _m03 struct win::cryptoapi_blob_t                  j;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .j
        _m04 struct win::cert_x942_dh_validation_params_t* p_validation_params;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pValidationParams
                                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_X942_DH_PARAMETERS.$", 0x48, true, 0x1d1afd553312b840 );                    
        SDK_FIXED_SIZE( cert_x942_dh_parameters_t, 0x48 );                     
    };                                                                         
};
#include "magic/cert_x942_dh_parameters_t.end.hpp"
SDK_VERIFY( struct win::cert_x942_dh_parameters_t, 0x48 );
