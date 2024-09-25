#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/impersonation_state_checker_t.start.hpp"
namespace win
{
    // [class ImpersonationStateChecker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class impersonation_state_checker_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                          
        _m00 bool was_impersonating;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._wasImpersonating
                                       
        SDK_MAGIC_PROPERTIES( "ImpersonationStateChecker.$", 0x1, true, 0x53141327c1558756 );                  
        SDK_FIXED_SIZE( impersonation_state_checker_t, 0x1 );                  
    };                                 
};
#include "magic/impersonation_state_checker_t.end.hpp"
SDK_VERIFY( class win::impersonation_state_checker_t, 0x1 );
