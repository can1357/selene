#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

#include "magic/unicode_prefix_table_entry_t.start.hpp"
namespace nt
{
    struct unicode_prefix_table_entry_t;

    // [struct _UNICODE_PREFIX_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct unicode_prefix_table_entry_t                                
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 int16_t                                  node_type_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                                  name_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 struct nt::unicode_prefix_table_entry_t* next_prefix_tree;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NextPrefixTree
        _m03 struct nt::unicode_prefix_table_entry_t* case_match;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CaseMatch
        _m04 struct rtl::splay_links_t                links;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Links
        _m05 nt::unicode_view*                        prefix;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Prefix
                                                                       
        SDK_NONVOL_PROPERTIES( "_UNICODE_PREFIX_TABLE_ENTRY.$", 0x38, true, 0x485e827fae8c83ee );                 
        SDK_FIXED_SIZE( unicode_prefix_table_entry_t, 0x38 );                 
    };                                                                 
};
#include "magic/unicode_prefix_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::unicode_prefix_table_entry_t, 0x38 );
