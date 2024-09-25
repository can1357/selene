#pragma once
#include <sdkgen/support_library.hpp>
#include "k_spin_lock_t.hpp"
#include "object_header_t.hpp"

#include "magic/pool_header_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_POOL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_header_t                                 
    {                                                    
        using list_lock_t = sdk::variant<uint64_t, class ndis::k_spin_lock_t>;               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                               
        _m00 struct ndis::object_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 list_lock_t                  list_lock;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListLock
        _m02 nt::list_entry_t             allocated_list;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocatedList
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_POOL_HEADER.$", 0x20, true, 0x83f3de05ae2c5e4a );               
        SDK_FIXED_SIZE( pool_header_t, 0x20 );               
    };                                                   
};
#include "magic/pool_header_t.end.hpp"
SDK_VERIFY( struct ndis::pool_header_t, 0x20 );
