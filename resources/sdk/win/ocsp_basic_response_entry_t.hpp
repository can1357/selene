#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "ocsp_cert_id_t.hpp"

#include "magic/ocsp_basic_response_entry_t.start.hpp"
namespace win
{
    struct cert_extension_t;
    struct ocsp_basic_revoked_info_t;

    // [struct _OCSP_BASIC_RESPONSE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_basic_response_entry_t                             
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 struct win::ocsp_cert_id_t             cert_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CertId
        _m01 uint32_t                               dw_cert_status;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwCertStatus
        _m02 struct win::ocsp_basic_revoked_info_t* p_revoked_info;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pRevokedInfo
        _m03 struct win::filetime_t                 this_update;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ThisUpdate
        _m04 struct win::filetime_t                 next_update;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NextUpdate
        _m05 uint32_t                               c_extension;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .cExtension
        _m06 struct win::cert_extension_t*          rg_extension;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .rgExtension
                                                                   
        SDK_MAGIC_PROPERTIES( "_OCSP_BASIC_RESPONSE_ENTRY.$", 0x78, true, 0x5386d4ea3e4c4d45 );               
        SDK_FIXED_SIZE( ocsp_basic_response_entry_t, 0x78 );               
    };                                                             
};
#include "magic/ocsp_basic_response_entry_t.end.hpp"
SDK_VERIFY( struct win::ocsp_basic_response_entry_t, 0x78 );
