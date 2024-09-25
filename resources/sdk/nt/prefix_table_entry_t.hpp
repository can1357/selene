#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

#include "magic/prefix_table_entry_t.start.hpp"
namespace nt
{
    struct prefix_table_entry_t;

    // [struct _PREFIX_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct prefix_table_entry_t                                
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 int16_t                          node_type_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                          name_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 struct nt::prefix_table_entry_t* next_prefix_tree;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NextPrefixTree
        _m03 struct rtl::splay_links_t        links;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Links
        _m04 nt::ascii_view*                  prefix;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Prefix
                                                               
        SDK_NONVOL_PROPERTIES( "_PREFIX_TABLE_ENTRY.$", 0x30, true, 0x805ae4d86a15ee26 );                 
        SDK_FIXED_SIZE( prefix_table_entry_t, 0x30 );                 
    };                                                         
};
#include "magic/prefix_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::prefix_table_entry_t, 0x30 );
