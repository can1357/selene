#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../power/action_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "../power/policy_device_type_t.hpp"
#include "power_action_watchdog_state_t.hpp"
#include "../nt/system_power_condition_t.hpp"
#include "../nt/system_power_capabilities_t.hpp"

namespace nt { struct diagnostic_buffer_t; }
namespace nt { struct kthread_t;           }

#include "magic/power_action_t.start.hpp"
namespace pop
{
    struct hiber_context_t;
    struct device_sys_state_t;
    struct shutdown_bug_check_t;

    // [struct _POP_POWER_ACTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_action_t                                                                         
    {                                                                                             
        struct u0_wake_alarm_t                                                                    
        {                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                                    
            _m22 uint64_t                        requested_time;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestedTime
            _m23 uint64_t                        programmed_time;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProgrammedTime
            _m24 struct nt::diagnostic_buffer_t* timer_info;                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimerInfo
                                                                                                  
            SDK_MAGIC_PROPERTIES( "_POP_POWER_ACTION.WakeAlarm.$", 0x18, true, 0x4ae7bddb5afe1ee6 );                                                 
            SDK_FIXED_SIZE( u0_wake_alarm_t, 0x18 );                                                 
        };                                                                                        
                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                        
        _m000 uint8_t                                            updates;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Updates
        _m001 uint8_t                                            state;                             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .State
        _m002 uint8_t                                            shutdown;                          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Shutdown
        _m003 enum power::action_t                               action;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m004 enum nt::system_power_state_t                      lightest_state;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LightestState
        _m005 uint32_t                                           flags;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m006 int32_t                                            status;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Status
        _m007 enum power::policy_device_type_t                   device_type;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DeviceType
        _m008 uint32_t                                           device_type_flags;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceTypeFlags
        _m009 uint8_t                                            irp_minor;                         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .IrpMinor
        _m010 uint8_t                                            waking;                            //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .Waking
        _m011 enum nt::system_power_state_t                      system_state;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemState
        _m012 enum nt::system_power_state_t                      next_system_state;                 //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .NextSystemState
        _m013 enum nt::system_power_state_t                      effective_system_state;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EffectiveSystemState
        _m014 enum nt::system_power_state_t                      current_system_state;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .CurrentSystemState
        _m015 struct pop::shutdown_bug_check_t*                  shutdown_bug_code;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ShutdownBugCode
        _m016 struct pop::device_sys_state_t*                    dev_state;                         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DevState
        _m017 struct pop::hiber_context_t*                       hiber_context;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HiberContext
        _m018 uint64_t                                           wake_time;                         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WakeTime
        _m019 uint64_t                                           sleep_time;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SleepTime
        _m020 uint64_t                                           wake_first_unattended_time;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WakeFirstUnattendedTime
        _m021 enum nt::system_power_condition_t                  wake_alarm_signaled;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WakeAlarmSignaled
        _m025 sdk::array<u0_wake_alarm_t, 3>                     wake_alarm;                        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .WakeAlarm
        _m026 uint8_t                                            wake_alarm_paused;                 //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WakeAlarmPaused
        _m027 uint64_t                                           wake_alarm_last_time;              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .WakeAlarmLastTime
        _m028 struct nt::system_power_capabilities_t             filtered_capabilities;             //{ +0x00c0    +0x00c8    +0x00c8    +0x00c8    } | .FilteredCapabilities
                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                        
        _m029 uint64_t                                           doze_deferral_start_time;          //{ +0x00c0    +0x00c0    +0x00c0    } | .DozeDeferralStartTime
        _m030 uint64_t                                           watchdog_lock;                     //{ +0x0118    +0x0118    +0x0118    } | .WatchdogLock
        _m031 struct nt::kdpc_t                                  watchdog_dpc;                      //{ +0x0120    +0x0120    +0x0120    } | .WatchdogDpc
        _m032 struct nt::ktimer_t                                watchdog_timer;                    //{ +0x0160    +0x0160    +0x0160    } | .WatchdogTimer
        _m033 uint8_t                                            watchdog_initialized;              //{ +0x01a0    +0x01a0    +0x01a0    } | .WatchdogInitialized
        _m034 enum pop::power_action_watchdog_state_t            watchdog_state;                    //{ +0x01a4    +0x01a4    +0x01a4    } | .WatchdogState
        _m035 uint64_t                                           watchdog_start_time;               //{ +0x01a8    +0x01a8    +0x01a8    } | .WatchdogStartTime
        _m036 struct nt::kthread_t*                              action_worker_thread;              //{ +0x01b0    +0x01b8    +0x01b0    } | .ActionWorkerThread
        _m037 struct nt::kthread_t*                              promote_action_worker_thread;      //{ +0x01b8    +0x01c0    +0x01b8    } | .PromoteActionWorkerThread
        _m038 struct nt::kthread_t*                              unlock_after_sleep_worker_thread;  //{ +0x01c0    +0x01c8    +0x01c0    } | .UnlockAfterSleepWorkerThread
                                                                                                  
        // Windows 11                                                                             
        //                                                                                        
        _m039 uint32_t                                           watchdog_timeout;                  //{ +0x01b0    } | .WatchdogTimeout
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_POP_POWER_ACTION.$", 0x1c8, true, 0x161600fd7e004a71 );                                 
        SDK_DYNAMIC_SIZE( power_action_t );                                                       
    };                                                                                            
};
#include "magic/power_action_t.end.hpp"
SDK_VERIFY( struct pop::power_action_t::u0_wake_alarm_t, 0x18 );
