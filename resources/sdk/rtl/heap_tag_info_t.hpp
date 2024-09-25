#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_tag_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_TAG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_tag_info_t                  
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t number_of_allocations;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAllocations
        _m01 uint32_t number_of_frees;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfFrees
        _m02 uint64_t bytes_allocated;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesAllocated
                                            
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_TAG_INFO.$", 0x10, true, 0x963e53e3740b13ff );                      
        SDK_FIXED_SIZE( heap_tag_info_t, 0x10 );                      
    };                                      
};
#include "magic/heap_tag_info_t.end.hpp"
SDK_VERIFY( struct rtl::heap_tag_info_t, 0x10 );
