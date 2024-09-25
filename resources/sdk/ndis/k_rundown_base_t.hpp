#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/rundown_ref_t.hpp"

#include "magic/k_rundown_base_t.start.hpp"
namespace ndis
{
    // [class KRundownBase]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_rundown_base_t                      
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct ex::rundown_ref_t m_rundown;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_rundown
                                                
        SDK_MAGIC_PROPERTIES( "KRundownBase.$", 0x8, true, 0x82aa8f68cb0a391e );          
        SDK_FIXED_SIZE( k_rundown_base_t, 0x8 );          
    };                                          
};
#include "magic/k_rundown_base_t.end.hpp"
SDK_VERIFY( class ndis::k_rundown_base_t, 0x8 );
