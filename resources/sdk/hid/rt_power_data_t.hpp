#pragma once
#include <sdkgen/support_library.hpp>
#include "input_suppression_support_t.hpp"
#include "wake_screen_on_input_support_t.hpp"
#include "../po/input_suppression_state_t.hpp"
#include "system_input_suppression_support_t.hpp"

#include "magic/rt_power_data_t.start.hpp"
namespace hid
{
    // [struct _HID_RT_POWER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rt_power_data_t                                                                                   
    {                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                   
        _m000 uint1_t                                  idle_based_on_monitor_dim;                              //{ +0x0018@0  +0x0018@0  +0x001c@0  +0x0018@0  } | .IdleBasedOnMonitorDim
        _m001 uint1_t                                  disable_idle_on_no_open_handles;                        //{ +0x0018@1  +0x0018@1  +0x001c@1  +0x0018@1  } | .DisableIdleOnNoOpenHandles
        _m002 uint1_t                                  idle_enabled_in_registry;                               //{ +0x0018@2  +0x0018@2  +0x001c@2  +0x0018@2  } | .IdleEnabledInRegistry
        _m003 uint1_t                                  idle_enabled_in_wmi;                                    //{ +0x0018@3  +0x0018@3  +0x001c@3  +0x0018@3  } | .IdleEnabledInWmi
        _m004 varuint_t                                epm_enabled_in_registry;                                //{ +0x0018@4  +0x0018@4  +0x001c@4  +0x0018@4  } | .EpmEnabledInRegistry
        _m005 uint1_t                                  epm_enabled_use_monitor;                                //{ +0x0018@5  +0x0018@6  +0x001c@6  +0x0018@6  } | .EpmEnabledUseMonitor
        _m006 uint1_t                                  monitor_off;                                            //{ +0x0018@6  +0x0018@7  +0x0028@4  +0x0018@7  } | .MonitorOff
        _m007 uint1_t                                  system_in_cs;                                           //{ +0x0018@7  +0x0018@8  +0x0028@2  +0x0018@8  } | .SystemInCS
        _m008 uint1_t                                  pdo_in_stable_state;                                    //{ +0x0018@8  +0x0018@9  +0x0028@1  +0x0018@9  } | .PdoInStableState
        _m009 uint1_t                                  monitor_dim;                                            //{ +0x0018@9  +0x0018@10 +0x0028@3  +0x0018@10 } | .MonitorDim
        _m010 uint1_t                                  idle_attempted;                                         //{ +0x0018@10 +0x0018@11 +0x0028@0  +0x0018@11 } | .IdleAttempted
                                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                      
        //                                                                                                   
        _m011 uint32_t                                 default_idle_timeout;                                   //{ +0x0000    +0x0000    +0x0000    } | .DefaultIdleTimeout
        _m012 uint32_t                                 default_idle_timeout_for_connected_standby;             //{ +0x0004    +0x0004    +0x0004    } | .DefaultIdleTimeoutForConnectedStandby
        _m013 uint32_t                                 default_idle_timeout_for_no_handles;                    //{ +0x0008    +0x0008    +0x0008    } | .DefaultIdleTimeoutForNoHandles
        _m014 uint32_t                                 default_idle_timeout_for_no_handles_initial;            //{ +0x000c    +0x000c    +0x000c    } | .DefaultIdleTimeoutForNoHandlesInitial
        _m015 uint32_t                                 default_idle_timeout_for_monitor_dim;                   //{ +0x0010    +0x0010    +0x0010    } | .DefaultIdleTimeoutForMonitorDim
        _m016 uint32_t                                 pdo_idle_timeout_override;                              //{ +0x0014    +0x0014    +0x0014    } | .PdoIdleTimeoutOverride
                                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                   
        _m017 uint1_t                                  suppress_input_in_cs;                                   //{ +0x0018@12 +0x001c@7  +0x0018@12 } | .SuppressInputInCS
        _m018 uint1_t                                  disable_ping_pong_retries_on_device_config_error;       //{ +0x0018@13 +0x001c@8  +0x0018@13 } | .DisablePingPongRetriesOnDeviceConfigError
        _m019 uint32_t                                 client_input_suppression_requests_needed;               //{ +0x001c    +0x002c    +0x001c    } | .ClientInputSuppressionRequestsNeeded
        _m020 int32_t                                  system_input_suppression_support;                       //{ +0x0020    +0x0020    +0x0020    } | .SystemInputSuppressionSupport
        _m021 enum po::input_suppression_state_t       system_input_suppression_state;                         //{ +0x0024    +0x0030    +0x0024    } | .SystemInputSuppressionState
                                                                                                             
        // Windows 11                                                                                        
        //                                                                                                   
        _m022 uint32_t                                 default_idle_timeout_in_msec;                           //{ +0x0000    } | .DefaultIdleTimeoutInMsec
        _m023 uint32_t                                 default_idle_timeout_in_msec_for_connected_standby;     //{ +0x0004    } | .DefaultIdleTimeoutInMsecForConnectedStandby
        _m024 uint32_t                                 default_idle_timeout_in_msec_for_no_handles;            //{ +0x0008    } | .DefaultIdleTimeoutInMsecForNoHandles
        _m025 uint32_t                                 default_idle_timeout_in_msec_for_no_handles_initial;    //{ +0x000c    } | .DefaultIdleTimeoutInMsecForNoHandlesInitial
        _m026 uint32_t                                 default_idle_timeout_in_msec_for_monitor_dim;           //{ +0x0010    } | .DefaultIdleTimeoutInMsecForMonitorDim
        _m027 uint32_t                                 default_idle_timeout_in_msec_for_wake_screen_on_input;  //{ +0x0014    } | .DefaultIdleTimeoutInMsecForWakeScreenOnInput
        _m028 uint32_t                                 pdo_idle_timeout_in_msec_override;                      //{ +0x0018    } | .PdoIdleTimeoutInMsecOverride
        _m029 enum hid::wake_screen_on_input_support_t wake_screen_on_input_support;                           //{ +0x0024    } | .WakeScreenOnInputSupport
                                                                                                             
        SDK_MAGIC_PROPERTIES( "_HID_RT_POWER_DATA.$", 0x28, true, 0x20b1367185d50e7f );                                                      
        SDK_DYNAMIC_SIZE( rt_power_data_t );                                                                 
    };                                                                                                       
};
#include "magic/rt_power_data_t.end.hpp"
