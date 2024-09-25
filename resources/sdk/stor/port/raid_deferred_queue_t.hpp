#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kdpc_t.hpp"
#include "../../nt/slist_header_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/raid_deferred_queue_t.start.hpp"
namespace stor::port
{
    struct raid_deferred_header_t;

    // [struct _RAID_DEFERRED_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_deferred_queue_t                            
    {                                                       
        using process_deferred_item_t = sdk::function<void(struct nt::device_object_t*, struct stor::port::raid_deferred_header_t*)>*;                      
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint16_t                 depth;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Depth
        _m01 uint16_t                 item_size;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ItemSize
        _m02 struct nt::kdpc_t        dpc;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Dpc
        _m03 union nt::slist_header_t free_list;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FreeList
        _m04 union nt::slist_header_t running_list;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RunningList
        _m05 process_deferred_item_t  process_deferred_item;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ProcessDeferredItem
                                                            
        SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_QUEUE.$", 0x80, true, 0xa3645c53a87f3efa );                      
        SDK_FIXED_SIZE( raid_deferred_queue_t, 0x80 );                      
    };                                                      
};
#include "magic/raid_deferred_queue_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_deferred_queue_t, 0x80 );
