#pragma once
#include <sdkgen/support_library.hpp>
#include "stop_on_tag_t.hpp"

#include "magic/stop_on_values_t.start.hpp"
namespace heap
{
    // [struct _HEAP_STOP_ON_VALUES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stop_on_values_t                              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 uint64_t                   alloc_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocAddress
        _m01 struct heap::stop_on_tag_t alloc_tag;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocTag
        _m02 uint64_t                   re_alloc_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReAllocAddress
        _m03 struct heap::stop_on_tag_t re_alloc_tag;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReAllocTag
        _m04 uint64_t                   free_address;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeAddress
        _m05 struct heap::stop_on_tag_t free_tag;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeTag
                                                         
        SDK_MAGIC_PROPERTIES( "_HEAP_STOP_ON_VALUES.$", 0x30, true, 0xc07b68e30d261fd7 );                 
        SDK_FIXED_SIZE( stop_on_values_t, 0x30 );                 
    };                                                   
};
#include "magic/stop_on_values_t.end.hpp"
SDK_VERIFY( struct heap::stop_on_values_t, 0x30 );
