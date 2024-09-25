#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

namespace io { struct mini_completion_packet_user_t; }

#include "magic/completion_packet_lookaside_entry_t.start.hpp"
namespace alpc
{
    struct completion_packet_lookaside_t;

    // [struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_packet_lookaside_entry_t                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                          
        _m00 struct nt::single_list_entry_t              list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct io::mini_completion_packet_user_t*   packet;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Packet
        _m02 struct alpc::completion_packet_lookaside_t* lookaside;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lookaside
                                                                    
        SDK_MAGIC_PROPERTIES( "_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.$", 0x18, true, 0xd0ab309146acf495 );           
        SDK_FIXED_SIZE( completion_packet_lookaside_entry_t, 0x18 );           
    };                                                              
};
#include "magic/completion_packet_lookaside_entry_t.end.hpp"
SDK_VERIFY( struct alpc::completion_packet_lookaside_entry_t, 0x18 );
