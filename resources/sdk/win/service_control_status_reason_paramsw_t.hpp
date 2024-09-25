#pragma once
#include <sdkgen/support_library.hpp>
#include "service_status_process_t.hpp"

#include "magic/service_control_status_reason_paramsw_t.start.hpp"
namespace win
{
    // [struct _SERVICE_CONTROL_STATUS_REASON_PARAMSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_control_status_reason_paramsw_t               
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 uint32_t                             dw_reason;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReason
        _m01 wchar_t*                             psz_comment;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszComment
        _m02 struct win::service_status_process_t service_status;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceStatus
                                                                 
        SDK_MAGIC_PROPERTIES( "_SERVICE_CONTROL_STATUS_REASON_PARAMSW.$", 0x38, true, 0xf095738cd7119b6f );               
        SDK_FIXED_SIZE( service_control_status_reason_paramsw_t, 0x38 );               
    };                                                           
};
#include "magic/service_control_status_reason_paramsw_t.end.hpp"
SDK_VERIFY( struct win::service_control_status_reason_paramsw_t, 0x38 );
