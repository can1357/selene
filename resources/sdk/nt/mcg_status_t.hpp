#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mcg_status_t.start.hpp"
namespace nt
{
    // [union _MCG_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union mcg_status_t                          
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  restart_ip_valid;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RestartIpValid
        _m01 uint1_t  error_ip_valid;             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ErrorIpValid
        _m02 uint1_t  machine_check_in_progress;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MachineCheckInProgress
        _m03 uint64_t quad_part;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m04 uint1_t  local_mce_valid;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .LocalMceValid
                                                
        SDK_NONVOL_PROPERTIES( "_MCG_STATUS.$", 0x8, true, 0x8ad91ee6b659f24b );                          
        SDK_FIXED_SIZE( mcg_status_t, 0x8 );                          
    };                                          
};
#include "magic/mcg_status_t.end.hpp"
SDK_VERIFY( union nt::mcg_status_t, 0x8 );
