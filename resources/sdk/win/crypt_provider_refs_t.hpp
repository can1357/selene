#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_provider_refs_t.start.hpp"
namespace win
{
    struct crypt_provider_ref_t;

    // [struct _CRYPT_PROVIDER_REFS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_provider_refs_t                              
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 uint32_t                           c_providers;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cProviders
        _m01 struct win::crypt_provider_ref_t** rgp_providers;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpProviders
                                                              
        SDK_MAGIC_PROPERTIES( "_CRYPT_PROVIDER_REFS.$", 0x10, true, 0xc1c8cdc4c2a85763 );              
        SDK_FIXED_SIZE( crypt_provider_refs_t, 0x10 );              
    };                                                        
};
#include "magic/crypt_provider_refs_t.end.hpp"
SDK_VERIFY( struct win::crypt_provider_refs_t, 0x10 );
