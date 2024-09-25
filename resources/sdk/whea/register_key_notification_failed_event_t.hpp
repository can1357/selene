#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/register_key_notification_failed_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_REGISTER_KEY_NOTIFICATION_FAILED_EVENT]
    // => Windows 11
    //
    struct register_key_notification_failed_event_t              
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_REGISTER_KEY_NOTIFICATION_FAILED_EVENT.$", 0x0, false, 0x57227cf99402a8c4 );                     
        SDK_FIXED_SIZE( register_key_notification_failed_event_t, 0x20 );                     
    };                                                           
};
#include "magic/register_key_notification_failed_event_t.end.hpp"
SDK_VERIFY( struct whea::register_key_notification_failed_event_t, 0x20 );
