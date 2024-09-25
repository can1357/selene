#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_hash_table_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_HASH_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dynamic_hash_table_entry_t   
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t linkage;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Linkage
        _m01 uint64_t         signature;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
                                        
        SDK_NONVOL_PROPERTIES( "_RTL_DYNAMIC_HASH_TABLE_ENTRY.$", 0x18, true, 0x30f3ed1ca15d3355 );          
        SDK_FIXED_SIZE( dynamic_hash_table_entry_t, 0x18 );          
    };                                  
};
#include "magic/dynamic_hash_table_entry_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_hash_table_entry_t, 0x18 );
