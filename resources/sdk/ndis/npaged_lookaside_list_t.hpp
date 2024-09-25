#pragma once
#include <sdkgen/support_library.hpp>
#include "k_spin_lock_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "../nt/lookaside_list_ex_t.hpp"

#include "magic/npaged_lookaside_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NPAGED_LOOKASIDE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct npaged_lookaside_list_t                         
    {                                                      
        using list_swap_lock_t = sdk::variant<uint64_t, class ndis::k_spin_lock_t>;               
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 struct nt::lookaside_list_ex_t list;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 union nt::slist_header_t       backup_list;     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .BackupList
        _m02 union nt::slist_header_t*      alloc_list_ptr;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .AllocListPtr
        _m03 union nt::slist_header_t*      free_list_ptr;   //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .FreeListPtr
        _m04 list_swap_lock_t               list_swap_lock;  //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ListSwapLock
        _m05 uint8_t                        initialized;     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .Initialized
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_NPAGED_LOOKASIDE_LIST.$", 0x100, true, 0x6c07fbcd82d4314a );               
        SDK_FIXED_SIZE( npaged_lookaside_list_t, 0x100 );               
    };                                                     
};
#include "magic/npaged_lookaside_list_t.end.hpp"
SDK_VERIFY( struct ndis::npaged_lookaside_list_t, 0x100 );
