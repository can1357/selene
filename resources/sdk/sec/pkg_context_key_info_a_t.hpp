#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_key_info_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_KeyInfoA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_key_info_a_t              
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 char*    s_signature_algorithm_name;  //{ +0x0000    +0x0000    +0x0000    } | .sSignatureAlgorithmName
        _m01 char*    s_encrypt_algorithm_name;    //{ +0x0008    +0x0008    +0x0008    } | .sEncryptAlgorithmName
        _m02 uint32_t key_size;                    //{ +0x0010    +0x0010    +0x0010    } | .KeySize
        _m03 uint32_t signature_algorithm;         //{ +0x0014    +0x0014    +0x0014    } | .SignatureAlgorithm
        _m04 uint32_t encrypt_algorithm;           //{ +0x0018    +0x0018    +0x0018    } | .EncryptAlgorithm
                                                 
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_KeyInfoA.$", 0x20, true, 0x6ce70b12ae2ce447 );                           
        SDK_FIXED_SIZE( pkg_context_key_info_a_t, 0x20 );                           
    };                                           
};
#include "magic/pkg_context_key_info_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_key_info_a_t, 0x20 );
