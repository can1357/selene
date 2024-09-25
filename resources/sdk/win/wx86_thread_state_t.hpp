#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wx86_thread_state_t.start.hpp"
namespace win
{
    // [struct _Wx86ThreadState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wx86_thread_state_t            
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m00 uint32_t* call_bx86_eip;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallBx86Eip
        _m01 void*     deallocation_cpu;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeallocationCpu
        _m02 uint8_t   use_known_wx86_dll;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UseKnownWx86Dll
        _m03 char      ole_stub_invoked;    //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .OleStubInvoked
                                          
        SDK_MAGIC_PROPERTIES( "_Wx86ThreadState.$", 0x18, true, 0x3c4f93130b296f36 );                   
        SDK_FIXED_SIZE( wx86_thread_state_t, 0x18 );                   
    };                                    
};
#include "magic/wx86_thread_state_t.end.hpp"
SDK_VERIFY( struct win::wx86_thread_state_t, 0x18 );
