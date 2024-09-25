#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/handle_table_t.start.hpp"
namespace alpc
{
    struct handle_entry_t;

    // [struct _ALPC_HANDLE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_table_t                               
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct alpc::handle_entry_t* handles;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handles
        _m01 varuint_t                    total_handles;  //{ +0x0008    +0x0008    +0x0010    +0x0008    } | .TotalHandles
        _m02 uint32_t                     flags;          //{ +0x000c    +0x000c    +0x0018    +0x000c    } | .Flags
        _m03 struct ex::push_lock_t       lock;           //{ +0x0010    +0x0010    +0x0008    +0x0010    } | .Lock
                                                        
        SDK_MAGIC_PROPERTIES( "_ALPC_HANDLE_TABLE.$", 0x18, true, 0xaed77aa7cff19eab );              
        SDK_DYNAMIC_SIZE( handle_table_t );              
    };                                                  
};
#include "magic/handle_table_t.end.hpp"
