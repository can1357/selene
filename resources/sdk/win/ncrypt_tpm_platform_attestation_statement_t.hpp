#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_tpm_platform_attestation_statement_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_tpm_platform_attestation_statement_t
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t magic;                            //{ +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t version;                          //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t pcr_alg;                          //{ +0x0008    +0x0008    +0x0008    } | .pcrAlg
        _m03 uint32_t cb_signature;                     //{ +0x000c    +0x000c    +0x000c    } | .cbSignature
        _m04 uint32_t cb_quote;                         //{ +0x0010    +0x0010    +0x0010    } | .cbQuote
        _m05 uint32_t cb_pcrs;                          //{ +0x0014    +0x0014    +0x0014    } | .cbPcrs
                                                      
        SDK_MAGIC_PROPERTIES( "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.$", 0x18, true, 0x2c2d787d31628bcb );             
        SDK_FIXED_SIZE( ncrypt_tpm_platform_attestation_statement_t, 0x18 );             
    };                                                
};
#include "magic/ncrypt_tpm_platform_attestation_statement_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_tpm_platform_attestation_statement_t, 0x18 );
