#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/system_power_policy_t.hpp"
#include "../nt/system_power_condition_t.hpp"

#include "magic/power_setting_values_t.start.hpp"
namespace pop
{
    // [struct _POP_POWER_SETTING_VALUES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_setting_values_t                                                
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                       
        _m000 uint32_t                          structure_size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureSize
        _m001 struct nt::system_power_policy_t  pop_policy;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PopPolicy
        _m002 enum nt::system_power_condition_t current_ac_dc_power_state;         //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .CurrentAcDcPowerState
        _m003 uint8_t                           away_mode_enabled;                 //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .AwayModeEnabled
        _m004 uint8_t                           away_mode_engaged;                 //{ +0x00f1    +0x00f1    +0x00f1    +0x00f1    } | .AwayModeEngaged
        _m005 uint8_t                           away_mode_policy_allowed;          //{ +0x00f2    +0x00f2    +0x00f2    +0x00f2    } | .AwayModePolicyAllowed
        _m006 volatile int32_t                  away_mode_ignore_user_present;     //{ +0x00f4    +0x00f4    +0x00f4    +0x00f4    } | .AwayModeIgnoreUserPresent
        _m007 volatile int32_t                  away_mode_ignore_action;           //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .AwayModeIgnoreAction
        _m008 uint8_t                           disable_fast_s4;                   //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .DisableFastS4
        _m009 uint8_t                           disable_standby_states;            //{ +0x00fd    +0x00fd    +0x00fd    +0x00fd    } | .DisableStandbyStates
        _m010 uint32_t                          unattend_sleep_timeout;            //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .UnattendSleepTimeout
        _m011 volatile uint32_t                 disk_ignore_time;                  //{ +0x0104    +0x0104    +0x0104    +0x0104    } | .DiskIgnoreTime
        _m012 volatile uint32_t                 device_idle_policy;                //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .DeviceIdlePolicy
        _m013 uint32_t                          video_dim_timeout;                 //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .VideoDimTimeout
        _m014 uint32_t                          video_normal_brightness;           //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .VideoNormalBrightness
        _m015 uint32_t                          video_dim_brightness;              //{ +0x0114    +0x0114    +0x0114    +0x0114    } | .VideoDimBrightness
        _m016 uint32_t                          als_offset;                        //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .AlsOffset
        _m017 uint32_t                          als_enabled;                       //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .AlsEnabled
        _m018 uint32_t                          es_brightness;                     //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .EsBrightness
        _m019 uint8_t                           switch_shutdown_forced;            //{ +0x0124    +0x0124    +0x0124    +0x0124    } | .SwitchShutdownForced
        _m020 uint32_t                          system_cooling_policy;             //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .SystemCoolingPolicy
        _m021 uint8_t                           media_buffering_engaged;           //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .MediaBufferingEngaged
        _m022 uint8_t                           fullscreen_video_playback;         //{ +0x012f    +0x012e    +0x012e    +0x012e    } | .FullscreenVideoPlayback
        _m023 uint32_t                          es_battery_threshold;              //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .EsBatteryThreshold
        _m024 uint8_t                           es_aggressive;                     //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .EsAggressive
        _m025 uint8_t                           es_user_away_setting;              //{ +0x0135    +0x0135    +0x0135    +0x0135    } | .EsUserAwaySetting
        _m026 uint32_t                          connectivity_in_standby;           //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ConnectivityInStandby
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                       
        _m027 uint8_t                           audio_activity;                    //{ +0x012d    +0x012d    +0x012d    } | .AudioActivity
        _m028 uint32_t                          disconnected_standby_mode;         //{ +0x013c    +0x013c    +0x013c    } | .DisconnectedStandbyMode
        _m029 uint32_t                          user_presence_prediction_enabled;  //{ +0x0140    +0x0140    +0x0140    } | .UserPresencePredictionEnabled
        _m030 uint8_t                           airplane_mode_enabled;             //{ +0x0144    +0x0144    +0x0144    } | .AirplaneModeEnabled
        _m031 uint8_t                           bluetooth_device_charging;         //{ +0x0145    +0x0145    +0x0145    } | .BluetoothDeviceCharging
                                                                                 
        // Windows 10 v1607                                                      
        //                                                                       
        _m032 uint8_t                           offloaded_audio;                   //{ +0x012d    } | .OffloadedAudio
        _m033 uint8_t                           non_offloaded_audio;               //{ +0x012e    } | .NonOffloadedAudio
                                                                                 
        SDK_MAGIC_PROPERTIES( "_POP_POWER_SETTING_VALUES.$", 0x148, true, 0x9a2f0fba4a00e3bd );                                 
        SDK_DYNAMIC_SIZE( power_setting_values_t );                                 
    };                                                                           
};
#include "magic/power_setting_values_t.end.hpp"
