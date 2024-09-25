#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_pkcs12_pbe_params_t.start.hpp"
namespace win
{
    // [struct _CRYPT_PKCS12_PBE_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_pkcs12_pbe_params_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 int32_t  i_iterations;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iIterations
        _m01 uint32_t cb_salt;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbSalt
                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_PKCS12_PBE_PARAMS.$", 0x8, true, 0x2ab0500aaa09b832 );             
        SDK_FIXED_SIZE( crypt_pkcs12_pbe_params_t, 0x8 );             
    };                              
};
#include "magic/crypt_pkcs12_pbe_params_t.end.hpp"
SDK_VERIFY( struct win::crypt_pkcs12_pbe_params_t, 0x8 );
