#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chash_table_t.start.hpp"
namespace rtl
{
    struct chash_entry_t;

    // [struct _RTL_CHASH_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct chash_table_t                                 
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 struct rtl::chash_entry_t* table;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Table
        _m01 uint32_t                   entry_size_shift;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EntrySizeShift
        _m02 uint32_t                   entry_max;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EntryMax
        _m03 uint32_t                   entry_count;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EntryCount
                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_CHASH_TABLE.$", 0x18, true, 0x9180b75f359cfca1 );                 
        SDK_FIXED_SIZE( chash_table_t, 0x18 );                 
    };                                                   
};
#include "magic/chash_table_t.end.hpp"
SDK_VERIFY( struct rtl::chash_table_t, 0x18 );
