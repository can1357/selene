#pragma once
#include <sdkgen/support_library.hpp>
#include "type_of_memory_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/memory_allocation_descriptor_t.start.hpp"
namespace nt
{
    // [struct _MEMORY_ALLOCATION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_allocation_descriptor_t            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                           
        _m00 nt::list_entry_t            list_entry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 enum nt::type_of_memory_t   memory_type;  //{ +0x0010    +0x0010    +0x0018    +0x0010    } | .MemoryType
        _m02 uint64_t                    base_page;    //{ +0x0018    +0x0018    +0x0020    +0x0018    } | .BasePage
        _m03 uint64_t                    page_count;   //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .PageCount
                                                     
        // Windows 11                                
        //                                           
        _m04 struct rtl::balanced_node_t node;         //{ +0x0000    } | .Node
                                                     
        SDK_MAGIC_PROPERTIES( "_MEMORY_ALLOCATION_DESCRIPTOR.$", 0x28, true, 0x2855df11a6cafa58 );            
        SDK_DYNAMIC_SIZE( memory_allocation_descriptor_t );            
    };                                               
};
#include "magic/memory_allocation_descriptor_t.end.hpp"
