#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_status_process_t.start.hpp"
namespace win
{
    // [struct _SERVICE_STATUS_PROCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_status_process_t                 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t dw_service_type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwServiceType
        _m01 uint32_t dw_current_state;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwCurrentState
        _m02 uint32_t dw_controls_accepted;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwControlsAccepted
        _m03 uint32_t dw_win32_exit_code;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwWin32ExitCode
        _m04 uint32_t dw_service_specific_exit_code;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwServiceSpecificExitCode
        _m05 uint32_t dw_check_point;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwCheckPoint
        _m06 uint32_t dw_wait_hint;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwWaitHint
        _m07 uint32_t dw_process_id;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwProcessId
        _m08 uint32_t dw_service_flags;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwServiceFlags
                                                    
        SDK_MAGIC_PROPERTIES( "_SERVICE_STATUS_PROCESS.$", 0x24, true, 0xc0aac31a26fe58d8 );                              
        SDK_FIXED_SIZE( service_status_process_t, 0x24 );                              
    };                                              
};
#include "magic/service_status_process_t.end.hpp"
SDK_VERIFY( struct win::service_status_process_t, 0x24 );
