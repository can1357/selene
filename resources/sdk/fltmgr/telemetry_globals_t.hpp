#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/telemetry_globals_t.start.hpp"
namespace fltmgr
{
    // [struct _TELEMETRY_GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct telemetry_globals_t                                                     
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                         
        _m00 struct nt::ktimer_t          telemetry_inventory_timer;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TelemetryInventoryTimer
        _m01 struct nt::kdpc_t            telemetry_inventory_timer_dpc;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TelemetryInventoryTimerDpc
        _m02 struct nt::work_queue_item_t telemetry_inventory_work;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .TelemetryInventoryWork
        _m03 int64_t                      telemetry_performance_frequency;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .TelemetryPerformanceFrequency
        _m04 int32_t                      telemetry_layout_changes_since_last_post;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .TelemetryLayoutChangesSinceLastPost
        _m05 int32_t                      telemetry_generated_guids;                 //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .TelemetryGeneratedGuids
        _m06 int32_t                      telemetry_missed_telemetry_points;         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .TelemetryMissedTelemetryPoints
        _m07 int32_t                      telemetry_missed_generated_guids;          //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .TelemetryMissedGeneratedGuids
        _m08 int32_t                      telemetry_missed_raw_volumes;              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .TelemetryMissedRawVolumes
        _m09 int32_t                      telemetry_legacy_filters_last_count;       //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .TelemetryLegacyFiltersLastCount
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                         
        _m10 int32_t                      telemetry_missed_filter_registrations;     //{ +0x00c0    +0x00c0    +0x00c0    } | .TelemetryMissedFilterRegistrations
        _m11 int32_t                      telemetry_missed_filter_unregistrations;   //{ +0x00c4    +0x00c4    +0x00c4    } | .TelemetryMissedFilterUnregistrations
                                                                                   
        // Windows 11                                                              
        //                                                                         
        _m12 int32_t                      telemetry_missed_filter_attach_on_wcos;    //{ +0x00c8    } | .TelemetryMissedFilterAttachOnWCOS
                                                                                   
        SDK_MAGIC_PROPERTIES( "_TELEMETRY_GLOBALS.$", 0x100, true, 0xdc0ca4e0de5b5c2d );                                         
        SDK_DYNAMIC_SIZE( telemetry_globals_t );                                         
    };                                                                             
};
#include "magic/telemetry_globals_t.end.hpp"
