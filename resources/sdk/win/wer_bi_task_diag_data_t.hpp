#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/wer_bi_task_diag_data_t.start.hpp"
namespace win
{
    // [struct _WER_BI_TASK_DIAG_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_bi_task_diag_data_t                                                
    {                                                                             
        struct u0_flags_t                                                         
        {                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
            //                                                                    
            _m08 uint8_t cancellation_reason;                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CancellationReason
            _m09 uint3_t host_type;                                                 //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .HostType
            _m10 uint1_t low_power_epoch;                                           //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .LowPowerEpoch
            _m11 uint1_t ac_power;                                                  //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .AcPower
                                                                                  
            SDK_MAGIC_PROPERTIES( "_WER_BI_TASK_DIAG_DATA.Flags.$", 0x4, true, 0xff208e1e4bc60c03 );                                                         
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                         
        };                                                                        
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                        
        _m00 struct win::filetime_t          task_startup_time;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TaskStartupTime
        _m01 struct win::filetime_t          task_timeout_report_submission_time;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TaskTimeoutReportSubmissionTime
        _m02 uint64_t                        task_io_in_bytes_read;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TaskIOInBytesRead
        _m03 uint64_t                        task_io_in_bytes_write;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TaskIOInBytesWrite
        _m04 uint64_t                        system_io_non_low_priority_idle_time;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemIONonLowPriorityIdleTime
        _m05 uint64_t                        system_io_all_priority_idle_time;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SystemIOAllPriorityIdleTime
        _m06 uint64_t                        task_cpu_usage_time;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TaskCPUUsageTime
        _m07 uint64_t                        task_cpu_ready_time;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TaskCPUReadyTime
        _m12 u0_flags_t                      flags;                                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
                                                                                  
        SDK_MAGIC_PROPERTIES( "_WER_BI_TASK_DIAG_DATA.$", 0x48, true, 0xa810ee7f2e64e778 );                                     
        SDK_FIXED_SIZE( wer_bi_task_diag_data_t, 0x48 );                                     
    };                                                                            
};
#include "magic/wer_bi_task_diag_data_t.end.hpp"
SDK_VERIFY( struct win::wer_bi_task_diag_data_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::wer_bi_task_diag_data_t, 0x48 );
