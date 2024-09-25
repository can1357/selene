#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tag_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_TAG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tag_entry_t                                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                allocs;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Allocs
        _m01 uint32_t                frees;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Frees
        _m02 uint64_t                size;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint16_t                tag_index;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TagIndex
        _m04 uint16_t                creator_back_trace_index;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .CreatorBackTraceIndex
        _m05 sdk::array<wchar_t, 24> tag_name;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TagName
                                                              
        SDK_MAGIC_PROPERTIES( "_HEAP_TAG_ENTRY.$", 0x48, true, 0xab9e6795c459e794 );                         
        SDK_FIXED_SIZE( tag_entry_t, 0x48 );                         
    };                                                        
};
#include "magic/tag_entry_t.end.hpp"
SDK_VERIFY( struct heap::tag_entry_t, 0x48 );
