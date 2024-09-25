#pragma once
#include <sdkgen/support_library.hpp>
#include "k_spin_lock_t.hpp"
#include "object_header_t.hpp"
#include "npaged_lookaside_list_t.hpp"
#include "k_spin_lock_manual_construct_t.hpp"

#include "magic/net_buffer_list_pool_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_POOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_pool_t                                          
    {                                                                      
        using list_lock_t =                 sdk::variant<uint64_t, class ndis::k_spin_lock_t>;                                 
        using lock_t =                      sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>;                                 
        using net_buffer_list_pool_list_t = sdk::array<struct ndis::npaged_lookaside_list_t, 1>;                                 
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                 
        _m00 struct ndis::object_header_t header;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 list_lock_t                  list_lock;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListLock
        _m02 nt::list_entry_t             allocated_list;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocatedList
        _m03 uint8_t                      protocol_id;                       //{ +0x0058    +0x0020    +0x0020    +0x0020    } | .ProtocolId
        _m04 uint16_t                     context_size;                      //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .ContextSize
        _m05 void*                        owner_handle;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OwnerHandle
        _m06 void*                        allocator;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Allocator
        _m07 uint32_t                     tag;                               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Tag
        _m08 uint32_t                     flags;                             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Flags
        _m09 lock_t                       lock;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Lock
        _m10 nt::list_entry_t             global_net_buffer_list_pool_list;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GlobalNetBufferListPoolList
        _m11 uint32_t                     data_size;                         //{ +0x005c    +0x0058    +0x0058    +0x0058    } | .DataSize
        _m12 uint32_t                     mdl_size;                          //{ +0x0060    +0x005c    +0x005c    +0x005c    } | .MdlSize
        _m13 varuint_t                    item_length;                       //{ +0x0020    +0x0060    +0x0060    +0x0060    } | .ItemLength
        _m14 net_buffer_list_pool_list_t  net_buffer_list_pool_list;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NetBufferListPoolList
                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_POOL.$", 0x180, true, 0x823bbfa7b6d72b79 );                                 
        SDK_FIXED_SIZE( net_buffer_list_pool_t, 0x180 );                                 
    };                                                                     
};
#include "magic/net_buffer_list_pool_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_pool_t, 0x180 );
