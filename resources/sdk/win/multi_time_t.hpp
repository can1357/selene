#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multi_time_t.start.hpp"
namespace win
{
    // [struct _MULTI_TIME]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct multi_time_t          
    {                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t qpc;          //{ +0x0000    +0x0000    +0x0000    } | .Qpc
        _m01 int64_t host_qpc;     //{ +0x0008    +0x0008    +0x0008    } | .HostQpc
        _m02 int64_t system_time;  //{ +0x0010    +0x0010    +0x0010    } | .SystemTime
                                 
        SDK_MAGIC_PROPERTIES( "_MULTI_TIME.$", 0x18, true, 0x38bfa758b45e5b2e );            
        SDK_FIXED_SIZE( multi_time_t, 0x18 );            
    };                           
};
#include "magic/multi_time_t.end.hpp"
SDK_VERIFY( struct win::multi_time_t, 0x18 );
