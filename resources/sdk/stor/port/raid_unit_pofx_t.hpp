#pragma once
#include <sdkgen/support_library.hpp>

namespace ex { struct timer_t;    }
namespace nt { struct irp_t;      }
namespace nt { struct pohandle_t; }

#include "magic/raid_unit_pofx_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_UNIT_POFX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_pofx_t                                                                  
    {                                                                                        
        union u0_interlocked_flags_t                                                         
        {                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                   
            //                                                                               
            _m26 uint1_t  active_for_maintenance_time;                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ActiveForMaintenanceTime
            _m27 uint32_t as_ulong;                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                                                             
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_POFX.InterlockedFlags.$", 0x4, true, 0xcccefcd83bae17ab );                                                                   
            SDK_FIXED_SIZE( u0_interlocked_flags_t, 0x4 );                                                                   
        };                                                                                   
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                   
        _m000 struct nt::pohandle_t*                  po_handle;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PoHandle
        _m001 void*                                   po_fx_device;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoFxDevice
        _m002 uint32_t                                current_f_state;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentFState
        _m003 uint32_t                                d3_idle_timeout;                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .D3IdleTimeout
        _m004 uint32_t                                min_d3_idle_timeout;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinD3IdleTimeout
        _m005 uint32_t                                current_d3_idle_timeout;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CurrentD3IdleTimeout
        _m006 uint1_t                                 wake_capable;                            //{ +0x0020@0  +0x0020@0  +0x0020@0  +0x0020@0  } | .WakeCapable
        _m007 uint1_t                                 active;                                  //{ +0x0020@1  +0x0020@1  +0x0020@1  +0x0020@1  } | .Active
        _m008 uint1_t                                 miniport_opted_in;                       //{ +0x0020@2  +0x0020@2  +0x0020@2  +0x0020@2  } | .MiniportOptedIn
        _m009 uint1_t                                 device_power_required;                   //{ +0x0020@3  +0x0020@3  +0x0020@3  +0x0020@3  } | .DevicePowerRequired
        _m010 uint1_t                                 set_powerup_reason;                      //{ +0x0020@4  +0x0020@4  +0x0020@4  +0x0020@4  } | .SetPowerupReason
        _m011 uint1_t                                 dpnr_in_cs;                              //{ +0x0020@5  +0x0020@5  +0x0020@5  +0x0020@5  } | .DPNRInCS
        _m012 uint1_t                                 f1_in_cs;                                //{ +0x0020@6  +0x0020@6  +0x0020@6  +0x0020@6  } | .F1InCS
        _m013 uint1_t                                 adaptive_d3_idle_timeout_enabled;        //{ +0x0020@7  +0x0020@8  +0x0020@8  +0x0020@8  } | .AdaptiveD3IdleTimeoutEnabled
        _m014 uint1_t                                 io_coalescing_on;                        //{ +0x0020@8  +0x0020@10 +0x0020@10 +0x0020@10 } | .IoCoalescingOn
        _m015 uint1_t                                 on_battery_power;                        //{ +0x0020@9  +0x0020@11 +0x0020@11 +0x0020@11 } | .OnBatteryPower
        _m016 uint32_t                                wait_wake_active_reference;              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .WaitWakeActiveReference
        _m017 struct nt::irp_t*                       wait_wake_irp;                           //{ +0x0040    +0x0040    +0x0048    +0x0040    } | .WaitWakeIrp
        _m018 nt::list_entry_t                        active_pending_request_queue;            //{ +0x0048    +0x0048    +0x0050    +0x0048    } | .ActivePendingRequestQueue
        _m019 uint64_t                                active_lock;                             //{ +0x0058    +0x0058    +0x0060    +0x0058    } | .ActiveLock
        _m020 void*                                   io_coalescing_registration;              //{ +0x0068    +0x0060    +0x0068    +0x0060    } | .IoCoalescingRegistration
        _m021 void*                                   ac_dc_registration;                      //{ +0x0070    +0x0068    +0x0070    +0x0068    } | .AcDcRegistration
        _m022 struct ex::timer_t*                     power_cycle_check_timer;                 //{ +0x0078    +0x0070    +0x0078    +0x0070    } | .PowerCycleCheckTimer
        _m023 struct ex::timer_t*                     maintenance_timer;                       //{ +0x0080    +0x0078    +0x0080    +0x0078    } | .MaintenanceTimer
        _m024 int64_t                                 previous_maintenance_time;               //{ +0x0088    +0x0080    +0x0088    +0x0080    } | .PreviousMaintenanceTime
        _m025 uint32_t                                active_refs_during_maintenance_time;     //{ +0x0090    +0x0088    +0x0090    +0x0088    } | .ActiveRefsDuringMaintenanceTime
        _m028 u0_interlocked_flags_t                  interlocked_flags;                       //{ +0x0094    +0x008c    +0x0094    +0x008c    } | .InterlockedFlags
                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                   
        _m029 uint1_t                                 d_fx_power_down_in_cs;                   //{ +0x0020@7  +0x0020@7  +0x0020@7  } | .DFxPowerDownInCS
        _m030 uint1_t                                 adaptive_d3_idle_timeout_engaged;        //{ +0x0020@9  +0x0020@9  +0x0020@9  } | .AdaptiveD3IdleTimeoutEngaged
        _m031 uint64_t                                adaptive_d3_idle_timeout_engaged_count;  //{ +0x0028    +0x0030    +0x0028    } | .AdaptiveD3IdleTimeoutEngagedCount
        _m032 uint64_t                                adaptive_d3_idle_timeout_checked_count;  //{ +0x0030    +0x0038    +0x0030    } | .AdaptiveD3IdleTimeoutCheckedCount
        _m033 int64_t                                 last_idle_timestamp;                     //{ +0x0038    +0x0040    +0x0038    } | .LastIdleTimestamp
                                                                                             
        // Windows 10 v1607, Windows 11                                                      
        //                                                                                   
        _m034 uint64_t                                miniport_active_references;              //{ +0x0030    +0x0028    } | .MiniportActiveReferences
                                                                                             
        // Windows 10 v1607                                                                  
        //                                                                                   
        _m035 uint64_t                                ioctl_active_references;                 //{ +0x0028    } | .IoctlActiveReferences
        _m036 volatile int32_t                        pending_requests;                        //{ +0x0038    } | .PendingRequests
        _m037 uint64_t                                active_references;                       //{ +0x0060    } | .ActiveReferences
                                                                                             
        // Windows 11                                                                        
        //                                                                                   
        _m038 uint1_t                                 f1_for_placeholder_mode;                 //{ +0x0020@12 } | .F1ForPlaceholderMode
        _m039 uint64_t                                miniport_active_reference_acquires;      //{ +0x0098    } | .MiniportActiveReferenceAcquires
        _m040 uint64_t                                miniport_active_reference_releases;      //{ +0x00a0    } | .MiniportActiveReferenceReleases
                                                                                             
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_POFX.$", 0x90, true, 0x4e8e792ff4d97bc2 );                                       
        SDK_DYNAMIC_SIZE( raid_unit_pofx_t );                                                
    };                                                                                       
};
#include "magic/raid_unit_pofx_t.end.hpp"
SDK_VERIFY( union stor::port::raid_unit_pofx_t::u0_interlocked_flags_t, 0x4 );
