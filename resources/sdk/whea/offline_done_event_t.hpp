#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/offline_done_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_OFFLINE_DONE_EVENT]
    // => Windows 11
    //
    struct offline_done_event_t                                  
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint64_t                       address;               //{ +0x0020    } | .Address
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_OFFLINE_DONE_EVENT.$", 0x0, false, 0xf1d54187e26bed9b );                     
        SDK_FIXED_SIZE( offline_done_event_t, 0x28 );                     
    };                                                           
};
#include "magic/offline_done_event_t.end.hpp"
SDK_VERIFY( struct whea::offline_done_event_t, 0x28 );
