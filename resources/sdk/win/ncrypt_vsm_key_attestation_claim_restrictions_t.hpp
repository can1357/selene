#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_vsm_key_attestation_claim_restrictions_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_vsm_key_attestation_claim_restrictions_t
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t version;                              //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint64_t trustlet_id;                          //{ +0x0008    +0x0008    +0x0008    } | .TrustletId
        _m02 uint32_t min_svn;                              //{ +0x0010    +0x0010    +0x0010    } | .MinSvn
        _m03 uint32_t flags_mask;                           //{ +0x0014    +0x0014    +0x0014    } | .FlagsMask
        _m04 uint32_t flags_expected;                       //{ +0x0018    +0x0018    +0x0018    } | .FlagsExpected
        _m05 uint1_t  allow_debugging;                      //{ +0x001c@0  +0x001c@0  +0x001c@0  } | .AllowDebugging
                                                          
        SDK_MAGIC_PROPERTIES( "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.$", 0x20, true, 0xc41938e296340868 );                
        SDK_FIXED_SIZE( ncrypt_vsm_key_attestation_claim_restrictions_t, 0x20 );                
    };                                                    
};
#include "magic/ncrypt_vsm_key_attestation_claim_restrictions_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_vsm_key_attestation_claim_restrictions_t, 0x20 );
