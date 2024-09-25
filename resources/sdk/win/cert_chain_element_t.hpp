#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_trust_status_t.hpp"

#include "magic/cert_chain_element_t.start.hpp"
namespace win
{
    struct ctl_usage_t;
    struct cert_context_t;
    struct cert_revocation_info_t;

    // [struct _CERT_CHAIN_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_element_t                                           
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                
        _m00 uint32_t                            cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const struct win::cert_context_t*   p_cert_context;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCertContext
        _m02 struct win::cert_trust_status_t     trust_status;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TrustStatus
        _m03 struct win::cert_revocation_info_t* p_revocation_info;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pRevocationInfo
        _m04 struct win::ctl_usage_t*            p_issuance_usage;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pIssuanceUsage
        _m05 struct win::ctl_usage_t*            p_application_usage;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pApplicationUsage
        _m06 const wchar_t*                      pwsz_extended_error_info;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pwszExtendedErrorInfo
                                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_ELEMENT.$", 0x38, true, 0xac9cac3034d28c55 );                         
        SDK_FIXED_SIZE( cert_chain_element_t, 0x38 );                         
    };                                                                    
};
#include "magic/cert_chain_element_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_element_t, 0x38 );
