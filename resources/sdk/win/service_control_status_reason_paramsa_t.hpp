#pragma once
#include <sdkgen/support_library.hpp>
#include "service_status_process_t.hpp"

#include "magic/service_control_status_reason_paramsa_t.start.hpp"
namespace win
{
    // [struct _SERVICE_CONTROL_STATUS_REASON_PARAMSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_control_status_reason_paramsa_t               
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m00 uint32_t                             dw_reason;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReason
        _m01 char*                                psz_comment;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszComment
        _m02 struct win::service_status_process_t service_status;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceStatus
                                                                 
        SDK_MAGIC_PROPERTIES( "_SERVICE_CONTROL_STATUS_REASON_PARAMSA.$", 0x38, true, 0x814b18cfeaff7320 );               
        SDK_FIXED_SIZE( service_control_status_reason_paramsa_t, 0x38 );               
    };                                                           
};
#include "magic/service_control_status_reason_paramsa_t.end.hpp"
SDK_VERIFY( struct win::service_control_status_reason_paramsa_t, 0x38 );
