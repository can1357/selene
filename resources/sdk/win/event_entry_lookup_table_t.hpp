#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_entry_lookup_table_t.start.hpp"
namespace win
{
    struct event_entry_t;

    // [struct EVENT_ENTRY_LOOKUP_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_entry_lookup_table_t                                        
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 sdk::array<struct win::event_entry_t*, 32> entry_buckets;         //{ +0x0000    +0x0000    +0x0000    } | .EntryBuckets
        _m01 uint32_t                                   num_event_entries;     //{ +0x0100    +0x0100    +0x0100    } | .NumEventEntries
        _m02 uint32_t                                   next_bucket_to_flush;  //{ +0x0104    +0x0104    +0x0104    } | .NextBucketToFlush
                                                                             
        SDK_MAGIC_PROPERTIES( "EVENT_ENTRY_LOOKUP_TABLE.$", 0x108, true, 0x3109551922642d3d );                     
        SDK_FIXED_SIZE( event_entry_lookup_table_t, 0x108 );                     
    };                                                                       
};
#include "magic/event_entry_lookup_table_t.end.hpp"
SDK_VERIFY( struct win::event_entry_lookup_table_t, 0x108 );
