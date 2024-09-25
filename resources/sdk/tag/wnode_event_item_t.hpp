#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/wnode_event_item_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_EVENT_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_event_item_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 struct stor::port::wnode_header_t wnode_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
                                                            
        SDK_MAGIC_PROPERTIES( "tagWNODE_EVENT_ITEM.$", 0x30, true, 0xfc88f0f32a08feb1 );             
        SDK_FIXED_SIZE( wnode_event_item_t, 0x30 );             
    };                                                      
};
#include "magic/wnode_event_item_t.end.hpp"
SDK_VERIFY( struct tag::wnode_event_item_t, 0x30 );
