#pragma once
#include <sdkgen/support_library.hpp>

namespace image { struct runtime_function_entry_t; }

#include "magic/inverted_function_table_entry_t.start.hpp"
namespace nt
{
    struct dynamic_function_table_t;

    // [struct _INVERTED_FUNCTION_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct inverted_function_table_entry_t                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 struct image::runtime_function_entry_t* function_table;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FunctionTable
        _m01 struct nt::dynamic_function_table_t*    dynamic_table;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DynamicTable
        _m02 void*                                   image_base;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageBase
        _m03 uint32_t                                size_of_image;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfImage
        _m04 uint32_t                                size_of_table;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SizeOfTable
                                                                    
        SDK_MAGIC_PROPERTIES( "_INVERTED_FUNCTION_TABLE_ENTRY.$", 0x18, true, 0xc8b883beb5eae1b4 );               
        SDK_FIXED_SIZE( inverted_function_table_entry_t, 0x18 );               
    };                                                              
};
#include "magic/inverted_function_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::inverted_function_table_entry_t, 0x18 );
