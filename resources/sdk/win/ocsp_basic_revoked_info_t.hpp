#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/ocsp_basic_revoked_info_t.start.hpp"
namespace win
{
    // [struct _OCSP_BASIC_REVOKED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_basic_revoked_info_t                   
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 struct win::filetime_t revocation_date;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RevocationDate
        _m01 uint32_t               dw_crl_reason_code;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCrlReasonCode
                                                       
        SDK_MAGIC_PROPERTIES( "_OCSP_BASIC_REVOKED_INFO.$", 0xc, true, 0xa87122c13acebd61 );                   
        SDK_FIXED_SIZE( ocsp_basic_revoked_info_t, 0xc );                   
    };                                                 
};
#include "magic/ocsp_basic_revoked_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_basic_revoked_info_t, 0xc );
