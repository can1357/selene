#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_kernelmemory_range_usage_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_KERNELMEMORY_RANGE_USAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_kernelmemory_range_usage_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint5_t  usage_type;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UsageType
        _m01 void*    virtual_address;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualAddress
        _m02 uint64_t page_count;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageCount
                                              
        SDK_MAGIC_PROPERTIES( "_PERFINFO_KERNELMEMORY_RANGE_USAGE.$", 0x18, true, 0xa7b7a34feb23efe8 );                
        SDK_FIXED_SIZE( perfinfo_kernelmemory_range_usage_t, 0x18 );                
    };                                        
};
#include "magic/perfinfo_kernelmemory_range_usage_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_kernelmemory_range_usage_t, 0x18 );
