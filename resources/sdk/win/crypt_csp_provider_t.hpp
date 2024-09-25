#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"

#include "magic/crypt_csp_provider_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CSP_PROVIDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_csp_provider_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 uint32_t                     dw_key_spec;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwKeySpec
        _m01 wchar_t*                     pwsz_provider_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszProviderName
        _m02 struct win::crypt_bit_blob_t signature;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
                                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_CSP_PROVIDER.$", 0x28, true, 0x7b47d86e2761d6f9 );                   
        SDK_FIXED_SIZE( crypt_csp_provider_t, 0x28 );                   
    };                                                       
};
#include "magic/crypt_csp_provider_t.end.hpp"
SDK_VERIFY( struct win::crypt_csp_provider_t, 0x28 );
