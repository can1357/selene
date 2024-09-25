#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/event_extended_item_instance_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_instance_t         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 uint32_t          instance_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InstanceId
        _m01 uint32_t          parent_instance_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ParentInstanceId
        _m02 struct nt::guid_t parent_guid;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ParentGuid
                                                  
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_INSTANCE.$", 0x18, true, 0x9b2df2b0725f2a54 );                   
        SDK_FIXED_SIZE( event_extended_item_instance_t, 0x18 );                   
    };                                            
};
#include "magic/event_extended_item_instance_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_instance_t, 0x18 );
