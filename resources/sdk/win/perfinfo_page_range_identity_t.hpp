#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_page_range_identity_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PAGE_RANGE_IDENTITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_page_range_identity_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint4_t  use_description;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UseDescription
        _m01 uint48_t unique_key;          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .UniqueKey
        _m02 void*    proto_pte_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtoPteAddress
        _m03 uint64_t page_frame_index;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageFrameIndex
        _m04 void*    virtual_address;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualAddress
        _m05 uint64_t page_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageCount
                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PAGE_RANGE_IDENTITY.$", 0x18, true, 0x8342651f4ccc7e9f );                  
        SDK_FIXED_SIZE( perfinfo_page_range_identity_t, 0x18 );                  
    };                                   
};
#include "magic/perfinfo_page_range_identity_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_page_range_identity_t, 0x18 );
