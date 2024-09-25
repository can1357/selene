#pragma once
#include <sdkgen/support_library.hpp>
#include "rw_lock_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/ktimer2_t.hpp"
#include "policy_device_t.hpp"
#include "../nt/thermal_policy_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "thermal_telemetry_tracker_t.hpp"
#include "../power/policy_device_type_t.hpp"
#include "../nt/thermal_information_ex_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/thermal_zone_t.start.hpp"
namespace pop
{
    // [struct _POP_THERMAL_ZONE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_zone_t                                                     
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m000 struct pop::policy_device_t             policy_device;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PolicyDevice
        _m001 nt::list_entry_t                        link;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m002 enum power::policy_device_type_t        device_type;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceType
        _m003 void*                                   notification;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Notification
        _m004 nt::unicode_view                        name;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Name
        _m005 struct nt::device_object_t*             device;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Device
        _m006 struct nt::irp_t*                       irp;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Irp
        _m007 uint8_t                                 state;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .State
        _m008 uint8_t                                 flags;                    //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .Flags
        _m009 uint8_t                                 removing;                 //{ +0x0042    +0x0042    +0x0042    +0x0042    } | .Removing
        _m010 uint8_t                                 mode;                     //{ +0x0043    +0x0043    +0x0043    +0x0043    } | .Mode
        _m011 uint8_t                                 pending_mode;             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .PendingMode
        _m012 uint8_t                                 active_point;             //{ +0x0045    +0x0045    +0x0045    +0x0045    } | .ActivePoint
        _m013 uint8_t                                 pending_active_point;     //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .PendingActivePoint
        _m014 uint8_t                                 critical;                 //{ +0x0047    +0x0047    +0x0047    +0x0047    } | .Critical
        _m015 uint8_t                                 thermal_standby;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ThermalStandby
        _m016 uint8_t                                 over_throttled;           //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .OverThrottled
        _m017 int32_t                                 high_precision_throttle;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .HighPrecisionThrottle
        _m018 int32_t                                 throttle;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Throttle
        _m019 int32_t                                 pending_throttle;         //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .PendingThrottle
        _m020 uint32_t                                throttle_reasons;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ThrottleReasons
        _m021 uint32_t                                sample_rate;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SampleRate
        _m022 uint32_t                                last_temp;                //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .LastTemp
        _m023 struct nt::thermal_information_ex_t     info;                     //{ +0x00f0    +0x0070    +0x0070    +0x0070    } | .Info
        _m024 struct nt::thermal_policy_t             policy;                   //{ +0x0150    +0x00cc    +0x00cc    +0x00cc    } | .Policy
        _m025 uint8_t                                 policy_driver;            //{ +0x0168    +0x00e4    +0x00e4    +0x00e4    } | .PolicyDriver
        _m026 uint64_t                                last_active_start_time;   //{ +0x0170    +0x00f8    +0x00f8    +0x00f8    } | .LastActiveStartTime
        _m027 uint64_t                                last_passive_start_time;  //{ +0x0178    +0x0100    +0x0100    +0x0100    } | .LastPassiveStartTime
        _m028 struct nt::work_queue_item_t            work_item;                //{ +0x0180    +0x0108    +0x0108    +0x0108    } | .WorkItem
        _m029 struct pop::rw_lock_t                   lock;                     //{ +0x01a0    +0x01b0    +0x01b0    +0x01b0    } | .Lock
        _m030 struct nt::kevent_t                     zone_stopped;             //{ +0x01b0    +0x01c0    +0x01c0    +0x01c0    } | .ZoneStopped
        _m031 struct nt::kevent_t                     temperature_updated;      //{ +0x01c8    +0x01d8    +0x01d8    +0x01d8    } | .TemperatureUpdated
        _m032 uint32_t                                instance_id;              //{ +0x01e0    +0x01f0    +0x01f0    +0x01f0    } | .InstanceId
        _m033 struct pop::thermal_telemetry_tracker_t telemetry_tracker;        //{ +0x01e8    +0x01f8    +0x01f8    +0x01f8    } | .TelemetryTracker
        _m034 nt::unicode_view                        description;              //{ +0x0348    +0x0410    +0x0410    +0x0410    } | .Description
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m035 uint64_t                                last_passive_time;        //{ +0x0060    +0x0060    +0x0060    } | .LastPassiveTime
        _m036 uint32_t                                polling_rate;             //{ +0x00e8    +0x00e8    +0x00e8    } | .PollingRate
        _m037 uint64_t                                last_temperature_time;    //{ +0x00f0    +0x00f0    +0x00f0    } | .LastTemperatureTime
        _m038 struct nt::ktimer2_t                    zone_update_timer;        //{ +0x0128    +0x0128    +0x0128    } | .ZoneUpdateTimer
                                                                              
        // Windows 10 v1607                                                   
        //                                                                    
        _m039 uint64_t                                last_time;                //{ +0x0060    } | .LastTime
        _m040 struct nt::ktimer_t                     passive_timer;            //{ +0x0070    } | .PassiveTimer
        _m041 struct nt::kdpc_t                       passive_dpc;              //{ +0x00b0    } | .PassiveDpc
        _m042 int64_t                                 info_last_update_time;    //{ +0x0148    } | .InfoLastUpdateTime
                                                                              
        SDK_MAGIC_PROPERTIES( "_POP_THERMAL_ZONE.$", 0x420, true, 0x263e33844f231ccb );                        
        SDK_DYNAMIC_SIZE( thermal_zone_t );                                   
    };                                                                        
};
#include "magic/thermal_zone_t.end.hpp"
