#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"
#include "net_buffer_list_header_t.hpp"

#include "magic/net_buffer_list_t.start.hpp"
namespace ndis
{
    struct net_buffer_t;
    struct net_buffer_list_t;
    struct net_buffer_list_context_t;

    // [struct _NET_BUFFER_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_t                                                
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m00 struct ndis::net_buffer_list_t*         next;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct ndis::net_buffer_t*              first_net_buffer;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstNetBuffer
        _m02 union nt::slist_header_t                link;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m03 union ndis::net_buffer_list_header_t    net_buffer_list_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetBufferListHeader
        _m04 struct ndis::net_buffer_list_context_t* context;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
        _m05 struct ndis::net_buffer_list_t*         parent_net_buffer_list;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ParentNetBufferList
        _m06 void*                                   ndis_pool_handle;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdisPoolHandle
        _m07 sdk::array<void*, 2>                    ndis_reserved;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdisReserved
        _m08 sdk::array<void*, 4>                    protocol_reserved;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProtocolReserved
        _m09 sdk::array<void*, 2>                    miniport_reserved;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MiniportReserved
        _m10 void*                                   scratch;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Scratch
        _m11 void*                                   source_handle;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SourceHandle
        _m12 uint32_t                                nbl_flags;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NblFlags
        _m13 int32_t                                 child_ref_count;         //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .ChildRefCount
        _m14 uint32_t                                flags;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Flags
        _m15 int32_t                                 status;                  //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .Status
        _m16 uint32_t                                ndis_reserved2;          //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .NdisReserved2
        _m17 sdk::array<void*, 28>                   net_buffer_list_info;    //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NetBufferListInfo
                                                                            
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST.$", 0x180, true, 0x7fbfa57a1bd99b86 );                       
        SDK_DYNAMIC_SIZE( net_buffer_list_t );                              
    };                                                                      
};
#include "magic/net_buffer_list_t.end.hpp"
