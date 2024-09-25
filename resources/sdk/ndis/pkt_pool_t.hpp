#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkt_pool_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PKT_POOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkt_pool_t                                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                            
        _m00 uint32_t         tag;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 uint16_t         packet_length;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PacketLength
        _m02 uint16_t         pkts_per_block;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .PktsPerBlock
        _m03 uint16_t         max_blocks;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxBlocks
        _m04 uint16_t         stack_size;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .StackSize
        _m05 int32_t          blocks_allocated;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BlocksAllocated
        _m06 uint32_t         protocol_id;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProtocolId
        _m07 uint32_t         block_size;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BlockSize
        _m08 void*            allocator;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Allocator
        _m09 uint64_t         lock;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Lock
        _m10 nt::list_entry_t free_blocks;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeBlocks
        _m11 nt::list_entry_t used_blocks;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UsedBlocks
        _m12 nt::list_entry_t aging_blocks;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AgingBlocks
        _m13 nt::list_entry_t global_packet_pool_list;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GlobalPacketPoolList
        _m14 int64_t          next_scavenge_tick;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NextScavengeTick
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PKT_POOL.$", 0x70, true, 0x5abaf945860177ed );                        
        SDK_FIXED_SIZE( pkt_pool_t, 0x70 );                        
    };                                                
};
#include "magic/pkt_pool_t.end.hpp"
SDK_VERIFY( struct ndis::pkt_pool_t, 0x70 );
