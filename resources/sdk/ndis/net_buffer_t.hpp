#pragma once
#include <sdkgen/support_library.hpp>
#include "net_buffer_header_t.hpp"
#include "../nt/slist_header_t.hpp"

namespace nt { struct mdl_t;                 }
namespace nt { struct scatter_gather_list_t; }

#include "magic/net_buffer_t.start.hpp"
namespace ndis
{
    struct net_buffer_t;
    struct net_buffer_shared_memory_t;

    // [struct _NET_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_t                                                     
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                  
        _m00 struct ndis::net_buffer_t*               next;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::mdl_t*                        current_mdl;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentMdl
        _m02 uint32_t                                 current_mdl_offset;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentMdlOffset
        _m03 uint32_t                                 data_length;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataLength
        _m04 uint64_t                                 st_data_length;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .stDataLength
        _m05 struct nt::mdl_t*                        mdl_chain;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MdlChain
        _m06 uint32_t                                 data_offset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DataOffset
        _m07 union nt::slist_header_t                 link;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m08 union ndis::net_buffer_header_t          net_buffer_header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetBufferHeader
        _m09 uint16_t                                 checksum_bias;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ChecksumBias
        _m10 void*                                    ndis_pool_handle;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdisPoolHandle
        _m11 sdk::array<void*, 2>                     ndis_reserved;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdisReserved
        _m12 sdk::array<void*, 6>                     protocol_reserved;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ProtocolReserved
        _m13 sdk::array<void*, 4>                     miniport_reserved;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .MiniportReserved
        _m14 int64_t                                  data_physical_address;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DataPhysicalAddress
        _m15 struct ndis::net_buffer_shared_memory_t* shared_memory_info;     //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SharedMemoryInfo
        _m16 struct nt::scatter_gather_list_t*        scatter_gather_list;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ScatterGatherList
                                                                            
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER.$", 0xb0, true, 0x4f4c3cecc6279aa9 );                      
        SDK_FIXED_SIZE( net_buffer_t, 0xb0 );                               
    };                                                                      
};
#include "magic/net_buffer_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_t, 0xb0 );
