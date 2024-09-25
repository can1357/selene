#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/event_extended_item_related_activityid_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_related_activityid_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 struct nt::guid_t related_activity_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RelatedActivityId
                                                   
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID.$", 0x10, true, 0x707af3ecbee6c94 );                    
        SDK_FIXED_SIZE( event_extended_item_related_activityid_t, 0x10 );                    
    };                                             
};
#include "magic/event_extended_item_related_activityid_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_related_activityid_t, 0x10 );
