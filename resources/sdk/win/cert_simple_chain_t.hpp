#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_trust_status_t.hpp"

#include "magic/cert_simple_chain_t.start.hpp"
namespace win
{
    struct cert_chain_element_t;
    struct cert_trust_list_info_t;

    // [struct _CERT_SIMPLE_CHAIN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_simple_chain_t                                                   
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                       
        _m00 uint32_t                            cb_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cert_trust_status_t     trust_status;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TrustStatus
        _m02 uint32_t                            c_element;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cElement
        _m03 struct win::cert_chain_element_t**  rgp_element;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgpElement
        _m04 struct win::cert_trust_list_info_t* p_trust_list_info;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pTrustListInfo
        _m05 int32_t                             f_has_revocation_freshness_time;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fHasRevocationFreshnessTime
        _m06 uint32_t                            dw_revocation_freshness_time;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwRevocationFreshnessTime
                                                                                 
        SDK_MAGIC_PROPERTIES( "_CERT_SIMPLE_CHAIN.$", 0x28, true, 0xb6f76141065a333 );                                
        SDK_FIXED_SIZE( cert_simple_chain_t, 0x28 );                                
    };                                                                           
};
#include "magic/cert_simple_chain_t.end.hpp"
SDK_VERIFY( struct win::cert_simple_chain_t, 0x28 );
