#pragma once
#include <sdkgen/support_library.hpp>
#include "raid_telemetry_error_entry_t.hpp"

#include "magic/raid_telemetry_sampled_error_log_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_telemetry_sampled_error_log_t                                                             
    {                                                                                                     
        using sampled_errors_t = sdk::array<struct stor::port::raid_telemetry_error_entry_t, 10>;                                             
                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                                
        _m00 uint32_t                                        total_errors;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalErrors
        _m01 struct stor::port::raid_telemetry_error_entry_t last_error;                                    //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .LastError
        _m02 sampled_errors_t                                sampled_errors;                                //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .SampledErrors
                                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                                
        _m03 uint32_t                                        total_read_write_errors;                       //{ +0x0004    +0x0004    +0x0004    } | .TotalReadWriteErrors
        _m04 uint32_t                                        total_st_rtl_impending_device_failure_errors;  //{ +0x0008    +0x0008    +0x0008    } | .TotalStRtlImpendingDeviceFailureErrors
        _m05 uint32_t                                        total_st_rtl_total_device_failure_errors;      //{ +0x000c    +0x000c    +0x000c    } | .TotalStRtlTotalDeviceFailureErrors
                                                                                                          
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.$", 0x1c8, true, 0x29f83ba1bb0e42e7 );                                             
        SDK_DYNAMIC_SIZE( raid_telemetry_sampled_error_log_t );                                             
    };                                                                                                    
};
#include "magic/raid_telemetry_sampled_error_log_t.end.hpp"
