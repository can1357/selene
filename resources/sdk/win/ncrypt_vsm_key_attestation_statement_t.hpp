#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_vsm_key_attestation_statement_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_VSM_KEY_ATTESTATION_STATEMENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_vsm_key_attestation_statement_t
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t magic;                       //{ +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t version;                     //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t cb_signature;                //{ +0x0008    +0x0008    +0x0008    } | .cbSignature
        _m03 uint32_t cb_report;                   //{ +0x000c    +0x000c    +0x000c    } | .cbReport
        _m04 uint32_t cb_attributes;               //{ +0x0010    +0x0010    +0x0010    } | .cbAttributes
                                                 
        SDK_MAGIC_PROPERTIES( "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.$", 0x14, true, 0x5acfc0e163963d2b );              
        SDK_FIXED_SIZE( ncrypt_vsm_key_attestation_statement_t, 0x14 );              
    };                                           
};
#include "magic/ncrypt_vsm_key_attestation_statement_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_vsm_key_attestation_statement_t, 0x14 );
