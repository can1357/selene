#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protected_access_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROTECTED_ACCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protected_access_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t dominate_mask;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DominateMask
        _m01 uint32_t denied_process_access;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeniedProcessAccess
        _m02 uint32_t denied_thread_access;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeniedThreadAccess
                                            
        SDK_MAGIC_PROPERTIES( "_RTL_PROTECTED_ACCESS.$", 0xc, true, 0x3c9096aab00a1185 );                      
        SDK_FIXED_SIZE( protected_access_t, 0xc );                      
    };                                      
};
#include "magic/protected_access_t.end.hpp"
SDK_VERIFY( struct rtl::protected_access_t, 0xc );
