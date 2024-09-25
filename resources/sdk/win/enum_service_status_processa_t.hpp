#pragma once
#include <sdkgen/support_library.hpp>
#include "service_status_process_t.hpp"

#include "magic/enum_service_status_processa_t.start.hpp"
namespace win
{
    // [struct _ENUM_SERVICE_STATUS_PROCESSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enum_service_status_processa_t                                
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                               
        _m00 char*                                lp_service_name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpServiceName
        _m01 char*                                lp_display_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpDisplayName
        _m02 struct win::service_status_process_t service_status_process;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceStatusProcess
                                                                         
        SDK_MAGIC_PROPERTIES( "_ENUM_SERVICE_STATUS_PROCESSA.$", 0x38, true, 0xdc0d1c248d998ec8 );                       
        SDK_FIXED_SIZE( enum_service_status_processa_t, 0x38 );                       
    };                                                                   
};
#include "magic/enum_service_status_processa_t.end.hpp"
SDK_VERIFY( struct win::enum_service_status_processa_t, 0x38 );
