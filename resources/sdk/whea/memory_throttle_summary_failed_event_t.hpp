#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/memory_throttle_summary_failed_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT]
    // => Windows 11
    //
    struct memory_throttle_summary_failed_event_t                
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 int32_t                        status;                //{ +0x0020    } | .Status
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT.$", 0x0, false, 0xb56b3a8e9d1d31b4 );                     
        SDK_FIXED_SIZE( memory_throttle_summary_failed_event_t, 0x24 );                     
    };                                                           
};
#include "magic/memory_throttle_summary_failed_event_t.end.hpp"
SDK_VERIFY( struct whea::memory_throttle_summary_failed_event_t, 0x24 );
