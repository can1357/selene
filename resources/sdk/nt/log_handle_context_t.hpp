#pragma once
#include <sdkgen/support_library.hpp>
#include "dirty_page_statistics_t.hpp"
#include "dirty_page_thresholds_t.hpp"

#include "magic/log_handle_context_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _LOG_HANDLE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_handle_context_t                                                     
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                          
        _m00 void*                                  log_handle;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogHandle
        _m01 sdk::function<void(void*, int64_t)>*   flush_to_lsn_routine;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FlushToLsnRoutine
        _m02 sdk::function<void(void*, uint16_t*)>* query_log_handle_info_routine;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueryLogHandleInfoRoutine
        _m03 struct nt::dirty_page_statistics_t     dirty_page_statistics;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DirtyPageStatistics
        _m04 struct nt::dirty_page_thresholds_t     dirty_page_thresholds;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DirtyPageThresholds
        _m05 uint32_t                               additional_pages_to_write;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AdditionalPagesToWrite
        _m06 uint32_t                               cc_lw_scan_dp_threshold;          //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .CcLWScanDPThreshold
        _m07 int64_t                                largest_lsn_for_current_lw_scan;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LargestLsnForCurrentLWScan
        _m08 struct nt::file_object_t*              related_file_object;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .RelatedFileObject
        _m09 uint64_t                               largest_lsn_file_object_key;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LargestLsnFileObjectKey
        _m10 int64_t                                last_lw_time_stamp;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .LastLWTimeStamp
        _m11 uint32_t                               flags;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Flags
                                                                                    
        SDK_MAGIC_PROPERTIES( "_LOG_HANDLE_CONTEXT.$", 0x98, true, 0x8c5f3ef2d231aa1 );                                
        SDK_FIXED_SIZE( log_handle_context_t, 0x98 );                                
    };                                                                              
};
#include "magic/log_handle_context_t.end.hpp"
SDK_VERIFY( struct nt::log_handle_context_t, 0x98 );
