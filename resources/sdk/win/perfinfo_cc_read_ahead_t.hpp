#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_read_ahead_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_READ_AHEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_read_ahead_t    
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t work_item_key;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
        _m01 uint64_t file_offset;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileOffset
        _m02 uint32_t size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint32_t page_priority;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PagePriority
        _m04 uint32_t detected_pattern;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DetectedPattern
                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_READ_AHEAD.$", 0x20, true, 0x526cab2d4bb2bcdc );                 
        SDK_FIXED_SIZE( perfinfo_cc_read_ahead_t, 0x20 );                 
    };                                 
};
#include "magic/perfinfo_cc_read_ahead_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_read_ahead_t, 0x20 );
