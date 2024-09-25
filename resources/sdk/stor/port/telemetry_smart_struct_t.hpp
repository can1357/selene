#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/telemetry_smart_struct_t.start.hpp"
namespace stor::port
{
    // [struct _TELEMETRY_SMART_STRUCT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct telemetry_smart_struct_t                 
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint16_t start_stop_cycle_count;         //{ +0x0000    +0x0000    +0x0000    } | .StartStopCycleCount
        _m01 uint32_t power_on_hours;                 //{ +0x0004    +0x0004    +0x0004    } | .PowerOnHours
        _m02 uint16_t load_unload_cycles;             //{ +0x0008    +0x0008    +0x0008    } | .LoadUnloadCycles
        _m03 uint8_t  temperature;                    //{ +0x000a    +0x000a    +0x000a    } | .Temperature
        _m04 uint64_t reallocated_sectors_count;      //{ +0x0010    +0x0010    +0x0010    } | .ReallocatedSectorsCount
        _m05 uint64_t spin_retry_count;               //{ +0x0018    +0x0018    +0x0018    } | .SpinRetryCount
        _m06 uint64_t runtime_bad_block;              //{ +0x0020    +0x0020    +0x0020    } | .RuntimeBadBlock
        _m07 uint64_t end_to_end_error;               //{ +0x0028    +0x0028    +0x0028    } | .EndToEndError
        _m08 uint64_t reported_uncorrectable_errors;  //{ +0x0030    +0x0030    +0x0030    } | .ReportedUncorrectableErrors
        _m09 uint64_t command_timeout;                //{ +0x0038    +0x0038    +0x0038    } | .CommandTimeout
        _m10 uint64_t reallocation_event_count;       //{ +0x0040    +0x0040    +0x0040    } | .ReallocationEventCount
        _m11 uint64_t current_pending_sector_count;   //{ +0x0048    +0x0048    +0x0048    } | .CurrentPendingSectorCount
        _m12 uint64_t uncorrectable_sector_count;     //{ +0x0050    +0x0050    +0x0050    } | .UncorrectableSectorCount
        _m13 uint64_t soft_read_error_rate;           //{ +0x0058    +0x0058    +0x0058    } | .SoftReadErrorRate
        _m14 uint64_t drive_life_protection_status;   //{ +0x0060    +0x0060    +0x0060    } | .DriveLifeProtectionStatus
        _m15 uint64_t media_wearout_indicator;        //{ +0x0068    +0x0068    +0x0068    } | .MediaWearoutIndicator
                                                    
        SDK_MAGIC_PROPERTIES( "_TELEMETRY_SMART_STRUCT.$", 0x70, true, 0xdf20753aa949e0b8 );                              
        SDK_FIXED_SIZE( telemetry_smart_struct_t, 0x70 );                              
    };                                              
};
#include "magic/telemetry_smart_struct_t.end.hpp"
SDK_VERIFY( struct stor::port::telemetry_smart_struct_t, 0x70 );
