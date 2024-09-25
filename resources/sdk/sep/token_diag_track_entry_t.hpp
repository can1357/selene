#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_diag_track_entry_t.start.hpp"
namespace sep
{
    // [struct _SEP_TOKEN_DIAG_TRACK_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_diag_track_entry_t                   
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 void*                    process_cid;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessCid
        _m01 void*                    thread_cid;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadCid
        _m02 sdk::array<uint8_t, 16>  image_file_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageFileName
        _m03 uint32_t                 create_method;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreateMethod
        _m04 sdk::array<uint64_t, 30> create_trace;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CreateTrace
        _m05 int32_t                  count;            //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .Count
        _m06 int32_t                  capture_count;    //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .CaptureCount
                                                      
        SDK_MAGIC_PROPERTIES( "_SEP_TOKEN_DIAG_TRACK_ENTRY.$", 0x120, true, 0xa61d8b9aa793d85f );                
        SDK_FIXED_SIZE( token_diag_track_entry_t, 0x120 );                
    };                                                
};
#include "magic/token_diag_track_entry_t.end.hpp"
SDK_VERIFY( struct sep::token_diag_track_entry_t, 0x120 );
