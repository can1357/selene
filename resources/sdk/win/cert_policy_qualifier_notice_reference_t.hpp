#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_qualifier_notice_reference_t.start.hpp"
namespace win
{
    // [struct _CERT_POLICY_QUALIFIER_NOTICE_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_qualifier_notice_reference_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 char*    psz_organization;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszOrganization
        _m01 uint32_t c_notice_numbers;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cNoticeNumbers
        _m02 int32_t* rg_notice_numbers;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgNoticeNumbers
                                                   
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_QUALIFIER_NOTICE_REFERENCE.$", 0x18, true, 0xad6dc5a701ea52b );                  
        SDK_FIXED_SIZE( cert_policy_qualifier_notice_reference_t, 0x18 );                  
    };                                             
};
#include "magic/cert_policy_qualifier_notice_reference_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_qualifier_notice_reference_t, 0x18 );
