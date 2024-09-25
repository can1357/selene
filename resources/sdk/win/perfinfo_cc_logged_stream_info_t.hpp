#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_logged_stream_info_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_LOGGED_STREAM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_logged_stream_info_t       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t file_object_key;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObjectKey
        _m01 uint32_t reason_for_flush;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReasonForFlush
        _m02 uint32_t pages_to_write;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PagesToWrite
        _m03 uint64_t dirty_logged_pages;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirtyLoggedPages
        _m04 uint64_t dirty_logged_page_threshold;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DirtyLoggedPageThreshold
        _m05 int64_t  largest_lsn_for_lws;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LargestLsnForLWS
                                                  
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_LOGGED_STREAM_INFO.$", 0x28, true, 0x94815ee294c1b154 );                            
        SDK_FIXED_SIZE( perfinfo_cc_logged_stream_info_t, 0x28 );                            
    };                                            
};
#include "magic/perfinfo_cc_logged_stream_info_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_logged_stream_info_t, 0x28 );
