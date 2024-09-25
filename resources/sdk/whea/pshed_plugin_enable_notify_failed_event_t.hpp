#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"
#include "pshed_plugin_enable_notify_errors_t.hpp"

#include "magic/pshed_plugin_enable_notify_failed_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT]
    // => Windows 11
    //
    struct pshed_plugin_enable_notify_failed_event_t                             
    {                                                                            
        // Windows 11                                                            
        //                                                                       
        _m00 struct whea::event_log_entry_t                 whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 enum whea::pshed_plugin_enable_notify_errors_t enable_error;          //{ +0x0020    } | .EnableError
                                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT.$", 0x0, false, 0xd3a4bbb70e58e023 );                     
        SDK_FIXED_SIZE( pshed_plugin_enable_notify_failed_event_t, 0x24 );                     
    };                                                                           
};
#include "magic/pshed_plugin_enable_notify_failed_event_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_enable_notify_failed_event_t, 0x24 );
