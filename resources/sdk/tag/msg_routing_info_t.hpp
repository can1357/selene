#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/msg_routing_info_t.start.hpp"
namespace tag
{
    // [struct tagMsgRoutingInfo]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msg_routing_info_t                    
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 uint32_t          system_process_id;  //{ +0x0000    +0x0000    +0x0000    } | .SystemProcessID
        _m01 uint32_t          system_thread_id;   //{ +0x0004    +0x0004    +0x0004    } | .SystemThreadID
        _m02 uint64_t          identity;           //{ +0x0008    +0x0008    +0x0008    } | .Identity
        _m03 uint64_t          item_id;            //{ +0x0010    +0x0010    +0x0010    } | .ItemID
        _m04 struct nt::guid_t connection_guid;    //{ +0x0018    +0x0018    +0x0018    } | .ConnectionGuid
                                                 
        SDK_MAGIC_PROPERTIES( "tagMsgRoutingInfo.$", 0x28, true, 0x1003065b7a479da6 );                  
        SDK_FIXED_SIZE( msg_routing_info_t, 0x28 );                  
    };                                           
};
#include "magic/msg_routing_info_t.end.hpp"
SDK_VERIFY( struct tag::msg_routing_info_t, 0x28 );
