#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unicode_prefix_table_t.start.hpp"
namespace nt
{
    struct unicode_prefix_table_entry_t;

    // [struct _UNICODE_PREFIX_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct unicode_prefix_table_t                                      
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 int16_t                                  node_type_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                                  name_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 struct nt::unicode_prefix_table_entry_t* next_prefix_tree;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NextPrefixTree
        _m03 struct nt::unicode_prefix_table_entry_t* last_next_entry;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastNextEntry
                                                                       
        SDK_NONVOL_PROPERTIES( "_UNICODE_PREFIX_TABLE.$", 0x18, true, 0x4de8477438ed6b9a );                 
        SDK_FIXED_SIZE( unicode_prefix_table_t, 0x18 );                 
    };                                                                 
};
#include "magic/unicode_prefix_table_t.end.hpp"
SDK_VERIFY( struct nt::unicode_prefix_table_t, 0x18 );
