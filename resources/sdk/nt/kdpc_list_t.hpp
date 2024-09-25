#pragma once
#include <sdkgen/support_library.hpp>
#include "single_list_entry_t.hpp"

#include "magic/kdpc_list_t.start.hpp"
namespace nt
{
    // [struct _KDPC_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kdpc_list_t                                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m00 struct nt::single_list_entry_t  list_head;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 struct nt::single_list_entry_t* last_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastEntry
                                                        
        SDK_MAGIC_PROPERTIES( "_KDPC_LIST.$", 0x10, true, 0xe59619097e15743b );           
        SDK_FIXED_SIZE( kdpc_list_t, 0x10 );            
    };                                                  
};
#include "magic/kdpc_list_t.end.hpp"
SDK_VERIFY( struct nt::kdpc_list_t, 0x10 );
