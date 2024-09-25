#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_revocation_para_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct cert_context_t;

    // [struct _CERT_REVOCATION_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_revocation_para_t                              
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 uint32_t                          cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const struct win::cert_context_t* p_issuer_cert;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pIssuerCert
        _m02 uint32_t                          c_cert_store;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cCertStore
        _m03 void**                            rg_cert_store;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgCertStore
        _m04 void*                             h_crl_store;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hCrlStore
        _m05 struct win::filetime_t*           pft_time_to_use;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pftTimeToUse
                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_REVOCATION_PARA.$", 0x30, true, 0x839e749cc5053b1d );                
        SDK_FIXED_SIZE( cert_revocation_para_t, 0x30 );                
    };                                                         
};
#include "magic/cert_revocation_para_t.end.hpp"
SDK_VERIFY( struct win::cert_revocation_para_t, 0x30 );
