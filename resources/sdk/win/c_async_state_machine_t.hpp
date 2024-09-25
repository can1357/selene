#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_async_state_machine_t.start.hpp"
namespace win
{
    // [class CAsyncStateMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_async_state_machine_t                
    {                                            
        enum class u0_eflags_t : int32_t         
        {                                        
            waitingforbegin =    0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            waitingforfinish =   0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            beginaborted =       0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            executingfinish =    0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            initializingobject = 0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                       
        _m00 uint32_t                   dw_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._dwState
        _m01 sdk::hresult               hr;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._hr
        _m02 u0_eflags_t                eflags;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .eflags
                                                 
        SDK_MAGIC_PROPERTIES( "CAsyncStateMachine.$", 0x18, true, 0xfba74d6b3ae74547 );         
        SDK_FIXED_SIZE( c_async_state_machine_t, 0x18 );         
    };                                           
};
#include "magic/c_async_state_machine_t.end.hpp"
SDK_VERIFY( class win::c_async_state_machine_t, 0x18 );
