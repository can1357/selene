#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_qualifier_user_notice_t.start.hpp"
namespace win
{
    struct cert_policy_qualifier_notice_reference_t;

    // [struct _CERT_POLICY_QUALIFIER_USER_NOTICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_qualifier_user_notice_t                             
    {                                                                      
        using pcert_policy_qualifier_notice_reference_t = struct win::cert_policy_qualifier_notice_reference_t*;                   
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                 
        _m00 pcert_policy_qualifier_notice_reference_t  p_notice_reference;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNoticeReference
        _m01 wchar_t*                                   psz_display_text;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszDisplayText
                                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_QUALIFIER_USER_NOTICE.$", 0x10, true, 0xfecee38b60f8a26a );                   
        SDK_FIXED_SIZE( cert_policy_qualifier_user_notice_t, 0x10 );                   
    };                                                                     
};
#include "magic/cert_policy_qualifier_user_notice_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_qualifier_user_notice_t, 0x10 );
