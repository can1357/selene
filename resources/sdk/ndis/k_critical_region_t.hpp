#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_critical_region_t.start.hpp"
namespace ndis
{
    // [class KCriticalRegion]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_critical_region_t
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                  
        _m00 bool m_entered;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Entered
                             
        SDK_MAGIC_PROPERTIES( "KCriticalRegion.$", 0x1, true, 0xf12b9d5e906d9b68 );          
        SDK_FIXED_SIZE( k_critical_region_t, 0x1 );          
    };                       
};
#include "magic/k_critical_region_t.end.hpp"
SDK_VERIFY( class ndis::k_critical_region_t, 0x1 );
