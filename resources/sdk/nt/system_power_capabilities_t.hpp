#pragma once
#include <sdkgen/support_library.hpp>
#include "system_power_state_t.hpp"
#include "battery_reporting_scale_t.hpp"

#include "magic/system_power_capabilities_t.start.hpp"
namespace nt
{
    // [struct SYSTEM_POWER_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_capabilities_t                                   
    {                                                                    
        using battery_scale_t = sdk::array<struct nt::battery_reporting_scale_t, 3>;                             
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m000 uint8_t                       power_button_present;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerButtonPresent
        _m001 uint8_t                       sleep_button_present;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SleepButtonPresent
        _m002 uint8_t                       lid_present;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .LidPresent
        _m003 uint8_t                       system_s1;                     //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SystemS1
        _m004 uint8_t                       system_s2;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemS2
        _m005 uint8_t                       system_s3;                     //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .SystemS3
        _m006 uint8_t                       system_s4;                     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .SystemS4
        _m007 uint8_t                       system_s5;                     //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .SystemS5
        _m008 uint8_t                       hiber_file_present;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HiberFilePresent
        _m009 uint8_t                       full_wake;                     //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .FullWake
        _m010 uint8_t                       video_dim_present;             //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .VideoDimPresent
        _m011 uint8_t                       apm_present;                   //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .ApmPresent
        _m012 uint8_t                       ups_present;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UpsPresent
        _m013 uint8_t                       thermal_control;               //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .ThermalControl
        _m014 uint8_t                       processor_throttle;            //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ProcessorThrottle
        _m015 uint8_t                       processor_min_throttle;        //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .ProcessorMinThrottle
        _m016 uint8_t                       processor_max_throttle;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessorMaxThrottle
        _m017 uint8_t                       fast_system_s4;                //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .FastSystemS4
        _m018 uint8_t                       hiberboot;                     //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Hiberboot
        _m019 uint8_t                       wake_alarm_present;            //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .WakeAlarmPresent
        _m020 uint8_t                       ao_ac;                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AoAc
        _m021 uint8_t                       disk_spin_down;                //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .DiskSpinDown
        _m022 uint8_t                       hiber_file_type;               //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .HiberFileType
        _m023 uint8_t                       ao_ac_connectivity_supported;  //{ +0x0017    +0x0017    +0x0017    +0x0017    } | .AoAcConnectivitySupported
        _m024 uint8_t                       system_batteries_present;      //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .SystemBatteriesPresent
        _m025 uint8_t                       batteries_are_short_term;      //{ +0x001f    +0x001f    +0x001f    +0x001f    } | .BatteriesAreShortTerm
        _m026 battery_scale_t               battery_scale;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BatteryScale
        _m027 enum nt::system_power_state_t ac_on_line_wake;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AcOnLineWake
        _m028 enum nt::system_power_state_t soft_lid_wake;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SoftLidWake
        _m029 enum nt::system_power_state_t rtc_wake;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RtcWake
        _m030 enum nt::system_power_state_t min_device_wake_state;         //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MinDeviceWakeState
        _m031 enum nt::system_power_state_t default_low_latency_wake;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DefaultLowLatencyWake
                                                                         
        SDK_MAGIC_PROPERTIES( "SYSTEM_POWER_CAPABILITIES.$", 0x4c, true, 0x8139b717de227122 );                             
        SDK_FIXED_SIZE( system_power_capabilities_t, 0x4c );                             
    };                                                                   
};
#include "magic/system_power_capabilities_t.end.hpp"
SDK_VERIFY( struct nt::system_power_capabilities_t, 0x4c );
