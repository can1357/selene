#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/protocol_offload_block_list_t.start.hpp"
namespace ndis
{
    struct offload_handle_t;
    struct net_buffer_list_t;
    struct protocol_offload_block_list_t;

    // [struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_offload_block_list_t                                       
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 struct ndis::object_header_t                header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::protocol_offload_block_list_t* next_block;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextBlock
        _m02 struct ndis::protocol_offload_block_list_t* dependent_block_list;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DependentBlockList
        _m03 int32_t                                     status;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
        _m04 sdk::array<void*, 3>                        ndis_reserved;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdisReserved
        _m05 struct ndis::offload_handle_t*              offload_handle;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OffloadHandle
        _m06 sdk::array<void*, 2>                        protocol_reserved;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProtocolReserved
        _m07 sdk::array<void*, 2>                        miniport_reserved;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MiniportReserved
        _m08 sdk::array<void*, 2>                        im_reserved;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ImReserved
        _m09 sdk::array<void*, 2>                        scratch;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Scratch
        _m10 void*                                       source_handle;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .SourceHandle
        _m11 uint32_t                                    port_number;            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PortNumber
        _m12 struct ndis::net_buffer_list_t*             net_buffer_list_chain;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NetBufferListChain
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.$", 0x98, true, 0x77f163b2246b6644 );                      
        SDK_FIXED_SIZE( protocol_offload_block_list_t, 0x98 );                      
    };                                                                         
};
#include "magic/protocol_offload_block_list_t.end.hpp"
SDK_VERIFY( struct ndis::protocol_offload_block_list_t, 0x98 );
