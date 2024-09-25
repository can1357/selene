#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_flush_section_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_FLUSH_SECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_flush_section_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t work_item_key;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
        _m01 uint64_t file_object_key;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObjectKey
        _m02 uint64_t offset;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
        _m03 uint32_t length;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 uint32_t mm_flush_flags;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MmFlushFlags
                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_FLUSH_SECTION.$", 0x20, true, 0xfd28b7626cb684cc );                
        SDK_FIXED_SIZE( perfinfo_cc_flush_section_t, 0x20 );                
    };                                
};
#include "magic/perfinfo_cc_flush_section_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_flush_section_t, 0x20 );
