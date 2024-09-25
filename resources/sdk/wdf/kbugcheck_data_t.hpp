#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kbugcheck_data_t.start.hpp"
namespace wdf
{
    // [struct _KBUGCHECK_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kbugcheck_data_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t bug_check_data_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BugCheckDataSize
        _m01 uint32_t bug_check_code;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BugCheckCode
        _m02 uint64_t parameter1;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameter1
        _m03 uint64_t parameter2;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parameter2
        _m04 uint64_t parameter3;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameter3
        _m05 uint64_t parameter4;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Parameter4
                                          
        SDK_MAGIC_PROPERTIES( "_KBUGCHECK_DATA.$", 0x28, true, 0x515b209cf0791d44 );                    
        SDK_FIXED_SIZE( kbugcheck_data_t, 0x28 );                    
    };                                    
};
#include "magic/kbugcheck_data_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_data_t, 0x28 );
