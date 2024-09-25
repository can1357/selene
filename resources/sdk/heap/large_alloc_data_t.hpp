#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/large_alloc_data_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LARGE_ALLOC_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct large_alloc_data_t                                 
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct rtl::balanced_node_t tree_node;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeNode
        _m01 uint64_t                    virtual_address;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VirtualAddress
        _m02 uint16_t                    unused_bytes;          //{ +0x0018@0  +0x0018@0  +0x0018@0  +0x0018@0  } | .UnusedBytes
        _m03 uint1_t                     extra_present;         //{ +0x0020@0  +0x0020@0  +0x0020@0  +0x0020@0  } | .ExtraPresent
        _m04 uint52_t                    allocated_pages;       //{ +0x0020@12 +0x0020@12 +0x0020@12 +0x0020@12 } | .AllocatedPages
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m05 uint1_t                     guard_page_count;      //{ +0x0020@1  +0x0020@1  +0x0020@1  } | .GuardPageCount
        _m06 uint6_t                     guard_page_alignment;  //{ +0x0020@2  +0x0020@2  +0x0020@2  } | .GuardPageAlignment
                                                              
        SDK_MAGIC_PROPERTIES( "_HEAP_LARGE_ALLOC_DATA.$", 0x28, true, 0x8fa7ac0861d18e08 );                     
        SDK_FIXED_SIZE( large_alloc_data_t, 0x28 );                     
    };                                                        
};
#include "magic/large_alloc_data_t.end.hpp"
SDK_VERIFY( struct heap::large_alloc_data_t, 0x28 );
