#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kernel_user_times_t.start.hpp"
namespace win
{
    // [struct _KERNEL_USER_TIMES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kernel_user_times_t   
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t create_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateTime
        _m01 int64_t exit_time;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExitTime
        _m02 int64_t kernel_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelTime
        _m03 int64_t user_time;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UserTime
                                 
        SDK_NONVOL_PROPERTIES( "_KERNEL_USER_TIMES.$", 0x20, true, 0xda8e83319169b849 );            
        SDK_FIXED_SIZE( kernel_user_times_t, 0x20 );            
    };                           
};
#include "magic/kernel_user_times_t.end.hpp"
SDK_VERIFY( struct win::kernel_user_times_t, 0x20 );
