#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/throttle_memory_add_or_remove_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT]
    // => Windows 11
    //
    struct throttle_memory_add_or_remove_event_t                 
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       socket_id;             //{ +0x0020    } | .SocketId
        _m02 uint32_t                       channel_id;            //{ +0x0024    } | .ChannelId
        _m03 uint32_t                       dimm_slot;             //{ +0x0028    } | .DimmSlot
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT.$", 0x0, false, 0xb7fca787a01dab5f );                     
        SDK_FIXED_SIZE( throttle_memory_add_or_remove_event_t, 0x2c );                     
    };                                                           
};
#include "magic/throttle_memory_add_or_remove_event_t.end.hpp"
SDK_VERIFY( struct whea::throttle_memory_add_or_remove_event_t, 0x2c );
