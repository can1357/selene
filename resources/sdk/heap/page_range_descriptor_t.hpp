#pragma once
#include <sdkgen/support_library.hpp>
#include "descriptor_key_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/page_range_descriptor_t.start.hpp"
namespace heap
{
    // [struct _HEAP_PAGE_RANGE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_range_descriptor_t                                              
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                      
        _m00 struct rtl::balanced_node_t                   tree_node;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeNode
        _m01 uint32_t                                      tree_signature;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeSignature
        _m02 varuint_t                                     unused_bytes;          //{ +0x0006    +0x0004    +0x0004    +0x0004    } | .UnusedBytes
        _m03 uint1_t                                       extra_present;         //{ +0x0004@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .ExtraPresent
        _m04 volatile uint8_t                              range_flags;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RangeFlags
        _m05 struct heap::descriptor_key_t                 key;                   //{ +0x001a    +0x001c    +0x001c    +0x001c    } | .Key
        _m06 sdk::variant<uint8_t, sdk::array<uint8_t, 3>> align;                 //{ +0x001a    +0x001c    +0x001c    +0x001c    } | .Align
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m07 uint8_t                                       committed_page_count;  //{ +0x0019    +0x0019    +0x0019    } | .CommittedPageCount
        _m08 uint8_t                                       unit_offset;           //{ +0x001f    +0x001f    +0x001f    } | .UnitOffset
        _m09 uint8_t                                       unit_size;             //{ +0x001f    +0x001f    +0x001f    } | .UnitSize
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m10 uint8_t                                       offset;                //{ +0x001b    } | .Offset
        _m11 uint8_t                                       size;                  //{ +0x001b    } | .Size
                                                                                
        SDK_MAGIC_PROPERTIES( "_HEAP_PAGE_RANGE_DESCRIPTOR.$", 0x20, true, 0xf4db5e4e78419228 );                     
        SDK_FIXED_SIZE( page_range_descriptor_t, 0x20 );                        
    };                                                                          
};
#include "magic/page_range_descriptor_t.end.hpp"
SDK_VERIFY( struct heap::page_range_descriptor_t, 0x20 );
