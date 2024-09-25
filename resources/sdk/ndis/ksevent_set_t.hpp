#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ksevent_set_t.start.hpp"
namespace ndis
{
    struct ksevent_item_t;

    // [struct KSEVENT_SET]
    // => Windows 10 v1607
    //
    struct ksevent_set_t                                     
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 const struct nt::guid_t*           set;           //{ +0x0000    } | .Set
        _m01 uint32_t                           events_count;  //{ +0x0008    } | .EventsCount
        _m02 const struct ndis::ksevent_item_t* event_item;    //{ +0x0010    } | .EventItem
                                                             
        SDK_MAGIC_PROPERTIES( "KSEVENT_SET.$", 0x0, false, 0x53d18a243214e70a );             
        SDK_FIXED_SIZE( ksevent_set_t, 0x18 );               
    };                                                       
};
#include "magic/ksevent_set_t.end.hpp"
SDK_VERIFY( struct ndis::ksevent_set_t, 0x18 );
