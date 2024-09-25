#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_context_function_providers_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CONTEXT_FUNCTION_PROVIDERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_context_function_providers_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint32_t  c_providers;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cProviders
        _m01 wchar_t** rgpsz_providers;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszProviders
                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTEXT_FUNCTION_PROVIDERS.$", 0x10, true, 0xcbb3e5fd9c3db6d4 );                
        SDK_FIXED_SIZE( crypt_context_function_providers_t, 0x10 );                
    };                                       
};
#include "magic/crypt_context_function_providers_t.end.hpp"
SDK_VERIFY( struct win::crypt_context_function_providers_t, 0x10 );
