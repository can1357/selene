#pragma once
#include <sdkgen/support_library.hpp>
#include "unwind_history_table_entry_t.hpp"

#include "magic/unwind_history_table_t.start.hpp"
namespace win
{
    // [struct _UNWIND_HISTORY_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unwind_history_table_t  
    {                              
        using entry_t = sdk::array<struct win::unwind_history_table_entry_t, 12>;             
                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t count;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint8_t  local_hint;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LocalHint
        _m02 uint8_t  global_hint;   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .GlobalHint
        _m03 uint8_t  search;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Search
        _m04 uint8_t  once;          //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Once
        _m05 uint64_t low_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LowAddress
        _m06 uint64_t high_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HighAddress
        _m07 entry_t  entry;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Entry
                                   
        SDK_MAGIC_PROPERTIES( "_UNWIND_HISTORY_TABLE.$", 0xd8, true, 0xc2c5991c92313d1b );             
        SDK_FIXED_SIZE( unwind_history_table_t, 0xd8 );             
    };                             
};
#include "magic/unwind_history_table_t.end.hpp"
SDK_VERIFY( struct win::unwind_history_table_t, 0xd8 );
