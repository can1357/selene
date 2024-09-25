#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_trust_information_t.start.hpp"
namespace win
{
    // [struct _KEY_TRUST_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_trust_information_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint1_t trusted_key;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TrustedKey
                                  
        SDK_NONVOL_PROPERTIES( "_KEY_TRUST_INFORMATION.$", 0x4, true, 0x525c16553d19360c );            
        SDK_FIXED_SIZE( key_trust_information_t, 0x4 );            
    };                            
};
#include "magic/key_trust_information_t.end.hpp"
SDK_VERIFY( struct win::key_trust_information_t, 0x4 );
