#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/handle_table_free_list_t.start.hpp"
namespace nt
{
    union handle_table_entry_t;

    // [struct _HANDLE_TABLE_FREE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_table_free_list_t                                  
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                           
        _m00 struct ex::push_lock_t          free_list_lock;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeListLock
        _m01 union nt::handle_table_entry_t* first_free_handle_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstFreeHandleEntry
        _m02 union nt::handle_table_entry_t* last_free_handle_entry;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastFreeHandleEntry
        _m03 int32_t                         handle_count;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HandleCount
        _m04 uint32_t                        high_water_mark;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .HighWaterMark
                                                                     
        SDK_MAGIC_PROPERTIES( "_HANDLE_TABLE_FREE_LIST.$", 0x40, true, 0xadff4638e42ed01a );                        
        SDK_FIXED_SIZE( handle_table_free_list_t, 0x40 );                        
    };                                                               
};
#include "magic/handle_table_free_list_t.end.hpp"
SDK_VERIFY( struct nt::handle_table_free_list_t, 0x40 );
