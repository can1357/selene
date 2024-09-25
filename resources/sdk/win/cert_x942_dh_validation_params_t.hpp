#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"

#include "magic/cert_x942_dh_validation_params_t.start.hpp"
namespace win
{
    // [struct _CERT_X942_DH_VALIDATION_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_x942_dh_validation_params_t            
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct win::crypt_bit_blob_t seed;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .seed
        _m01 uint32_t                     pgen_counter;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pgenCounter
                                                       
        SDK_MAGIC_PROPERTIES( "_CERT_X942_DH_VALIDATION_PARAMS.$", 0x20, true, 0x42303e649f9e9d86 );             
        SDK_FIXED_SIZE( cert_x942_dh_validation_params_t, 0x20 );             
    };                                                 
};
#include "magic/cert_x942_dh_validation_params_t.end.hpp"
SDK_VERIFY( struct win::cert_x942_dh_validation_params_t, 0x20 );
