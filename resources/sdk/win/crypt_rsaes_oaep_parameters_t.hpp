#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_psource_algorithm_t.hpp"
#include "crypt_mask_gen_algorithm_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_rsaes_oaep_parameters_t.start.hpp"
namespace win
{
    // [struct _CRYPT_RSAES_OAEP_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_rsaes_oaep_parameters_t                                 
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 struct win::crypt_algorithm_identifier_t hash_algorithm;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgorithm
        _m01 struct win::crypt_mask_gen_algorithm_t   mask_gen_algorithm;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaskGenAlgorithm
        _m02 struct win::crypt_psource_algorithm_t    p_source_algorithm;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PSourceAlgorithm
                                                                         
        SDK_MAGIC_PROPERTIES( "_CRYPT_RSAES_OAEP_PARAMETERS.$", 0x50, true, 0x8c7edb9ec419b910 );                   
        SDK_FIXED_SIZE( crypt_rsaes_oaep_parameters_t, 0x50 );                   
    };                                                                   
};
#include "magic/crypt_rsaes_oaep_parameters_t.end.hpp"
SDK_VERIFY( struct win::crypt_rsaes_oaep_parameters_t, 0x50 );
