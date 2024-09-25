#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/job_set_array_t.start.hpp"
namespace win
{
    // [struct _JOB_SET_ARRAY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct job_set_array_t         
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    job_handle;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .JobHandle
        _m01 uint32_t member_level;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MemberLevel
        _m02 uint32_t flags;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                   
        SDK_NONVOL_PROPERTIES( "_JOB_SET_ARRAY.$", 0x10, true, 0x1523a715cb25c572 );             
        SDK_FIXED_SIZE( job_set_array_t, 0x10 );             
    };                             
};
#include "magic/job_set_array_t.end.hpp"
SDK_VERIFY( struct win::job_set_array_t, 0x10 );
