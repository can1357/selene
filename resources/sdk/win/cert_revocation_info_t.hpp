#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_revocation_info_t.start.hpp"
namespace win
{
    struct cert_revocation_crl_info_t;

    // [struct _CERT_REVOCATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_revocation_info_t                                         
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 uint32_t                                cb_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                dw_revocation_result;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRevocationResult
        _m02 const char*                             psz_revocation_oid;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszRevocationOid
        _m03 void*                                   pv_oid_specific_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvOidSpecificInfo
        _m04 int32_t                                 f_has_freshness_time;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fHasFreshnessTime
        _m05 uint32_t                                dw_freshness_time;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwFreshnessTime
        _m06 struct win::cert_revocation_crl_info_t* p_crl_info;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pCrlInfo
                                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_REVOCATION_INFO.$", 0x28, true, 0x1baf1a3dff5490ba );                     
        SDK_FIXED_SIZE( cert_revocation_info_t, 0x28 );                     
    };                                                                    
};
#include "magic/cert_revocation_info_t.end.hpp"
SDK_VERIFY( struct win::cert_revocation_info_t, 0x28 );
