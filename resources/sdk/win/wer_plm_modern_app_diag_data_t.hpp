#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/wer_plm_modern_app_diag_data_t.start.hpp"
namespace win
{
    // [struct _WER_PLM_MODERN_APP_DIAG_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_plm_modern_app_diag_data_t                                      
    {                                                                          
        struct u0_flags_t                                                      
        {                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                 
            _m10 uint1_t app_halted;                                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AppHalted
                                                                               
            SDK_MAGIC_PROPERTIES( "_WER_PLM_MODERN_APP_DIAG_DATA.Flags.$", 0x4, true, 0x94cc0cbdcc1736d3 );                                                      
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                      
        };                                                                     
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                     
        _m00 struct win::filetime_t app_startup_time;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AppStartupTime
        _m01 struct win::filetime_t app_timeout_report_submission_time;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AppTimeoutReportSubmissionTime
        _m02 uint64_t               app_io_in_bytes_read;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AppIOInBytesRead
        _m03 uint64_t               app_io_in_bytes_write;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AppIOInBytesWrite
        _m04 uint64_t               system_io_non_low_priority_idle_time_in_ms;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemIONonLowPriorityIdleTimeInMs
        _m05 uint64_t               system_io_all_priority_idle_time_in_ms;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SystemIOAllPriorityIdleTimeInMs
        _m06 uint64_t               app_cpu_usage_time_in_ms;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AppCPUUsageTimeInMs
        _m07 uint64_t               app_cpu_ready_time_in_ms;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AppCPUReadyTimeInMs
        _m08 uint32_t               app_throttled_duration_in_ms;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AppThrottledDurationInMs
        _m09 sdk::array<char, 128>  app_timeout_description;                     //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .AppTimeoutDescription
        _m11 u0_flags_t             flags;                                       //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .Flags
                                                                               
        SDK_MAGIC_PROPERTIES( "_WER_PLM_MODERN_APP_DIAG_DATA.$", 0xc8, true, 0x56af4674e76dabb6 );                                           
        SDK_FIXED_SIZE( wer_plm_modern_app_diag_data_t, 0xc8 );                                           
    };                                                                         
};
#include "magic/wer_plm_modern_app_diag_data_t.end.hpp"
SDK_VERIFY( struct win::wer_plm_modern_app_diag_data_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::wer_plm_modern_app_diag_data_t, 0xc8 );
