#pragma once
#include <sdkgen/support_library.hpp>
#include "throttle_type_t.hpp"
#include "event_log_entry_t.hpp"

#include "magic/throttle_registry_corrupt_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT]
    // => Windows 11
    //
    struct throttle_registry_corrupt_event_t                     
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 enum whea::throttle_type_t     throttle_type;         //{ +0x0020    } | .ThrottleType
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT.$", 0x0, false, 0xc235fbc44a0de220 );                     
        SDK_FIXED_SIZE( throttle_registry_corrupt_event_t, 0x24 );                     
    };                                                           
};
#include "magic/throttle_registry_corrupt_event_t.end.hpp"
SDK_VERIFY( struct whea::throttle_registry_corrupt_event_t, 0x24 );
