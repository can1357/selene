#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_tag_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_TAG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_tag_t                                         
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                number_of_allocations;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAllocations
        _m01 uint32_t                number_of_frees;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfFrees
        _m02 uint64_t                bytes_allocated;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesAllocated
        _m03 uint16_t                tag_index;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TagIndex
        _m04 uint16_t                creator_back_trace_index;  //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .CreatorBackTraceIndex
        _m05 sdk::array<wchar_t, 24> tag_name;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TagName
                                                              
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_TAG.$", 0x48, true, 0x3cbe99df228526b2 );                         
        SDK_FIXED_SIZE( heap_tag_t, 0x48 );                         
    };                                                        
};
#include "magic/heap_tag_t.end.hpp"
SDK_VERIFY( struct rtl::heap_tag_t, 0x48 );
