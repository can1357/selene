#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_can_write_fail_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_CAN_WRITE_FAIL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_can_write_fail_t    
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t file_object_key;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObjectKey
        _m01 uint64_t total_dirty_pages;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalDirtyPages
        _m02 uint64_t dirty_page_threshold;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirtyPageThreshold
        _m03 uint32_t bytes_to_write;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BytesToWrite
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_CAN_WRITE_FAIL.$", 0x20, true, 0xfaeee22d417f25e0 );                     
        SDK_FIXED_SIZE( perfinfo_cc_can_write_fail_t, 0x20 );                     
    };                                     
};
#include "magic/perfinfo_cc_can_write_fail_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_can_write_fail_t, 0x20 );
