#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/ocsp_response_info_t.start.hpp"
namespace win
{
    // [struct _OCSP_RESPONSE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_response_info_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 uint32_t                     dw_status;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStatus
        _m01 char*                        psz_obj_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszObjId
        _m02 struct win::cryptoapi_blob_t value;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
                                                     
        SDK_MAGIC_PROPERTIES( "_OCSP_RESPONSE_INFO.$", 0x20, true, 0x3b0a9358fc003c5 );           
        SDK_FIXED_SIZE( ocsp_response_info_t, 0x20 );           
    };                                               
};
#include "magic/ocsp_response_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_response_info_t, 0x20 );
