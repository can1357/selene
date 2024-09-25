#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_crl_context_pair_t.start.hpp"
namespace win
{
    struct crl_context_t;
    struct cert_context_t;

    // [struct _CERT_CRL_CONTEXT_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_crl_context_pair_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 const struct win::cert_context_t* p_cert_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pCertContext
        _m01 const struct win::crl_context_t*  p_crl_context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCrlContext
                                                              
        SDK_MAGIC_PROPERTIES( "_CERT_CRL_CONTEXT_PAIR.$", 0x10, true, 0xb68c0a2c26704e74 );               
        SDK_FIXED_SIZE( cert_crl_context_pair_t, 0x10 );               
    };                                                        
};
#include "magic/cert_crl_context_pair_t.end.hpp"
SDK_VERIFY( struct win::cert_crl_context_pair_t, 0x10 );
