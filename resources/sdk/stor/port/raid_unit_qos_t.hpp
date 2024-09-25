#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_unit_qos_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_UNIT_QOS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_qos_t                               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint8_t  enabled;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
        _m01 uint32_t retry_count;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RetryCount
        _m02 uint32_t reset_unresponsive_timeout_in500ms;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResetUnresponsiveTimeoutIn500MS
        _m03 uint32_t reset_interval;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ResetInterval
        _m04 uint32_t hw_timeout_in_sec;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HwTimeoutInSec
        _m05 uint32_t reset_timeout_in_sec;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ResetTimeoutInSec
        _m06 uint32_t max_wait_time_in500ms;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxWaitTimeIn500MS
        _m07 uint8_t  timer_setting_change_needed;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TimerSettingChangeNeeded
        _m08 int32_t  adapter_wait_timeout_check_enabled;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AdapterWaitTimeoutCheckEnabled
        _m09 uint64_t qos_threshold_in100ns;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QosThresholdIn100NS
                                                         
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_QOS.$", 0x30, true, 0x2783d6cb38c3911 );                                   
        SDK_FIXED_SIZE( raid_unit_qos_t, 0x30 );                                   
    };                                                   
};
#include "magic/raid_unit_qos_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_unit_qos_t, 0x30 );
