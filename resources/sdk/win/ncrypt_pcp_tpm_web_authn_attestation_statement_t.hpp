#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_pcp_tpm_web_authn_attestation_statement_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_pcp_tpm_web_authn_attestation_statement_t
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t magic;                                 //{ +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t version;                               //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t header_size;                           //{ +0x0008    +0x0008    +0x0008    } | .HeaderSize
        _m03 uint32_t cb_certify_info;                       //{ +0x000c    +0x000c    +0x000c    } | .cbCertifyInfo
        _m04 uint32_t cb_signature;                          //{ +0x0010    +0x0010    +0x0010    } | .cbSignature
        _m05 uint32_t cb_tpm_public;                         //{ +0x0014    +0x0014    +0x0014    } | .cbTpmPublic
                                                           
        SDK_MAGIC_PROPERTIES( "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.$", 0x18, true, 0x697b3376790756e3 );                
        SDK_FIXED_SIZE( ncrypt_pcp_tpm_web_authn_attestation_statement_t, 0x18 );                
    };                                                     
};
#include "magic/ncrypt_pcp_tpm_web_authn_attestation_statement_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_pcp_tpm_web_authn_attestation_statement_t, 0x18 );
