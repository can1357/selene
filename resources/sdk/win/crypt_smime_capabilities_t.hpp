#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_smime_capabilities_t.start.hpp"
namespace win
{
    struct crypt_smime_capability_t;

    // [struct _CRYPT_SMIME_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_smime_capabilities_t                            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 uint32_t                              c_capability;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCapability
        _m01 struct win::crypt_smime_capability_t* rg_capability;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgCapability
                                                                 
        SDK_MAGIC_PROPERTIES( "_CRYPT_SMIME_CAPABILITIES.$", 0x10, true, 0x93e32e2b169930ae );              
        SDK_FIXED_SIZE( crypt_smime_capabilities_t, 0x10 );              
    };                                                           
};
#include "magic/crypt_smime_capabilities_t.end.hpp"
SDK_VERIFY( struct win::crypt_smime_capabilities_t, 0x10 );
