#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crl_find_issued_for_para_t.start.hpp"
namespace win
{
    struct cert_context_t;

    // [struct _CRL_FIND_ISSUED_FOR_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_find_issued_for_para_t                         
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 const struct win::cert_context_t* p_subject_cert;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pSubjectCert
        _m01 const struct win::cert_context_t* p_issuer_cert;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pIssuerCert
                                                              
        SDK_MAGIC_PROPERTIES( "_CRL_FIND_ISSUED_FOR_PARA.$", 0x10, true, 0x9312d22ef6b17ff0 );               
        SDK_FIXED_SIZE( crl_find_issued_for_para_t, 0x10 );               
    };                                                        
};
#include "magic/crl_find_issued_for_para_t.end.hpp"
SDK_VERIFY( struct win::crl_find_issued_for_para_t, 0x10 );
