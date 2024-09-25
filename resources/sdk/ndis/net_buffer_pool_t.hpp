#pragma once
#include <sdkgen/support_library.hpp>
#include "k_spin_lock_t.hpp"
#include "object_header_t.hpp"
#include "npaged_lookaside_list_t.hpp"
#include "k_spin_lock_manual_construct_t.hpp"

#include "magic/net_buffer_pool_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_POOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_pool_t                                          
    {                                                                 
        using list_lock_t =            sdk::variant<uint64_t, class ndis::k_spin_lock_t>;                            
        using lock_t =                 sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>;                            
        using net_buffer_pool_list_t = sdk::array<struct ndis::npaged_lookaside_list_t, 1>;                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                            
        _m00 struct ndis::object_header_t header;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 list_lock_t                  list_lock;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListLock
        _m02 nt::list_entry_t             allocated_list;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocatedList
        _m03 varuint_t                    item_length;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ItemLength
        _m04 void*                        owner_handle;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OwnerHandle
        _m05 void*                        allocator;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Allocator
        _m06 uint32_t                     tag;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Tag
        _m07 lock_t                       lock;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Lock
        _m08 nt::list_entry_t             global_net_buffer_pool_list;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GlobalNetBufferPoolList
        _m09 uint32_t                     flags;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Flags
        _m10 uint32_t                     data_size;                    //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .DataSize
        _m11 uint32_t                     mdl_size;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MdlSize
        _m12 net_buffer_pool_list_t       net_buffer_pool_list;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NetBufferPoolList
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_POOL.$", 0x180, true, 0x756d15242e26a6f3 );                            
        SDK_FIXED_SIZE( net_buffer_pool_t, 0x180 );                            
    };                                                                
};
#include "magic/net_buffer_pool_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_pool_t, 0x180 );
