#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crl_revocation_info_t.start.hpp"
namespace win
{
    struct crl_entry_t;
    struct crl_context_t;
    struct cert_chain_context_t;

    // [struct _CRL_REVOCATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_revocation_info_t                                        
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                              
        _m00 struct win::crl_entry_t*                p_crl_entry;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pCrlEntry
        _m01 const struct win::crl_context_t*        p_crl_context;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCrlContext
        _m02 const struct win::cert_chain_context_t* p_crl_issuer_chain;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pCrlIssuerChain
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRL_REVOCATION_INFO.$", 0x18, true, 0xa5214b30e354f012 );                   
        SDK_FIXED_SIZE( crl_revocation_info_t, 0x18 );                   
    };                                                                  
};
#include "magic/crl_revocation_info_t.end.hpp"
SDK_VERIFY( struct win::crl_revocation_info_t, 0x18 );
