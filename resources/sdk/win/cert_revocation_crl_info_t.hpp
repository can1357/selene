#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_revocation_crl_info_t.start.hpp"
namespace win
{
    struct crl_entry_t;
    struct crl_context_t;

    // [struct _CERT_REVOCATION_CRL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_revocation_crl_info_t                             
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 uint32_t                         cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const struct win::crl_context_t* p_base_crl_context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBaseCrlContext
        _m02 const struct win::crl_context_t* p_delta_crl_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pDeltaCrlContext
        _m03 struct win::crl_entry_t*         p_crl_entry;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCrlEntry
        _m04 int32_t                          f_delta_crl_entry;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fDeltaCrlEntry
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_REVOCATION_CRL_INFO.$", 0x28, true, 0xf303631d3cf5e79b );                    
        SDK_FIXED_SIZE( cert_revocation_crl_info_t, 0x28 );                    
    };                                                            
};
#include "magic/cert_revocation_crl_info_t.end.hpp"
SDK_VERIFY( struct win::cert_revocation_crl_info_t, 0x28 );
