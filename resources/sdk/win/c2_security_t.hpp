#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c2_security_t.start.hpp"
namespace win
{
    // [class C2Security]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c2_security_t                  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 int32_t m_b_protection_mode;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_bProtectionMode
                                         
        SDK_MAGIC_PROPERTIES( "C2Security.$", 0x4, true, 0xc69f876fc583b4da );                    
        SDK_FIXED_SIZE( c2_security_t, 0x4 );                    
    };                                   
};
#include "magic/c2_security_t.end.hpp"
SDK_VERIFY( class win::c2_security_t, 0x4 );
