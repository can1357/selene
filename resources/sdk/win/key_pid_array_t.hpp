#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_pid_array_t.start.hpp"
namespace win
{
    // [struct KEY_PID_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_pid_array_t             
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                             
        _m00 void*            pid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PID
        _m01 nt::unicode_view key_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyName
                                       
        SDK_MAGIC_PROPERTIES( "KEY_PID_ARRAY.$", 0x18, true, 0x4fdac812f8593bc6 );         
        SDK_FIXED_SIZE( key_pid_array_t, 0x18 );         
    };                                 
};
#include "magic/key_pid_array_t.end.hpp"
SDK_VERIFY( struct win::key_pid_array_t, 0x18 );
