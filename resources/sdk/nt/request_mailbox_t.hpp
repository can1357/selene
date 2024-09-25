#pragma once
#include <sdkgen/support_library.hpp>
#include "krequest_packet_t.hpp"

#include "magic/request_mailbox_t.start.hpp"
namespace nt
{
    struct request_mailbox_t;

    // [struct _REQUEST_MAILBOX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_mailbox_t                                          
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 struct nt::request_mailbox_t* next;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint64_t                      request_summary;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RequestSummary
        _m02 struct nt::krequest_packet_t  request_packet;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestPacket
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                           
        //                                                            
        _m03 volatile int32_t*             node_target_count_addr;      //{ +0x0030    +0x0030    +0x0030    } | .NodeTargetCountAddr
        _m04 volatile int32_t              node_target_count;           //{ +0x0038    +0x0038    +0x0038    } | .NodeTargetCount
                                                                      
        // Windows 11                                                 
        //                                                            
        _m05 volatile int32_t*             sub_node_target_count_addr;  //{ +0x0030    } | .SubNodeTargetCountAddr
        _m06 volatile int32_t              sub_node_target_count;       //{ +0x0038    } | .SubNodeTargetCount
                                                                      
        SDK_MAGIC_PROPERTIES( "_REQUEST_MAILBOX.$", 0x40, true, 0x45fe0c423dd97a99 );                           
        SDK_FIXED_SIZE( request_mailbox_t, 0x40 );                           
    };                                                                
};
#include "magic/request_mailbox_t.end.hpp"
SDK_VERIFY( struct nt::request_mailbox_t, 0x40 );
