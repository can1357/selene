#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "cert_trust_status_t.hpp"

#include "magic/cert_chain_context_t.start.hpp"
namespace win
{
    struct cert_simple_chain_t;
    struct cert_chain_context_t;

    // [struct _CERT_CHAIN_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_context_t                                                       
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                            
        _m00 uint32_t                                 cb_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cert_trust_status_t          trust_status;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TrustStatus
        _m02 uint32_t                                 c_chain;                          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cChain
        _m03 struct win::cert_simple_chain_t**        rgp_chain;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgpChain
        _m04 uint32_t                                 c_lower_quality_chain_context;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cLowerQualityChainContext
        _m05 const struct win::cert_chain_context_t** rgp_lower_quality_chain_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgpLowerQualityChainContext
        _m06 int32_t                                  f_has_revocation_freshness_time;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .fHasRevocationFreshnessTime
        _m07 uint32_t                                 dw_revocation_freshness_time;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwRevocationFreshnessTime
        _m08 uint32_t                                 dw_create_flags;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwCreateFlags
        _m09 struct nt::guid_t                        chain_id;                         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ChainId
                                                                                      
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_CONTEXT.$", 0x48, true, 0xe92eec23eb534d02 );                                
        SDK_FIXED_SIZE( cert_chain_context_t, 0x48 );                                 
    };                                                                                
};
#include "magic/cert_chain_context_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_context_t, 0x48 );
