#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/telemetry_unit_extension_t.start.hpp"
namespace stor::port
{
    // [struct _TELEMETRY_UNIT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct telemetry_unit_extension_t                                                          
    {                                                                                          
        struct u0_flags_t                                                                      
        {                                                                                      
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                      
            //                                                                                 
            _m01 uint1_t device_health_events_logged;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceHealthEventsLogged
            _m02 uint1_t failed_first_smart_command;                                             //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .FailedFirstSMARTCommand
            _m03 uint1_t failed_first_device_statistics_log_command;                             //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .FailedFirstDeviceStatisticsLogCommand
            _m04 uint1_t failed_first_nvme_cloud_ssd_command;                                    //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .FailedFirstNvmeCloudSSDCommand
            _m05 uint1_t smart_predict_failure;                                                  //{ +0x0000@4  +0x0000@5  +0x0000@4  } | .SmartPredictFailure
                                                                                               
            // Windows 11                                                                      
            //                                                                                 
            _m06 uint1_t failed_first_get_supported_log_pages_command;                           //{ +0x0000@4  } | .FailedFirstGetSupportedLogPagesCommand
                                                                                               
            SDK_MAGIC_PROPERTIES( "_TELEMETRY_UNIT_EXTENSION.Flags.$", 0x4, true, 0x371c44047273b5cc );                                                                      
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                      
        };                                                                                     
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                                     
        _m00 uint8_t                                                  nvme_critical_warning;     //{ +0x0002    +0x0004    +0x0004    +0x0004    } | .NvmeCriticalWarning
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m07 u0_flags_t                                               flags;                     //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m08 uint8_t                                                  device_health_poll_count;  //{ +0x0005    +0x0005    +0x0005    } | .DeviceHealthPollCount
                                                                                               
        // Windows 10 v1607                                                                    
        //                                                                                     
        _m09 uint8_t                                                  critical_events_logged;    //{ +0x0000    } | .CriticalEventsLogged
        _m10 uint8_t                                                  smart_predict_failure;     //{ +0x0001    } | .SmartPredictFailure
                                                                                               
        SDK_MAGIC_PROPERTIES( "_TELEMETRY_UNIT_EXTENSION.$", 0x8, true, 0xb150569cefb693e5 );                         
        SDK_DYNAMIC_SIZE( telemetry_unit_extension_t );                                        
    };                                                                                         
};
#include "magic/telemetry_unit_extension_t.end.hpp"
SDK_VERIFY( struct stor::port::telemetry_unit_extension_t::u0_flags_t, 0x4 );
