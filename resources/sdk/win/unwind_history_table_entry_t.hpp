#pragma once
#include <sdkgen/support_library.hpp>

namespace image { struct runtime_function_entry_t; }

#include "magic/unwind_history_table_entry_t.start.hpp"
namespace win
{
    // [struct _UNWIND_HISTORY_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unwind_history_table_entry_t                             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 uint64_t                                image_base;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase
        _m01 struct image::runtime_function_entry_t* function_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FunctionEntry
                                                                    
        SDK_MAGIC_PROPERTIES( "_UNWIND_HISTORY_TABLE_ENTRY.$", 0x10, true, 0x75fd210f6a3ae921 );               
        SDK_FIXED_SIZE( unwind_history_table_entry_t, 0x10 );               
    };                                                              
};
#include "magic/unwind_history_table_entry_t.end.hpp"
SDK_VERIFY( struct win::unwind_history_table_entry_t, 0x10 );
