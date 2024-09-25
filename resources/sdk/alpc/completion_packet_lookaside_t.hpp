#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"
#include "completion_packet_lookaside_entry_t.hpp"

namespace nt { struct kqueue_t; }

#include "magic/completion_packet_lookaside_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_COMPLETION_PACKET_LOOKASIDE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_packet_lookaside_t                                                   
    {                                                                                      
        using entry_t = sdk::array<struct alpc::completion_packet_lookaside_entry_t, 1>;                                    
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                 
        _m00 uint64_t                                  lock;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t                                  size;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint32_t                                  active_count;                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ActiveCount
        _m03 uint32_t                                  pending_null_count;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PendingNullCount
        _m04 uint32_t                                  pending_check_completion_list_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PendingCheckCompletionListCount
        _m05 uint32_t                                  pending_delete;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PendingDelete
        _m06 struct nt::single_list_entry_t            free_list_head;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeListHead
        _m07 sdk::variant<void*, struct nt::kqueue_t*> completion_port;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CompletionPort
        _m08 void*                                     completion_key;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CompletionKey
        _m09 entry_t                                   entry;                                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Entry
                                                                                           
        SDK_MAGIC_PROPERTIES( "_ALPC_COMPLETION_PACKET_LOOKASIDE.$", 0x50, true, 0xb5edd1910801ba09 );                                    
        SDK_FIXED_SIZE( completion_packet_lookaside_t, 0x50 );                                    
    };                                                                                     
};
#include "magic/completion_packet_lookaside_t.end.hpp"
SDK_VERIFY( struct alpc::completion_packet_lookaside_t, 0x50 );
