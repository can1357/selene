#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_ext_info_t.start.hpp"
namespace win
{
    struct cert_logotype_info_t;
    struct cert_other_logotype_info_t;

    // [struct _CERT_LOGOTYPE_EXT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_ext_info_t                                    
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                             
        _m00 uint32_t                                c_community_logo;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCommunityLogo
        _m01 struct win::cert_logotype_info_t*       rg_community_logo;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgCommunityLogo
        _m02 struct win::cert_logotype_info_t*       p_issuer_logo;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pIssuerLogo
        _m03 struct win::cert_logotype_info_t*       p_subject_logo;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pSubjectLogo
        _m04 uint32_t                                c_other_logo;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cOtherLogo
        _m05 struct win::cert_other_logotype_info_t* rg_other_logo;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgOtherLogo
                                                                       
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_EXT_INFO.$", 0x30, true, 0x824d816d4ab03bb2 );                  
        SDK_FIXED_SIZE( cert_logotype_ext_info_t, 0x30 );                  
    };                                                                 
};
#include "magic/cert_logotype_ext_info_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_ext_info_t, 0x30 );
