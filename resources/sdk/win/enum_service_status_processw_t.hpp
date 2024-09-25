#pragma once
#include <sdkgen/support_library.hpp>
#include "service_status_process_t.hpp"

#include "magic/enum_service_status_processw_t.start.hpp"
namespace win
{
    // [struct _ENUM_SERVICE_STATUS_PROCESSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enum_service_status_processw_t                                
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                               
        _m00 wchar_t*                             lp_service_name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpServiceName
        _m01 wchar_t*                             lp_display_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpDisplayName
        _m02 struct win::service_status_process_t service_status_process;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceStatusProcess
                                                                         
        SDK_MAGIC_PROPERTIES( "_ENUM_SERVICE_STATUS_PROCESSW.$", 0x38, true, 0x5cd62e4f0c7ad46b );                       
        SDK_FIXED_SIZE( enum_service_status_processw_t, 0x38 );                       
    };                                                                   
};
#include "magic/enum_service_status_processw_t.end.hpp"
SDK_VERIFY( struct win::enum_service_status_processw_t, 0x38 );
