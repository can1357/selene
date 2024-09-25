#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_mask_gen_algorithm_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_rsa_ssa_pss_parameters_t.start.hpp"
namespace win
{
    // [struct _CRYPT_RSA_SSA_PSS_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_rsa_ssa_pss_parameters_t                                
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 struct win::crypt_algorithm_identifier_t hash_algorithm;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgorithm
        _m01 struct win::crypt_mask_gen_algorithm_t   mask_gen_algorithm;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaskGenAlgorithm
        _m02 uint32_t                                 dw_salt_length;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwSaltLength
        _m03 uint32_t                                 dw_trailer_field;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwTrailerField
                                                                         
        SDK_MAGIC_PROPERTIES( "_CRYPT_RSA_SSA_PSS_PARAMETERS.$", 0x40, true, 0x9fb3b49e60007c1c );                   
        SDK_FIXED_SIZE( crypt_rsa_ssa_pss_parameters_t, 0x40 );                   
    };                                                                   
};
#include "magic/crypt_rsa_ssa_pss_parameters_t.end.hpp"
SDK_VERIFY( struct win::crypt_rsa_ssa_pss_parameters_t, 0x40 );
