#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_hash_table_context_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dynamic_hash_table_context_t     
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 nt::list_entry_t* chain_head;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ChainHead
        _m01 nt::list_entry_t* prev_linkage;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PrevLinkage
        _m02 uint64_t          signature;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
                                            
        SDK_NONVOL_PROPERTIES( "_RTL_DYNAMIC_HASH_TABLE_CONTEXT.$", 0x18, true, 0x281a60f65c7acab2 );             
        SDK_FIXED_SIZE( dynamic_hash_table_context_t, 0x18 );             
    };                                      
};
#include "magic/dynamic_hash_table_context_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_hash_table_context_t, 0x18 );
