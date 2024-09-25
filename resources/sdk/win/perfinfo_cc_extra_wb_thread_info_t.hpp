#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_extra_wb_thread_info_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_EXTRA_WB_THREAD_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_extra_wb_thread_info_t 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t thread_action;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadAction
        _m01 uint32_t active_extra_wb_threads;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ActiveExtraWBThreads
        _m02 uint64_t total_dirty_pages;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalDirtyPages
        _m03 uint64_t dirty_page_threshold;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirtyPageThreshold
        _m04 uint64_t available_pages;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AvailablePages
                                              
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.$", 0x20, true, 0x3e035e225d0f38e );                        
        SDK_FIXED_SIZE( perfinfo_cc_extra_wb_thread_info_t, 0x20 );                        
    };                                        
};
#include "magic/perfinfo_cc_extra_wb_thread_info_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_extra_wb_thread_info_t, 0x20 );
