#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktimer_table_entry_t.start.hpp"
namespace nt
{
    // [struct _KTIMER_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer_table_entry_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                          
        _m00 uint64_t         lock;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Entry
        _m02 uint64_t         time;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Time
                                    
        SDK_MAGIC_PROPERTIES( "_KTIMER_TABLE_ENTRY.$", 0x20, true, 0x2292464c34b6eddc );      
        SDK_FIXED_SIZE( ktimer_table_entry_t, 0x20 );      
    };                              
};
#include "magic/ktimer_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::ktimer_table_entry_t, 0x20 );
