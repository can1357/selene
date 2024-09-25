#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_unit_registry_parameters_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_UNIT_REGISTRY_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_registry_parameters_t          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t busy_retry_count;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BusyRetryCount
        _m01 uint32_t queue_full_wait_io_percentage;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .QueueFullWaitIoPercentage
        _m02 uint32_t busy_pause_time;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BusyPauseTime
        _m03 uint32_t enable_logo_etw;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EnableLogoETW
        _m04 uint32_t disable_idle_power_management;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DisableIdlePowerManagement
        _m05 uint32_t minimum_idle_timeout_in_ms;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MinimumIdleTimeoutInMS
                                                    
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_REGISTRY_PARAMETERS.$", 0x18, true, 0xe05aac0bd7edd2d0 );                              
        SDK_FIXED_SIZE( raid_unit_registry_parameters_t, 0x18 );                              
    };                                              
};
#include "magic/raid_unit_registry_parameters_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_unit_registry_parameters_t, 0x18 );
