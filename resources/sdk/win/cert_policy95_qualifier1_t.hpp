#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy95_qualifier1_t.start.hpp"
namespace win
{
    struct cps_urls_t;

    // [struct _CERT_POLICY95_QUALIFIER1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy95_qualifier1_t                          
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                     
        _m00 wchar_t*                psz_practices_reference;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszPracticesReference
        _m01 char*                   psz_notice_identifier;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszNoticeIdentifier
        _m02 char*                   psz_nsi_notice_identifier;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszNSINoticeIdentifier
        _m03 uint32_t                c_cpsur_ls;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cCPSURLs
        _m04 struct win::cps_urls_t* rg_cpsur_ls;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgCPSURLs
                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY95_QUALIFIER1.$", 0x28, true, 0xb1bf35fa6219b566 );                          
        SDK_FIXED_SIZE( cert_policy95_qualifier1_t, 0x28 );                          
    };                                                         
};
#include "magic/cert_policy95_qualifier1_t.end.hpp"
SDK_VERIFY( struct win::cert_policy95_qualifier1_t, 0x28 );
