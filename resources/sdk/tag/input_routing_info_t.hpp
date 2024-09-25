#pragma once
#include <sdkgen/support_library.hpp>
#include "msg_routing_info_t.hpp"

#include "magic/input_routing_info_t.start.hpp"
namespace tag
{
    // [struct tagInputRoutingInfo]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_routing_info_t                              
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 uint32_t                       peer_id;           //{ +0x0000    +0x0000    +0x0000    } | .peerId
        _m01 uint32_t                       item_id;           //{ +0x0004    +0x0004    +0x0004    } | .itemId
        _m02 struct tag::msg_routing_info_t msg_routing_info;  //{ +0x0008    +0x0008    +0x0008    } | .msgRoutingInfo
                                                             
        SDK_MAGIC_PROPERTIES( "tagInputRoutingInfo.$", 0x30, true, 0x7280fb8464239da5 );                 
        SDK_FIXED_SIZE( input_routing_info_t, 0x30 );                 
    };                                                       
};
#include "magic/input_routing_info_t.end.hpp"
SDK_VERIFY( struct tag::input_routing_info_t, 0x30 );
