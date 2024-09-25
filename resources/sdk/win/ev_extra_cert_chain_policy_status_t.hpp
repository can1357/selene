#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ev_extra_cert_chain_policy_status_t.start.hpp"
namespace win
{
    // [struct _EV_EXTRA_CERT_CHAIN_POLICY_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ev_extra_cert_chain_policy_status_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t cb_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_qualifiers;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwQualifiers
        _m02 uint32_t dw_issuance_usage_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwIssuanceUsageIndex
                                              
        SDK_MAGIC_PROPERTIES( "_EV_EXTRA_CERT_CHAIN_POLICY_STATUS.$", 0xc, true, 0x86510587b850798d );                        
        SDK_FIXED_SIZE( ev_extra_cert_chain_policy_status_t, 0xc );                        
    };                                        
};
#include "magic/ev_extra_cert_chain_policy_status_t.end.hpp"
SDK_VERIFY( struct win::ev_extra_cert_chain_policy_status_t, 0xc );
