#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_rundown_holder_t.start.hpp"
namespace ndis
{
    class k_rundown_t;

    // [class KRundownHolder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_rundown_holder_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 class ndis::k_rundown_t& m_rundown;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_rundown
        _m01 uint32_t                 m_count;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_count
                                                
        SDK_MAGIC_PROPERTIES( "KRundownHolder.$", 0x10, true, 0x2e91c590c087a9c3 );          
        SDK_FIXED_SIZE( k_rundown_holder_t, 0x10 );          
    };                                          
};
#include "magic/k_rundown_holder_t.end.hpp"
SDK_VERIFY( class ndis::k_rundown_holder_t, 0x10 );
