#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_irql_region_t.start.hpp"
namespace ndis
{
    // [struct KIrqlRegion]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct k_irql_region_t      
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t m_old_irql;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_OldIrql
                                
        SDK_MAGIC_PROPERTIES( "KIrqlRegion.$", 0x1, true, 0xb894b0ec7033873b );           
        SDK_FIXED_SIZE( k_irql_region_t, 0x1 );           
    };                          
};
#include "magic/k_irql_region_t.end.hpp"
SDK_VERIFY( struct ndis::k_irql_region_t, 0x1 );
