#pragma once
#include <sdkgen/support_library.hpp>
#include "system_power_level_t.hpp"
#include "system_power_state_t.hpp"
#include "../power/action_policy_t.hpp"

#include "magic/system_power_policy_t.start.hpp"
namespace nt
{
    // [struct _SYSTEM_POWER_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_policy_t                                                          
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                
        _m00 uint32_t                                       revision;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 struct power::action_policy_t                  power_button;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PowerButton
        _m02 struct power::action_policy_t                  sleep_button;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SleepButton
        _m03 struct power::action_policy_t                  lid_close;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LidClose
        _m04 enum nt::system_power_state_t                  lid_open_wake;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LidOpenWake
        _m05 struct power::action_policy_t                  idle;                           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Idle
        _m06 uint32_t                                       idle_timeout;                   //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .IdleTimeout
        _m07 uint8_t                                        idle_sensitivity;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .IdleSensitivity
        _m08 uint8_t                                        dynamic_throttle;               //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .DynamicThrottle
        _m09 enum nt::system_power_state_t                  min_sleep;                      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MinSleep
        _m10 enum nt::system_power_state_t                  max_sleep;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MaxSleep
        _m11 enum nt::system_power_state_t                  reduced_latency_sleep;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ReducedLatencySleep
        _m12 uint32_t                                       win_logon_flags;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WinLogonFlags
        _m13 uint32_t                                       doze_s4_timeout;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DozeS4Timeout
        _m14 uint32_t                                       broadcast_capacity_resolution;  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .BroadcastCapacityResolution
        _m15 sdk::array<struct nt::system_power_level_t, 4> discharge_policy;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DischargePolicy
        _m16 uint32_t                                       video_timeout;                  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .VideoTimeout
        _m17 uint8_t                                        video_dim_display;              //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .VideoDimDisplay
        _m18 sdk::array<uint32_t, 3>                        video_reserved;                 //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .VideoReserved
        _m19 uint32_t                                       spindown_timeout;               //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .SpindownTimeout
        _m20 uint8_t                                        optimize_for_power;             //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .OptimizeForPower
        _m21 uint8_t                                        fan_throttle_tolerance;         //{ +0x00d9    +0x00d9    +0x00d9    +0x00d9    } | .FanThrottleTolerance
        _m22 uint8_t                                        forced_throttle;                //{ +0x00da    +0x00da    +0x00da    +0x00da    } | .ForcedThrottle
        _m23 uint8_t                                        min_throttle;                   //{ +0x00db    +0x00db    +0x00db    +0x00db    } | .MinThrottle
        _m24 struct power::action_policy_t                  over_throttled;                 //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .OverThrottled
                                                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POWER_POLICY.$", 0xe8, true, 0xc8246f9a1ae0f0fe );                              
        SDK_FIXED_SIZE( system_power_policy_t, 0xe8 );                                    
    };                                                                                    
};
#include "magic/system_power_policy_t.end.hpp"
SDK_VERIFY( struct nt::system_power_policy_t, 0xe8 );
