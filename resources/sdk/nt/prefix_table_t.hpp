#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prefix_table_t.start.hpp"
namespace nt
{
    struct prefix_table_entry_t;

    // [struct _PREFIX_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct prefix_table_t                                      
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 int16_t                          node_type_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                          name_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 struct nt::prefix_table_entry_t* next_prefix_tree;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NextPrefixTree
                                                               
        SDK_NONVOL_PROPERTIES( "_PREFIX_TABLE.$", 0x10, true, 0xdf61f4ae7fab4264 );                 
        SDK_FIXED_SIZE( prefix_table_t, 0x10 );                 
    };                                                         
};
#include "magic/prefix_table_t.end.hpp"
SDK_VERIFY( struct nt::prefix_table_t, 0x10 );
