#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_key_info_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_KeyInfoW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_key_info_w_t              
    {                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 wchar_t* s_signature_algorithm_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sSignatureAlgorithmName
        _m01 wchar_t* s_encrypt_algorithm_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .sEncryptAlgorithmName
        _m02 uint32_t key_size;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KeySize
        _m03 uint32_t signature_algorithm;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SignatureAlgorithm
        _m04 uint32_t encrypt_algorithm;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncryptAlgorithm
                                                 
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_KeyInfoW.$", 0x20, true, 0x12573a644a7b31b6 );                           
        SDK_FIXED_SIZE( pkg_context_key_info_w_t, 0x20 );                           
    };                                           
};
#include "magic/pkg_context_key_info_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_key_info_w_t, 0x20 );
