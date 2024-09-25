#pragma once
#include <sdkgen/support_library.hpp>
#include "k_spin_lock_t.hpp"

#include "magic/event_log_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_EVENT_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_log_t                
    {                                 
        using lock_t = sdk::variant<uint64_t, class ndis::k_spin_lock_t>;                
                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t last_event_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LastEventTime
        _m01 uint32_t last_used_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastUsedEntry
        _m02 uint32_t num_entries;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumEntries
        _m03 lock_t   lock;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
        _m04 uint16_t flags;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m05 uint16_t entry_size;       //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .EntrySize
                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_EVENT_LOG.$", 0x20, true, 0x6e51099797352f03 );                
        SDK_FIXED_SIZE( event_log_t, 0x20 );                
    };                                
};
#include "magic/event_log_t.end.hpp"
SDK_VERIFY( struct ndis::event_log_t, 0x20 );
